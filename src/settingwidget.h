#ifndef SETTINGWIDGET_H
#define SETTINGWIDGET_H

#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QCheckBox>

class SettingWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SettingWidget(QWidget *parent = 0);
    ~SettingWidget();

signals:

public slots:

private:
    QVBoxLayout *layout;
    QHBoxLayout *userLayout;
    QLabel *userInfo;
    QLineEdit *userText;

    QHBoxLayout *labelLayout;
    QLabel *labelInfo;
    QLineEdit *labelText;

    QHBoxLayout *fileLayout;
    QLabel *fileInfo;
    QLineEdit *fileText;

    QHBoxLayout *dirLayout;
    QLabel *dirInfo;
    QLineEdit *dirText;
    QPushButton *dirBtn;

    QHBoxLayout *workLayout;
    QLabel *workInfo;

    QHBoxLayout *exclLayout;
    QLabel *exclInfo;
    QLineEdit *exclText;

    QHBoxLayout *urlLayout;
    QLabel *urlInfo;
    QLineEdit *urlText;

    QHBoxLayout *hfsLayout;
    QLabel *hfsInfo;
    QLineEdit *hfsText;

    QHBoxLayout *iconLayout;
    QCheckBox *iconCheck;
    QLabel *iconInfo;
};

#endif // SETTINGWIDGET_H
