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

#ifndef USERMETRICSOUTPUT_DATASETSTORE_H_
#define USERMETRICSOUTPUT_DATASETSTORE_H_

#include <libusermetricsoutput/DataSource.h>
#include <libusermetricsoutput/UserData.h>

#include <QtCore/QSharedPointer>
#include <QtCore/QMap>

namespace UserMetricsOutput {

class UserMetricsStore: public QObject {
Q_OBJECT
public:
	typedef QSharedPointer<UserMetricsStore> Ptr;

	typedef QMap<QString, UserDataPtr> UserDataMap;

	typedef UserDataMap::iterator iterator;

	typedef UserDataMap::const_iterator const_iterator;

	typedef QMap<QString, DataSourcePtr> DataSourceMap;

	explicit UserMetricsStore(QObject *parent = 0);

	virtual ~UserMetricsStore();

	virtual const_iterator constFind(const QString &username) const;

	virtual const_iterator constEnd() const;

	virtual iterator insert(const QString &username, UserDataPtr userData);

	virtual void insert(const QString &name, DataSourcePtr dataSource);

	virtual DataSourcePtr dataSource(const QString &path);

Q_SIGNALS:
	void userDataAdded(const QString &username, UserDataPtr userData);

protected:
	UserDataMap m_userData;

	DataSourceMap m_dataSources;
};

}

#endif // USERMETRICSOUTPUT_DATASETSTORE_H_
