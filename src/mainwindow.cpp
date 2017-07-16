#include "mainwindow.h"
#include <QSettings>
#include "qconsolewidget.h"
#include "dthememanager.h"
#include "constant.h"

MainWindow::MainWindow(DMainWindow *parent) :
    DMainWindow(parent)
{
    DThemeManager::instance()->setTheme("light");

    installEventFilter(this);

    toolbar = new Toolbar();
    this->titlebar()->setCustomWidget(toolbar, Qt::AlignVCenter, false);

    layoutWidget = new QWidget();
    mainLayout = new QVBoxLayout(layoutWidget);

    btnLayout = new QHBoxLayout();

    QPushButton *homeBtn = new QPushButton(QIcon(":/res/image/1.png"), "");
    QPushButton *settingBtn = new QPushButton(QIcon(":/res/image/2.png"), "");
    QPushButton *outputBtn = new QPushButton(QIcon(":/res/image/3.png"), "");

    vecBtn.push_back(homeBtn);
    vecBtn.push_back(settingBtn);
    vecBtn.push_back(outputBtn);

    btnLayout->addSpacing(45);
    btnLayout->addStretch();
    btnLayout->addWidget(homeBtn, 0, Qt::AlignHCenter);
    btnLayout->addWidget(settingBtn, 0, Qt::AlignHCenter);
    btnLayout->addWidget(outputBtn, 0, Qt::AlignHCenter);
    btnLayout->addStretch();
    btnLayout->addSpacing(45);

    layout = new QStackedLayout();

    homeWidget = new QWidget();
    settingWidget = new QWidget();

    consoleWidget = new QConsoleWidget();
    consoleWidget->setFixedSize(Constant::CONSOLE_WIDGET_WIDTH, Constant::CONSOLE_WIDGET_HEIGHT);

    layout->addWidget(homeWidget);
    layout->addWidget(settingWidget);
    layout->addWidget(consoleWidget);
    layout->setCurrentIndex(0);

    mainLayout->addLayout(btnLayout);
    mainLayout->addLayout(layout);

    this->setCentralWidget(layoutWidget);

    initData();
}

MainWindow::~MainWindow()
{
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->buttons() == Qt::LeftButton)
    {
        m_pointStart = event->globalPos() - this->pos();
    }

    event->accept();
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton)
    {
        move(event->globalPos() - m_pointStart);
        //setWindowOpacity(0.5);
    }

    event->accept();
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    //setWindowOpacity(1);
    event->accept();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    if (trayIcon->isVisible())
    {
        hide();
        this->actShow->setText(tr("Show"));
        event->ignore();
    }
}

void MainWindow::createTray()
{
    this->actShow = new QAction(tr("Show"), this);
    connect(actShow, SIGNAL(triggered()), this, SLOT(slotShow()));

    this->actExit = new QAction(tr("Quit"), this);
    connect(actExit, SIGNAL(triggered()), qApp, SLOT(quit()));

    this->menuTray = new QMenu(this);
    this->menuTray->addAction(actShow);
    this->menuTray->addSeparator();
    this->menuTray->addAction(tr("New Features"));
    this->menuTray->addSeparator();
    this->menuTray->addAction(actExit);

    this->trayIcon = new QSystemTrayIcon(this);
    this->trayIcon->setIcon(QIcon(":/res/image/logo.png"));
    this->trayIcon->setContextMenu(menuTray);
    connect(trayIcon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)), this, SLOT(trayIconActivated(QSystemTrayIcon::ActivationReason)));
    this->trayIcon->show();
}

void MainWindow::slotShow()
{
    if (isHidden())
    {
        show();
        this->actShow->setText(tr("Hide"));
    }
    else
    {
        hide();
        this->actShow->setText(tr("Show"));
    }
}

void MainWindow::slotMin()
{
    hide();
    this->actShow->setText(tr("Show"));
}

void MainWindow::initData()
{
    //setWindowFlags(Qt::FramelessWindowHint);
    //setAttribute(Qt::WA_TranslucentBackground);
    m_menu = new QMenu();
    m_menu->addAction(tr("New Features"));
    m_menu->addSeparator();

    // 获取当前用户名
    QStringList userName = QStandardPaths::standardLocations(QStandardPaths::HomeLocation);
    //userName = userName.section("/", -1, -1);

    for (int i = 0; i != vecBtn.size(); ++i)
    {
        vecBtn[i]->setFixedSize(Constant::BUTTON_WIDTH, Constant::BUTTON_HEIGHT);
        vecBtn[i]->setIconSize(QSize(Constant::BUTTON_WIDTH, Constant::BUTTON_HEIGHT));
        vecBtn[i]->setCheckable(true);
        vecBtn[i]->setAutoExclusive(true);
        connect(vecBtn[i], SIGNAL(clicked()), this, SLOT(onClickedBtn()));
    }

    // 创建托盘
    createTray();
}

void MainWindow::trayIconActivated(QSystemTrayIcon::ActivationReason reason)
{
    switch(reason)
    {
    case QSystemTrayIcon::Trigger:
        slotShow();
        break;

    default:
        break;
    }
}

void MainWindow::onClickedBtn()
{
    setCurrentWidget();
}

void MainWindow::setCurrentWidget()
{
    for (int i = 0; i != vecBtn.size(); ++i)
    {
        if (vecBtn[i]->isChecked())
        {
            layout->setCurrentIndex(i);
        }
    }
}


