#include "homewidget.h"
#include "constant.h"

HomeWidget::HomeWidget(QWidget *parent)
    : QWidget(parent)
{
    layout = new QVBoxLayout(this);
    backupLayout = new QHBoxLayout;
    backupBtn = new QPushButton("Backup");
    backupBtn->setFixedWidth(4 * Constant::BUTTON_WIDTH);
    backupInfo = new QLabel("Backup complete system include user data");

    backupLayout->addSpacing(30);
    backupLayout->addWidget(backupBtn);
    backupLayout->addSpacing(40);
    backupLayout->addWidget(backupInfo);
    backupLayout->addSpacing(30);

    distLayout = new QHBoxLayout;
    distBtn = new QPushButton("Dist");
    distBtn->setFixedWidth(4 * Constant::BUTTON_WIDTH);
    distInfo = new QLabel("Make a Distributable copy to share with friends - both cdfs and iso will be created");
    distInfo->setWordWrap(true);

    distLayout->addSpacing(30);
    distLayout->addWidget(distBtn);
    distLayout->addSpacing(40);
    distLayout->addWidget(distInfo);
    distLayout->addSpacing(30);

    cdfsLayout = new QHBoxLayout;
    cdfsBtn = new QPushButton("Distcdfs");
    cdfsBtn->setFixedWidth(4 * Constant::BUTTON_WIDTH);
    cdfsInfo = new QLabel("Make a Distributable copy filesystem only - good if you want to add files to the cd");
    cdfsInfo->setWordWrap(true);

    cdfsLayout->addSpacing(30);
    cdfsLayout->addWidget(cdfsBtn);
    cdfsLayout->addSpacing(40);
    cdfsLayout->addWidget(cdfsInfo);
    cdfsLayout->addSpacing(30);

    isoLayout = new QHBoxLayout;
    isoBtn = new QPushButton("Distiso");
    isoBtn->setFixedWidth(4 * Constant::BUTTON_WIDTH);
    isoInfo = new QLabel("Make a Distributable iso file only - cd filesystem must have been completed already");
    isoInfo->setWordWrap(true);

    isoLayout->addSpacing(30);
    isoLayout->addWidget(isoBtn);
    isoLayout->addSpacing(40);
    isoLayout->addWidget(isoInfo);
    isoLayout->addSpacing(30);

    clearLayout = new QHBoxLayout;
    clearBtn = new QPushButton("Clear");
    clearBtn->setFixedWidth(4 * Constant::BUTTON_WIDTH);
    clearInfo = new QLabel("Remove temporary files");

    clearLayout->addSpacing(30);
    clearLayout->addWidget(clearBtn);
    clearLayout->addSpacing(40);
    clearLayout->addWidget(clearInfo);
    clearLayout->addSpacing(30);

    lineLayout = new QHBoxLayout;
    line = new QLabel;
    line->setFixedSize(Constant::MAIN_WINDOW_WIDTH - 40, 2);
    line->setFrameShape(QFrame::HLine);
    line->setFrameShadow(QFrame::Sunken);

    lineLayout->addWidget(line);

    selectLayout = new QHBoxLayout;
    selectBtn = new QPushButton("Select");
    selectBtn->setFixedWidth(3 * Constant::BUTTON_WIDTH);
    selectInfo = new QLabel("Boot menu picture for the livecd (640x480 PNG)");

    selectLayout->addSpacing(30);
    selectLayout->addWidget(selectBtn);
    selectLayout->addSpacing(40);
    selectLayout->addWidget(selectInfo);
    selectLayout->addSpacing(30);

    selectEnvLayout = new QHBoxLayout;
    selectEnvBtn = new QPushButton("Select");
    selectEnvBtn->setFixedWidth(3 * Constant::BUTTON_WIDTH);
    selectEnvInfo = new QLabel("Boot menu picture for the installed environment");

    selectEnvLayout->addSpacing(30);
    selectEnvLayout->addWidget(selectEnvBtn);
    selectEnvLayout->addSpacing(40);
    selectEnvLayout->addWidget(selectEnvInfo);
    selectEnvLayout->addSpacing(30);

    selectUserLayout = new QHBoxLayout;
    selectUserBtn = new QPushButton("Select");
    selectUserBtn->setFixedWidth(3 * Constant::BUTTON_WIDTH);
    selectUserInfo = new QLabel("User, whoes current settings will be used as default");
    clearUserBtn = new QPushButton();
    clearUserBtn->setFixedWidth(Constant::BUTTON_WIDTH);

    selectUserLayout->addSpacing(30);
    selectUserLayout->addWidget(selectUserBtn);
    selectUserLayout->addSpacing(40);
    selectUserLayout->addWidget(selectUserInfo);
    selectUserLayout->addSpacing(60);
    selectUserLayout->addWidget(clearUserBtn);
    selectUserLayout->addSpacing(30);

    selectThemeLayout = new QHBoxLayout;
    selectThemeBtn = new QPushButton("Select");
    selectThemeBtn->setFixedWidth(3 * Constant::BUTTON_WIDTH);
    selectThemeInfo = new QLabel("Plymouth theme");

    selectThemeLayout->addSpacing(30);
    selectThemeLayout->addWidget(selectThemeBtn);
    selectThemeLayout->addSpacing(40);
    selectThemeLayout->addWidget(selectThemeInfo);
    selectThemeLayout->addSpacing(30);

    layout->addSpacing(2);
    layout->addLayout(backupLayout);
    layout->addLayout(distLayout);
    layout->addLayout(cdfsLayout);
    layout->addLayout(isoLayout);
    layout->addLayout(clearLayout);
    layout->addSpacing(2);
    layout->addLayout(lineLayout);
    layout->addSpacing(2);
    layout->addLayout(selectLayout);
    layout->addLayout(selectEnvLayout);
    layout->addLayout(selectUserLayout);
    layout->addLayout(selectThemeLayout);
    layout->addStretch();
    layout->addSpacing(2);
}

HomeWidget::~HomeWidget()
{

}


