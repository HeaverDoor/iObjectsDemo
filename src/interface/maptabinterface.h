#ifndef MAPTABINTERFACE_H
#define MAPTABINTERFACE_H


#include <QObject>
#include <QtWidgets/QWidget>
#include "widgetplugininterface.h"
class MapTabInterface : public WidgetPluginInterface
{
public:
	virtual void test() = 0;
	virtual void addCentralWidget(QWidget* map, int tabIndex, QString tabName) = 0;
	virtual void setCurrentIndex(int index) = 0;
	virtual void loadSkin() = 0;
};


QT_BEGIN_NAMESPACE
	Q_DECLARE_INTERFACE(MapTabInterface, "{6EDEBEEB-DFDE-461E-BAF2-2A5D0C90BF1D}")
QT_END_NAMESPACE

#endif

