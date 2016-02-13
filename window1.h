#ifndef WINDOW1_H
#define WINDOW1_H

#include <QWidget>
#include <QSlider>
#include <QProgressBar>
#include <QPushButton>

class window1 : public QWidget
{
    QSlider* slider;
    QProgressBar* bar;
    QPushButton* button;
    Q_OBJECT

public:
    explicit window1();

signals:

public slots:
    void setvalue();
};

#endif // WINDOW1_H
