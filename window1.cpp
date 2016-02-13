#include "window1.h"
#include <QVBoxLayout>
window1::window1() : QWidget()
{
 slider=new QSlider(Qt::Horizontal);
 bar= new QProgressBar;
 button=new QPushButton("click");
 slider->setMinimum(0);
 slider->setMaximum(100);
 QVBoxLayout* layout= new QVBoxLayout;
 layout->addWidget(slider);
 layout->addWidget(bar);
 layout->addWidget(button);
 this->setLayout(layout);
 connect(button,SIGNAL(clicked(bool)),this,SLOT(setvalue()));
}
void window1::setvalue()
{
    bar->setValue(slider->value());
}


