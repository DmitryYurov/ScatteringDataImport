// ************************************************************************** //
//
//  Prototype of data loader for bornagainproject.org
//
//! @homepage  http://www.bornagainproject.org
//! @license   GNU General Public License v3 or higher
//
// ************************************************************************** //

#ifndef DATATYPEBUTTONS_H
#define DATATYPEBUTTONS_H

#include <memory>

class QButtonGroup;
class QGroupBox;

namespace DataTypeButtons {
enum TypeNames {D1 = 0, D2, NEXUS};
std::unique_ptr<QGroupBox> createGroupBox(QButtonGroup* button_group);
std::unique_ptr<QButtonGroup> createButtonGroup();
}

#endif // DATATYPEBUTTONS_H
