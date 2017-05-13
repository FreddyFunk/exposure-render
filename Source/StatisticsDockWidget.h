#pragma once

#include <QtGui>

#include "StatisticsWidget.h"
#include <qdockwidget.h>
#include <qgraphicsscene.h>

class QStatisticsDockWidget : public QDockWidget
{
    Q_OBJECT

public:
    QStatisticsDockWidget(QWidget* pParent = 0);

private:
	QGridLayout			m_MainLayout;
	QStatisticsWidget	m_StatisticsWidget;
	QGraphicsScene scene;
};