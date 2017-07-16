#ifndef TOOLBAR_H_
#define TOOLBAR_H_

#include <QHBoxLayout>
#include <QWidget>
#include <dwidget.h>

DWIDGET_USE_NAMESPACE

class Toolbar : public QWidget
{
   Q_OBJECT

public:
   Toolbar(QWidget *parent = 0);
   ~Toolbar();

   bool eventFilter(QObject *, QEvent *event);

private:

};

#endif  // TOOLBAR_H_
