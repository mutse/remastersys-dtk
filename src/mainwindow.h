/*!
 Copyright (C)  2017 mutse All right reserved.

 @file     mainwindow.h
 @brief

 @version  1.0
 @author   mutse <yyhoo2.young@gmail.com>
 @date     2017-06-10

*/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <DMainWindow>
#include <QSystemTrayIcon>
#include <QtWidgets>
#include <QStackedLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <dstackwidget.h>
#include "toolbar.h"
#include <DTitlebar>
#include "qconsolewidget.h"
#include <QPushButton>
#include <QVector>

DWIDGET_USE_NAMESPACE

class MainWindow : public DMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(DMainWindow *parent = 0);
    ~MainWindow();

protected:
    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);
    void closeEvent(QCloseEvent *event);
    
public slots:
    void slotShow();

    void slotMin();

    void trayIconActivated(QSystemTrayIcon::ActivationReason reason);

    void onClickedBtn();

private:
    void createTray();

    void initData();

    void setCurrentWidget();

private:
    QMenu *m_menu;

    QPoint m_pointStart;

    //QVector <QPushButton* > m_vecBtn;

    QWidget *layoutWidget;
    QStackedLayout *layout;

    Toolbar *toolbar;

    QVBoxLayout *mainLayout;
    QHBoxLayout *btnLayout;

    QVector <QPushButton*> vecBtn;

    QWidget *homeWidget;
    QWidget *settingWidget;
    QConsoleWidget *consoleWidget;

    QIcon icon;
    QAction *actShow;
    QAction *actExit;

    QMenu *menuTray;
    QMenu *menuAbout;

    QSystemTrayIcon *trayIcon;
};

#endif // MAINWINDOW_H
