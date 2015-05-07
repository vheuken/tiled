#include "imagemanager.h"

using namespace Tiled;
using namespace Tiled::Internal;

QImage *ImageManager::findImage(const QString &fileName) const
{
    QMap<QString, QImage*>::const_iterator it = mImages.find(fileName);

    if (it != mImages.end())
        return it.value();

    return 0;
}
