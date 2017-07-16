#include "toolbar.h"
#include <QEvent>
#include <QHBoxLayout>
#include <QLabel>

Toolbar::Toolbar(QWidget *parent) : QWidget(parent)
{
    installEventFilter(this);
    setMouseTracking(true);

    setFixedHeight(24);

    QHBoxLayout *layout = new QHBoxLayout(this);
    layout->setContentsMargins(0, 0, 0, 0);

    QPixmap iconPixmap = QPixmap(":/res/image/logo.png");
    QLabel *iconLabel = new QLabel();
    iconLabel->setPixmap(iconPixmap.scaled(24, 24, Qt::KeepAspectRatioByExpanding));

    QLabel *titleLabel = new QLabel("Remastersys Dtk");

    layout->addWidget(iconLabel);
    layout->addSpacing(90);
    layout->addStretch();
    layout->addWidget(titleLabel, 0, Qt::AlignHCenter);
    layout->addStretch();
}

Toolbar::~Toolbar()
{
}

bool Toolbar::eventFilter(QObject *obj, QEvent *event)
{
    return QObject::eventFilter(obj, event);
}


