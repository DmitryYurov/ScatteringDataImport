// ************************************************************************** //
//
//  Prototype of data loader for bornagainproject.org
//
//! @homepage  http://www.bornagainproject.org
//! @license   GNU General Public License v3 or higher
//
// ************************************************************************** //

#include "TypeButtonGroup.h"
#include <QButtonGroup>
#include <QPushButton>
#include <array>

namespace {
constexpr std::array data_names{std::pair{TypeButtonGroup::D1, "1D Data"},
                                std::pair{TypeButtonGroup::D2, "2D Data"},
                                std::pair{TypeButtonGroup::NEXUS, "NEXUS"}};
} // namespace

std::unique_ptr<QButtonGroup> TypeButtonGroup::makeButtonGroup() {
  std::unique_ptr<QButtonGroup> result(new QButtonGroup);
  for (const auto &pair : data_names) {
    auto button = new QPushButton(pair.second);
    button->setCheckable(true);
    result->addButton(button, pair.first);
  }
  result->setExclusive(true);
  return result;
}
