#ifndef __MENUITEM_H__
#define __MENUITEM_H__

#include <string>
#include "menucomponent.h"

namespace designpattern{
namespace iterator{

class CMenuItem : public CMenuComponent
{
public:
	CMenuItem(std::string sName, std::string sDescription);
	virtual void print();

private:
	std::string mName;
	std::string mDescription;

};

}//designpattern
}//iterator
#endif