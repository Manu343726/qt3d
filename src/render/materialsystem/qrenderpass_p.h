/****************************************************************************
**
** Copyright (C) 2014 Klaralvdalens Datakonsult AB (KDAB).
** Copyright (C) 2016 The Qt Company Ltd and/or its subsidiary(-ies).
** Contact: https://www.qt.io/licensing/
**
** This file is part of the Qt3D module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or (at your option) the GNU General
** Public license version 3 or any later version approved by the KDE Free
** Qt Foundation. The licenses are as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL2 and LICENSE.GPL3
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-2.0.html and
** https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QT3DRENDER_QRENDERPASS_P_H
#define QT3DRENDER_QRENDERPASS_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists for the convenience
// of other Qt classes.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include <private/qnode_p.h>
#include <Qt3DRender/qrenderpass.h>

QT_BEGIN_NAMESPACE

namespace Qt3DRender {

class QParameter;
class QParameterMapping;
class QRenderState;
class QFilterKey;

namespace Render
{
class RenderStateSet;
}

class QRenderPassPrivate : public Qt3DCore::QNodePrivate
{
public:
    QRenderPassPrivate();

    Q_DECLARE_PUBLIC(QRenderPass)

    // map Parameter names to GLSL names
    QHash<QString, QString> m_parameterNameDict;
    QList<QFilterKey *> m_filterKeyList;
    QList<QParameterMapping *> m_bindings;
    QList<QRenderState *> m_renderStates;
    QList<QParameter *> m_parameters;
    QShaderProgram *m_shader;
};

struct QRenderPassData
{
    Qt3DCore::QNodeIdVector filterKeyIds;
    Qt3DCore::QNodeIdVector parameterIds;
    Qt3DCore::QNodeIdVector renderStateIds;
    Qt3DCore::QNodeId shaderId;
};

} // namespace Qt3DRender

QT_END_NAMESPACE

#endif // QRENDERPASS_P_H
