/**
 ******************************************************************************
 *
 * @file       modelviewgadget.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @addtogroup GCSPlugins GCS Plugins
 * @{
 * @addtogroup ModelViewPlugin ModelView Plugin
 * @{
 * @brief A gadget that displays a 3D representation of the UAV
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
#include "modelviewgadget.h"
#include "modelviewgadgetwidget.h"
#include "modelviewgadgetconfiguration.h"

ModelViewGadget::ModelViewGadget(QString classId, ModelViewGadgetWidget *widget, QWidget *parent)
    : IUAVGadget(classId, parent)
    , m_widget(widget)
{
}

ModelViewGadget::~ModelViewGadget()
{
    delete m_widget;
}

void ModelViewGadget::loadConfiguration(IUAVGadgetConfiguration *config)
{
    ModelViewGadgetConfiguration *m = qobject_cast<ModelViewGadgetConfiguration *>(config);

    m_widget->setAcFilename(m->acFilename());
    m_widget->setBgFilename(m->bgFilename());
    m_widget->setVboEnable(m->vboEnabled());
    m_widget->reloadScene();
}
