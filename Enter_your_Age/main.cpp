#include "Enter_your_Age.h"
#include <QtWidgets/QApplication>
#include<QHBoxLayout>
#include<qslider.h>
#include<qspinbox.h>
int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	QWidget *window = new QWidget;//creat a window
	window->setWindowTitle("Enter Your Age");

	QSpinBox *spinBox = new QSpinBox;               //Set up an up and down button
	QSlider *slider = new QSlider(Qt::Horizontal);  //Set up a roller
	spinBox->setRange(0, 230);                      //Setting up adjustment range
	slider->setRange(0,230);

	QObject::connect(spinBox,SIGNAL(valueChanged(int)),slider,SLOT(setValue(int)));//Setting up signals and slots
	QObject::connect(slider, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
	
	spinBox->setValue(35);             //Set initial values

	QHBoxLayout *Layout = new QHBoxLayout; //Arrange Control Location
	Layout->addWidget(spinBox);
	Layout->addWidget(slider);
	window->setLayout(Layout);
	window->show();

	return app.exec();
}
