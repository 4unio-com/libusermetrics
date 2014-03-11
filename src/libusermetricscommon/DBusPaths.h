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

#ifndef USERMETRICSCOMMON_DBUSPATHS_H_
#define USERMETRICSCOMMON_DBUSPATHS_H_

#include <QtCore/QString>

namespace UserMetricsCommon {

class DBusPaths {
public:
	constexpr static const char* INFOGRAPHIC_DBUS_NAME =
			"com.canonical.Infographics";

	constexpr static const char* INFOGRAPHIC_DBUS_PATH =
			"/com/canonical/Infographics";
};

}

#endif // USERMETRICSCOMMON_DBUSPATHS_H_