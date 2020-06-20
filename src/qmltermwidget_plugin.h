#ifndef QMLTERMWIDGETTRANSPARET_PLUGIN_H
#define QMLTERMWIDGETTRANSPARET_PLUGIN_H

#include <QQmlExtensionPlugin>

class QmltermwidgetPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qterminal.qmlterminal.QmlTermWidgetTransparent")
    
public:
    void registerTypes(const char *uri);
    void initializeEngine(QQmlEngine *engine, const char *uri);
};

#endif // QMLTERMWIDGETTRANSPARET_PLUGIN_H

