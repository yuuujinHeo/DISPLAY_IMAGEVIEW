/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.14.2
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

  // D:/DISPLAY_IMAGEVIEW/image/image.png
  
  
  
static const unsigned char qt_resource_data[940622] = { 'Q', 'R', 'C', '_', 'D', 'A', 'T', 'A' };

static const unsigned char qt_resource_name[] = {
  // image
  0x0,0x5,
  0x0,0x70,0x37,0xd5,
  0x0,0x69,
  0x0,0x6d,0x0,0x61,0x0,0x67,0x0,0x65,
    // image.png
  0x0,0x9,
  0x7,0xd8,0xb7,0x27,
  0x0,0x69,
  0x0,0x6d,0x0,0x61,0x0,0x67,0x0,0x65,0x0,0x2e,0x0,0x70,0x0,0x6e,0x0,0x67,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/image
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/image/image.png
  0x0,0x0,0x0,0x10,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x7e,0x47,0x93,0x15,0xa1,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_qml_qmlcache)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_qml_qmlcache)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_qml_qmlcache)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_qml_qmlcache)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_qml_qmlcache)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_qml_qmlcache)(); }
   } dummy;
}
