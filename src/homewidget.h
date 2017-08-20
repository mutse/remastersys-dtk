#ifndef HOMEWIDGET_H
#define HOMEWIDGET_H

#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>

class HomeWidget: public QWidget
{
    Q_OBJECT

public:
    HomeWidget(QWidget *parent = 0);
    ~HomeWidget();

private:
    QVBoxLayout *layout;
    QHBoxLayout *backupLayout;
    QPushButton *backupBtn;
    QLabel *backupInfo;
    QHBoxLayout *distLayout;
    QPushButton *distBtn;
    QLabel *distInfo;
    QHBoxLayout *cdfsLayout;
    QPushButton *cdfsBtn;
    QLabel *cdfsInfo;
    QHBoxLayout *isoLayout;
    QPushButton *isoBtn;
    QLabel *isoInfo;
    QHBoxLayout *clearLayout;
    QPushButton *clearBtn;
    QLabel *clearInfo;

    QHBoxLayout *lineLayout;
    QLabel *line;

    QHBoxLayout *selectLayout;
    QPushButton *selectBtn;
    QLabel *selectInfo;

    QHBoxLayout *selectEnvLayout;
    QPushButton *selectEnvBtn;
    QLabel *selectEnvInfo;

    QHBoxLayout *selectUserLayout;
    QPushButton *selectUserBtn;
    QLabel *selectUserInfo;
    QPushButton *clearUserBtn;

    QHBoxLayout *selectThemeLayout;
    QPushButton *selectThemeBtn;
    QLabel* selectThemeInfo;
};

#endif // HOMEWIDGET_H
