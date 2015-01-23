#include "stdafx.h"
#include "iobjectsdemo.h"
#include <QtWidgets/QApplication>
#include <QTextCodec>
//#include "Map2D/map2dcontainer.h"
//#include "..\\commom\xmlutils.h"
void initStyle();

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QTextCodec *codec = QTextCodec::codecForName("utf-8");
	QTextCodec::setCodecForLocale(codec);
	initStyle();
	iObjectsDemo w;
	w.show();
	return a.exec();
}

void initStyle()
{
	QFile file(":/skin.qss");
	file.open(QFile::ReadOnly);
	QString style = QString(file.readAll());
	qApp->setStyleSheet(style);
	file.close();
}