// ************************************************************************** //
//
//  Prototype of data loader for bornagainproject.org
//
//! @homepage  http://www.bornagainproject.org
//! @license   GNU General Public License v3 or higher
//
// ************************************************************************** //

#ifndef TYPEBUTTONGROUP_H
#define TYPEBUTTONGROUP_H

#include <memory>

class QButtonGroup;

namespace TypeButtonGroup
{
  enum Types { D1 = 0, D2, NEXUS };
  std::unique_ptr<QButtonGroup> makeButtonGroup();
};

#endif // TYPEBUTTONGROUP_H
