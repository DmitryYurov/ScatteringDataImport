// ************************************************************************** //
//
//  Prototype of data loader for bornagainproject.org
//
//! @homepage  http://www.bornagainproject.org
//! @license   GNU General Public License v3 or higher
//
// ************************************************************************** //

#include "SettingsList.h"
#include <QCoreApplication>

namespace  {
constexpr const char* app_name = "Data Loader";
constexpr const char* app_ver = "0.0";
constexpr const char* app_org = "scgmlz";
}

void SettingsList::initSettings()
{
    if (QCoreApplication::applicationName() != app_name) {
        QCoreApplication::setApplicationName(app_name);
        QCoreApplication::setApplicationVersion(app_ver);
        QCoreApplication::setOrganizationName(app_org);
    }
}

