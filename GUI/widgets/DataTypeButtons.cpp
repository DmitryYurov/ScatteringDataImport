// ************************************************************************** //
//
//  Prototype of data loader for bornagainproject.org
//
//! @homepage  http://www.bornagainproject.org
//! @license   GNU General Public License v3 or higher
//
// ************************************************************************** //

#include "DataTypeButtons.h"
#include <QButtonGroup>
#include <QGroupBox>

using namespace DataTypeButtons;

namespace {
std::map<TypeNames, const char*> data_names {{D1, "1D Data"}, {D2, "2D Data"}, {NEXUS, "NEXUS"}};
}

std::unique_ptr<QGroupBox> createGroupBox(QButtonGroup* button_group)
{
    return nullptr;
}

std::unique_ptr<QButtonGroup> createButtonGroup()
{
    return nullptr;
}

