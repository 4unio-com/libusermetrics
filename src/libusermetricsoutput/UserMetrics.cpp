/*
 * Copyright (C) 2013 Canonical, Ltd.
 *
 * This library is free software; you can redistribute it and/or modify it under
 * the terms of version 3 of the GNU Lesser General Public License as published
 * by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
 * details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Pete Woods <pete.woods@canonical.com>
 */

#include <libusermetricsoutput/SyncedUserMetricsStore.h>
#include <libusermetricscommon/DateFactoryImpl.h>
#include <libusermetricsoutput/GSettingsColorThemeProvider.h>
#include <libusermetricsoutput/UserMetricsImpl.h>
#include <libusermetricscommon/DBusPaths.h>

using namespace UserMetricsOutput;
using namespace UserMetricsCommon;

UserMetrics::UserMetrics(QObject *parent) :
		QObject(parent) {
}

UserMetrics::~UserMetrics() {
}

UserMetrics * UserMetrics::getInstance() {
	QDBusConnection dbusConnection(QDBusConnection::connectToBus(
		QDBusConnection::SystemBus, "libusermetricsoutput-systembus"));

	return new UserMetricsImpl(
			QSharedPointer<DateFactory>(new DateFactoryImpl()),
			QSharedPointer<UserMetricsStore>(
					new SyncedUserMetricsStore(dbusConnection)),
			QSharedPointer<ColorThemeProvider>(
					new GSettingsColorThemeProvider()));
}
