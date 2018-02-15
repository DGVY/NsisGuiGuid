#include "stdafx.h"
#include "FileSetup.h"
#include "../3rdPart/tinyxml2/tinyxml2.h"

#ifdef WIN32
    #ifdef _DEBUG
        #pragma comment(lib, "../3rdPart/tinyxml2/Debug-Lib/tinyxml2.lib")
    #else
        #pragma comment(lib, "../3rdPart/tinyxml2/Release-Lib/tinyxml2.lib")
    #endif
#endif

using namespace tinyxml2;

// Setup配置文件路径
const char* SetupCfgPath = "../NsisGuiGuid/ConfigFiles/SetupCfg.xml";

FileSetup::FileSetup()
{
    ReadParam();
}

FileSetup::~FileSetup()
{
}

void FileSetup::ReadParam(void)
{
    tinyxml2::XMLDocument doc;
    doc.LoadFile(SetupCfgPath);
    tinyxml2::XMLElement* root = doc.RootElement();

    tinyxml2::XMLElement* surface = root->FirstChildElement();

    tinyxml2::XMLElement* surfaceChild = surface->FirstChildElement();
    m_CompanyDef = new QString(surfaceChild->GetText());

    surfaceChild = surfaceChild->NextSiblingElement();
    m_Company = new QString(surfaceChild->GetText());

    surface = surface->NextSiblingElement();
    surfaceChild = surface->FirstChildElement();
    m_VersionDef = new QString(surfaceChild->GetText());

    surfaceChild = surfaceChild->NextSiblingElement();
    m_Version = new QString(surfaceChild->GetText());

    ConfigItems = new QMap<QString, struct ConfigItem>();

    QString name;
    while (surface && !((name=surface->Name()).compare("Other")))
    {
        tinyxml2::XMLElement* surfaceChild = surface->FirstChildElement();

        struct ConfigItem configItem;

        configItem.m_Define = new QString(surfaceChild->GetText());

        surfaceChild = surfaceChild->NextSiblingElement();
        configItem.m_Value = new QString(surfaceChild->GetText());

        ConfigItems->insert(name,configItem);
    }

}
