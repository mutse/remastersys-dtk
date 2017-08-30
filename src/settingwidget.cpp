#include "settingwidget.h"
#include "constant.h"

SettingWidget::SettingWidget(QWidget *parent)
    : QWidget(parent)
{
    layout = new QVBoxLayout(this);
    userLayout = new QHBoxLayout;
    userInfo = new QLabel("Username");
    userInfo->setFixedSize(100, 25);
    userText = new QLineEdit("Custom");
    userText->setFixedSize(300, 25);

    userLayout->addSpacing(10);
    userLayout->addStretch();
    userLayout->addWidget(userInfo);
    userLayout->addStretch();
    userLayout->addWidget(userText);
    userLayout->addStretch();
    userLayout->addSpacing(10);

    labelLayout = new QHBoxLayout;
    labelInfo = new QLabel("CD Label");
    labelInfo->setFixedSize(100, 25);
    labelText = new QLineEdit("Custom Live CD");
    labelText->setFixedSize(300, 25);

    labelLayout->addSpacing(10);
    labelLayout->addStretch();
    labelLayout->addWidget(labelInfo);
    labelLayout->addStretch();
    labelLayout->addWidget(labelText);
    labelLayout->addStretch();
    labelLayout->addSpacing(10);

    fileLayout = new QHBoxLayout;
    fileInfo = new QLabel("Filename");
    fileInfo->setFixedSize(100, 25);
    fileText = new QLineEdit("custom-$1.iso");
    fileText->setFixedSize(300, 25);

    fileLayout->addSpacing(10);
    fileLayout->addStretch();
    fileLayout->addWidget(fileInfo);
    fileLayout->addStretch();
    fileLayout->addWidget(fileText);
    fileLayout->addStretch();
    fileLayout->addSpacing(10);

    dirLayout = new QHBoxLayout;
    dirInfo = new QLabel("Working directory");
    dirInfo->setFixedSize(100, 25);
    dirText = new QLineEdit("/home/remastersys-dtk");
    dirText->setFixedSize(240, 25);
    dirBtn = new QPushButton();
    dirBtn->setFixedSize(60, 25);

    dirLayout->addSpacing(10);
    dirLayout->addStretch();
    dirLayout->addWidget(dirInfo);
    dirLayout->addStretch();
    dirLayout->addWidget(dirText);
    dirLayout->addWidget(dirBtn);
    dirLayout->addStretch();
    dirLayout->addSpacing(10);

    workLayout = new QHBoxLayout;
    workInfo = new QLabel("<font color=red>Working directory must be on a drive formatted with a linux filesystem."
                          "Remastersys will create the \"remastersys\" working folder in this folder and will not harm"
                          " any other files or folders.</font>");
    workInfo->setFixedSize(400, 80);
    workInfo->setWordWrap(true);

    workLayout->addSpacing(20);
    workLayout->addStretch();
    workLayout->addWidget(workInfo);
    workLayout->addStretch();
    workLayout->addSpacing(20);

    exclLayout = new QHBoxLayout;
    exclInfo = new QLabel("Files to exclude");
    exclInfo->setFixedSize(100, 25);
    exclText = new QLineEdit("");
    exclText->setFixedSize(300, 25);

    exclLayout->addSpacing(10);
    exclLayout->addStretch();
    exclLayout->addWidget(exclInfo);
    exclLayout->addStretch();
    exclLayout->addWidget(exclText);
    exclLayout->addStretch();
    exclLayout->addSpacing(10);

    urlLayout = new QHBoxLayout;
    urlInfo = new QLabel("URL for USB Creator");
    urlInfo->setFixedSize(100, 25);
    urlText = new QLineEdit("http://remastersys-dtk.com");
    urlText->setFixedSize(300, 25);

    urlLayout->addSpacing(10);
    urlLayout->addStretch();
    urlLayout->addWidget(urlInfo);
    urlLayout->addStretch();
    urlLayout->addWidget(urlText);
    urlLayout->addStretch();
    urlLayout->addSpacing(10);

    hfsLayout = new QHBoxLayout;
    hfsInfo = new QLabel("Squashfs option");
    hfsInfo->setFixedSize(100, 25);
    hfsText = new QLineEdit("-no-recovery -always-use-fragments -b 1M -no-duplicates");
    hfsText->setFixedSize(300, 25);

    hfsLayout->addSpacing(10);
    hfsLayout->addStretch();
    hfsLayout->addWidget(hfsInfo);
    hfsLayout->addStretch();
    hfsLayout->addWidget(hfsText);
    hfsLayout->addStretch();
    hfsLayout->addSpacing(10);

    iconLayout = new QHBoxLayout;
    iconCheck = new QCheckBox("Show install icon on Backup mode desktop");
    iconCheck->setFixedSize(400, 25);

    iconLayout->addSpacing(10);
    iconLayout->addStretch();
    iconLayout->addWidget(iconCheck);
    iconLayout->addStretch();
    iconLayout->addSpacing(100);

    layout->addSpacing(2);
    layout->addLayout(userLayout);
    layout->addLayout(labelLayout);
    layout->addLayout(fileLayout);
    layout->addLayout(dirLayout);
    layout->addLayout(workLayout);
    layout->addLayout(exclLayout);
    layout->addLayout(urlLayout);
    layout->addLayout(hfsLayout);
    layout->addLayout(iconLayout);
    layout->addStretch();
    layout->addSpacing(2);
}

SettingWidget::~SettingWidget()
{

}
