/*
 * Copyright (C) 2017 ~ 2018 Wuhan Deepin Technology Co., Ltd.
 *
 * Author:     Iceyer <me@iceyer.net>
 *
 * Maintainer: Iceyer <me@iceyer.net>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "devicelistwidget.h"

#include "widgetutil.h"

DeviceListWidget::DeviceListWidget(QWidget *parent) : QListWidget(parent)
{
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFocusPolicy(Qt::NoFocus);
    setFlow(QListView::TopToBottom);
    setMovement(QListView::Static);
    setViewMode(QListView::ListMode);

    this->setStyleSheet(WidgetUtil::getQss(":/theme/light/DeviceListWidget.theme"));
}
