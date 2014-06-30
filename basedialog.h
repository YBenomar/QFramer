#ifndef BASEDIALOG_H
#define BASEDIALOG_H

#include <QDialog>
#include<QMouseEvent>
#include<QShowEvent>
#include<QCloseEvent>
#include "titlebar.h"

class BaseDialog : public QDialog
{
    Q_OBJECT
private:
    QPoint dragPosition;

private:
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);

    TitleBar* titlebar;

protected:
    void showEvent(QShowEvent * event);
    void closeEvent(QCloseEvent * event);
public:
    QSize normalSize;

public:
    explicit BaseDialog(QWidget *parent = 0);
    void initData();
    void initUI();
    void initConnect();

signals:

public slots:
    void animationClose();
};

#endif // BASEDIALOG_H