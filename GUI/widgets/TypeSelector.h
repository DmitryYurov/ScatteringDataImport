// ************************************************************************** //
//
//  Prototype of data loader for bornagainproject.org
//
//! @homepage  http://www.bornagainproject.org
//! @license   GNU General Public License v3 or higher
//
// ************************************************************************** //

#ifndef TYPESELECTOR_H
#define TYPESELECTOR_H

#include <QButtonGroup>

//! Controller for data type selection

class TypeSelector : public QButtonGroup
{
public:
  enum Types { D1 = 0, D2, NEXUS };

  TypeSelector(QObject* parent = nullptr);
  ~TypeSelector() override;

private:
  void initSettings();
  void writeSettings() const;
};

#endif // TYPESELECTOR_H
