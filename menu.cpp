
#include "menu.h"
#include "utility.h"
#include <cassert>

using namespace designpattern::iterator;

CMenu::CMenu(std::string sName, std::string sDescription)
 : mName(sName), mDescription(sDescription)
{
	printMessage("CMenu::CMenu()");
}

CMenu::~CMenu()
{
	printMessage("CMenu::~CMenu()");
}

std::string CMenu::getName() const
{
	return mName;
}

std::string CMenu::getDescription() const
{
	return mDescription;
}

const CMenuComponent* CMenu::getChild(int n) const
{
	CMenuComponent* pMenuItem = mMenuItems[n];
	return pMenuItem;
}

void CMenu::add(CMenuComponent* pMenuItem)
{
	assert(pMenuItem);
	mMenuItems.push_back(pMenuItem);
}

void CMenu::remove(CMenuComponent* pMenuItem)
{
	assert(pMenuItem);
}

void CMenu::print()
{
	CIterator<CMenuComponent>* iter = creatorIterator();
	while(iter->hasNext()) {
	    CMenuComponent* menuComponent = dynamic_cast<CMenuComponent * > ( iter->next() );
	    menuComponent->print();		
	}
}

CIterator<CMenuComponent>* CMenu::creatorIterator() const
{
	return dynamic_cast< CIterator< CMenuComponent >* > (new CMenuIterator(mMenuItems));
}
