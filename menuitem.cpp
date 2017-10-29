#include "menuitem.h"
#include "utility.h"

using namespace designpattern::iterator;

CMenuItem::CMenuItem(std::string sName, std::string sDescription)
	: mName(sName), mDescription(sDescription)
{
	printMessage("CMenuItem::CMenuItem()");
}
	
void CMenuItem::print()
{
	printMessage(mName + " :: " + mDescription);
}
