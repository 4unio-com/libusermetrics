/*
 * Copyright (C) 2013 Canonical, Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MODULES_USERMETRICSTEST_DBUSQUERY_H
#define MODULES_USERMETRICSTEST_DBUSQUERY_H

#include <QObject>

class MetricInfo;

class DBusQuery: public QObject {
Q_OBJECT

public:
	explicit DBusQuery(QObject *parent = 0);

public Q_SLOTS:
	double queryCurrentValue(int index);

	MetricInfo* queryMetricInfo(int index);
};

#endif // MODULES_USERMETRICSTEST_DBUSQUERY_H
