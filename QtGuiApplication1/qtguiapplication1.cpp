#include "qtguiapplication1.h"
#include<QPushButton>

QtGuiApplication1::QtGuiApplication1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	QPushButton* btn = new QPushButton(this);
	btn->setText("��ť");
	QPushButton* btn2 = new QPushButton(this);
	btn2->setText("��ť");
	btn2->move(100, 0);
}
