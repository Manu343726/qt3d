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

#include "qnodevisitor_p.h"

QT_BEGIN_NAMESPACE

namespace Qt3DCore {

QNodeVisitorPrivate::QNodeVisitorPrivate()
{
}

QNodeVisitor::QNodeVisitor() :
    d_ptr(new QNodeVisitorPrivate)
{
}

QNodeVisitor::~QNodeVisitor()
{
    delete d_ptr;
}

QNode* QNodeVisitor::rootNode() const
{
    return d_ptr->m_path.front();
}

QNode* QNodeVisitor::currentNode() const
{
    return d_ptr->m_path.back();
}

void QNodeVisitor::setPath(QNodeList path)
{
    d_ptr->m_path = path;
}

QNodeList QNodeVisitor::path() const
{
    return d_ptr->m_path;
}

void QNodeVisitor::append(QNode *n)
{
    d_ptr->m_path.append(n);
}

void QNodeVisitor::pop_back()
{
    d_ptr->m_path.pop_back();
}

} // namespace Qt3DCore

QT_END_NAMESPACE
