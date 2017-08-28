#include "settingwidget.h"
#include "constant.h"

SettingWidget::SettingWidget(QWidget *parent)
    : QWidget(parent)
{
    layout = new QVBoxLayout(this);
    userLayout = new QHBoxLayout;
    userInfo = new QLabel("User");
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

    layout->addSpacing(2);
    layout->addLayout(userLayout);
    layout->addLayout(labelLayout);
    layout->addLayout(fileLayout);
    layout->addLayout(dirLayout);
    layout->addLayout(exclLayout);
    layout->addStretch();
    layout->addSpacing(2);
}

SettingWidget::~SettingWidget()
{

}
