#include "securitysystem.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SecuritySystem w;
	w.show();
	return a.exec();
}
