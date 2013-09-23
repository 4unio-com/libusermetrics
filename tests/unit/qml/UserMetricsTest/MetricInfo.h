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

#ifndef MODULES_USERMETRICSTEST_METRICINFO_H
#define MODULES_USERMETRICSTEST_METRICINFO_H

#include <QObject>

class MetricInfo : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name NOTIFY nameChanged)
    Q_PROPERTY(QString format READ format NOTIFY formatChanged)
    Q_PROPERTY(QString emptyFormat READ emptyFormat NOTIFY emptyFormatChanged)
    Q_PROPERTY(QString domain READ domain NOTIFY domainChanged)

public:
    explicit MetricInfo(QString name, QString format, QString emptyFormat, QString domain, QObject *parent = 0);

public:
    QString name() const;
    QString format() const;
    QString emptyFormat() const;
    QString domain() const;

Q_SIGNALS:
    void nameChanged();
    void formatChanged();
    void emptyFormatChanged();
    void domainChanged();

private:
    QString m_name;
    QString m_format;
    QString m_emptyFormat;
    QString m_domain;

};

#endif // MODULES_USERMETRICSTEST_METRICINFO_H
