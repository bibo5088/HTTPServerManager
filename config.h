#ifndef CONFIG_H
#define CONFIG_H

#include <QObject>
#include <QFile>
#include <QDir>
#include <QJsonDocument>
#include <QDebug>

/*
Contains the config in HTTPServerAsAppConfig.json
*/
class Config : public QObject
{
    Q_OBJECT

     static Config* instance;

     void loadConfigFile();
     void verifyConfigFile(QJsonDocument doc);
public:
    explicit Config(QObject *parent = nullptr);
    static Config* getInstance();

    QString name;
    int port;
    QString command;

signals:
    void loaded();

public slots:
};

#endif // CONFIG_H
