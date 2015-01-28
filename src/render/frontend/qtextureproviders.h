/****************************************************************************
**
** Copyright (C) 2015 Klaralvdalens Datakonsult AB (KDAB).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the Qt3D module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QT3D_QTEXTUREPROVIDERS_H
#define QT3D_QTEXTUREPROVIDERS_H

#include <Qt3DRenderer/qabstracttextureprovider.h>

QT_BEGIN_NAMESPACE

namespace Qt3D {

class QT3DRENDERERSHARED_EXPORT QTexture1D : public QAbstractTextureProvider
{
    Q_OBJECT
public:
    explicit QTexture1D(Qt3D::QNode *parent = 0);
    ~QTexture1D();
};

class QT3DRENDERERSHARED_EXPORT QTexture1DArray : public QAbstractTextureProvider
{
    Q_OBJECT
public:
    explicit QTexture1DArray(Qt3D::QNode *parent = 0);
    ~QTexture1DArray();
};

class QT3DRENDERERSHARED_EXPORT QTexture2D : public QAbstractTextureProvider
{
    Q_OBJECT
public:
    explicit QTexture2D(Qt3D::QNode *parent = 0);
    ~QTexture2D();
};

class QT3DRENDERERSHARED_EXPORT QTexture2DArray : public QAbstractTextureProvider
{
    Q_OBJECT
public:
    explicit QTexture2DArray(Qt3D::QNode *parent = 0);
    ~QTexture2DArray();
};

class QT3DRENDERERSHARED_EXPORT QTexture3D : public QAbstractTextureProvider
{
    Q_OBJECT
public:
    explicit QTexture3D(Qt3D::QNode *parent = 0);
    ~QTexture3D();
};

class QT3DRENDERERSHARED_EXPORT QTextureCubeMap : public QAbstractTextureProvider
{
    Q_OBJECT
public:
    explicit QTextureCubeMap(Qt3D::QNode *parent = 0);
    ~QTextureCubeMap();
};

class QT3DRENDERERSHARED_EXPORT QTextureCubeMapArray : public QAbstractTextureProvider
{
    Q_OBJECT
public:
    explicit QTextureCubeMapArray(Qt3D::QNode *parent = 0);
    ~QTextureCubeMapArray();
};

class QT3DRENDERERSHARED_EXPORT QTexture2DMultisample : public QAbstractTextureProvider
{
    Q_OBJECT
public:
    explicit QTexture2DMultisample(Qt3D::QNode *parent = 0);
    ~QTexture2DMultisample();
};

class QT3DRENDERERSHARED_EXPORT QTexture2DMultisampleArray : public QAbstractTextureProvider
{
    Q_OBJECT
public:
    explicit QTexture2DMultisampleArray(Qt3D::QNode *parent = 0);
    ~QTexture2DMultisampleArray();
};

class QT3DRENDERERSHARED_EXPORT QTextureRectangle : public QAbstractTextureProvider
{
    Q_OBJECT
public:
    explicit QTextureRectangle(Qt3D::QNode *parent = 0);
    ~QTextureRectangle();
};

class QT3DRENDERERSHARED_EXPORT QTextureBuffer : public QAbstractTextureProvider
{
    Q_OBJECT
public:
    explicit QTextureBuffer(Qt3D::QNode *parent = 0);
    ~QTextureBuffer();
};

} // Qt3D

QT_END_NAMESPACE

#endif // QT3D_QTEXTUREPROVIDERS_H
