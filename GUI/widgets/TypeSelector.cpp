// ************************************************************************** //
//
//  Prototype of data loader for bornagainproject.org
//
//! @homepage  http://www.bornagainproject.org
//! @license   GNU General Public License v3 or higher
//
// ************************************************************************** //

#include "TypeSelector.h"
#include "SettingsList.h"
#include <QButtonGroup>
#include <QPushButton>
#include <QSettings>
#include <array>

namespace {
constexpr std::array data_names{std::pair{TypeSelector::D1, "1D Data"},
                                std::pair{TypeSelector::D2, "2D Data"},
                                std::pair{TypeSelector::NEXUS, "NEXUS"}};
} // namespace

TypeSelector::TypeSelector(QObject* parent)
    : QButtonGroup (parent)
{
    for (const auto &pair : data_names) {
      auto button = new QPushButton(pair.second);
      button->setCheckable(true);
      addButton(button, pair.first);
    }
    setExclusive(true);
    initSettings();
}

TypeSelector::~TypeSelector()
{
    writeSettings();
}

void TypeSelector::initSettings()
{
    SettingsList::initSettings();
    QSettings settings;
    button(settings.value(SettingsList::datatype_selection, D1).toInt())->setChecked(true);
}

void TypeSelector::writeSettings() const
{
    QSettings settings;
    settings.setValue(SettingsList::datatype_selection, checkedId());
}
