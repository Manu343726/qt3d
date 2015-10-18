/****************************************************************************
**
** Copyright (C) 2014 Klaralvdalens Datakonsult AB (KDAB).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the Qt3D module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL3$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see http://www.qt.io/terms-conditions. For further
** information use the contact form at http://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPLv3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or later as published by the Free
** Software Foundation and appearing in the file LICENSE.GPL included in
** the packaging of this file. Please review the following information to
** ensure the GNU General Public License version 2.0 requirements will be
** met: http://www.gnu.org/licenses/gpl-2.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef RENDERABLEENTITY_H
#define RENDERABLEENTITY_H

#include <Qt3DCore/QEntity>
#include <Qt3DCore/QTransform>
#include <Qt3DCore/QScaleTransform>
#include <Qt3DCore/QRotateTransform>
#include <Qt3DCore/QTranslateTransform>
#include <Qt3DRender/QMesh>

class RenderableEntity : public Qt3DCore::QEntity
{
public:
    RenderableEntity(Qt3DCore::QNode *parent = 0);
    ~RenderableEntity();

    Qt3DRender::QMesh *mesh() const;
    Qt3DCore::QScaleTransform *scaleTransform() const;
    Qt3DCore::QTranslateTransform *translateTransform() const;
    Qt3DCore::QRotateTransform *rotateTransform() const;

private:
    Qt3DRender::QMesh *m_mesh;
    Qt3DCore::QTransform *m_transform;
    Qt3DCore::QRotateTransform *m_rotateTransform;
    Qt3DCore::QScaleTransform *m_scaleTransform;
    Qt3DCore::QTranslateTransform *m_translateTransform;
};

#endif // RENDERABLEENTITY_H
