#ifndef IMAGEMANAGER_H
#define IMAGEMANAGER_H

class QImage;

#include <QMap>
#include <QString>

namespace Tiled {

namespace Internal {

class ImageManager
{
public:
    QImage *findImage(const QString &fileName) const;

private:
    QMap<QString, QImage*> mImages;
};

} // namespace Internal
} // namespace Tiled

#endif // IMAGEMANAGER_H
