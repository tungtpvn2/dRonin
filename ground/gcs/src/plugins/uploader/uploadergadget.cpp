/**
 ******************************************************************************
 *
 * @file       uploadergadget.cpp
 * @author     Tau Labs, http://taulabs.org, Copyright (C) 2014
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup  Uploader Uploader Plugin
 * @{
 * @brief The Tau Labs uploader plugin gadget
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, see <http://www.gnu.org/licenses/>
 */
#include "uploadergadget.h"
#include "uploadergadgetwidget.h"

namespace uploader {

UploaderGadget::UploaderGadget(QString classId, UploaderGadgetWidget *widget, QWidget *parent)
    : IUAVGadget(classId, parent)
    , m_widget(widget)
{
}

UploaderGadget::~UploaderGadget()
{
    delete m_widget;
}
/**
 * Loads a configuration.
 *
 */
void UploaderGadget::loadConfiguration(IUAVGadgetConfiguration *config)
{
    Q_UNUSED(config);
}
}
