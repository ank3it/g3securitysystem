#ifndef SECURITYSYSTEM_H
#define SECURITYSYSTEM_H

#include <QtGui/QMainWindow>
#include "ui_securitysystem.h"

class SecuritySystem : public QMainWindow
{
	Q_OBJECT

public:
	SecuritySystem(QWidget *parent = 0, Qt::WFlags flags = 0);
	~SecuritySystem();

private:
	Ui::SecuritySystemClass ui;
};

#endif // SECURITYSYSTEM_H
