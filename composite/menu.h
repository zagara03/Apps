#ifndef __MENU_H__
#define __MENU_H__

#include <string>
#include <vector>
#include "menucomponent.h"
#include "iterator.h"
#include "menuiterator.h"

namespace designpattern{
namespace iterator{

class CMenu : public CMenuComponent
{
public:
	CMenu(std::string sName, std::string sDescription);
	virtual ~CMenu();
	virtual std::string getName() const;
	virtual std::string getDescription() const;
	virtual const CMenuComponent* getChild(int n) const;
	virtual void add(CMenuComponent*);
	virtual void remove(CMenuComponent*);
	virtual void print();
private:
	std::string mName;
	std::string mDescription;
	std::vector< CMenuComponent* > mMenuItems;
	CIterator<CMenuComponent>* creatorIterator() const;
};

}//iterator
}//designpattern
#endif 