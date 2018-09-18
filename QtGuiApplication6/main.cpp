#include "QtGuiApplication6.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtGuiApplication6 w;
	w.show();
	return a.exec();
}
