#include "Enter_your_Age.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Enter_your_Age w;
	w.show();
	return a.exec();
}
