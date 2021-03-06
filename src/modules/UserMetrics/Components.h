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

#ifndef MODULES_USERMETRICS_COMPONENTS_H
#define MODULES_USERMETRICS_COMPONENTS_H

#include <QtQml/QQmlExtensionPlugin>
#include <QtQml/QQmlEngine>

class Components: public QQmlExtensionPlugin {
Q_OBJECT

Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QQmlExtensionInterface")

public:
	void registerTypes(const char *uri);

	void initializeEngine(QQmlEngine *engine, const char *uri);
};

#endif // MODULES_USERMETRICS_COMPONENTS_H
