#include "menu.h"
#include "menuitem.h"
#include "menucomponent.h"
#include <memory>

using namespace designpattern::iterator;

int main()
{
	std::unique_ptr< CMenuComponent > pancakeHouseMenu(new CMenu("PANCAKE HOUSE MENU", "Breakfast"));

	std::unique_ptr< CMenuComponent > dinerMenu(new CMenu("DINER MENU", "Lunch"));

	std::unique_ptr< CMenuComponent > allMenus(new CMenu( "ALL MENUS", "All menus combined" ) );

    allMenus->add( pancakeHouseMenu.get() );

    allMenus->add( dinerMenu.get() );


	pancakeHouseMenu->add( new CMenuItem(
	  "K&B's Pancake Breakfast",
	  "Pancakes with scrambled eggs, and toast") );
	pancakeHouseMenu->add( new CMenuItem(
	  "Regular Pancake Breakfast",
	  "Pancakes with fried eggs, sausage") );
	pancakeHouseMenu->add( new CMenuItem(
	  "Blueberry Pancakes",
	  "Pancakes made with fresh blueberries, and blueberry syrup") );
	pancakeHouseMenu->add( new CMenuItem(
	  "Waffles",
	  "Waffles, with your choice of blueberries or strawberries") );

	dinerMenu->add( new CMenuItem(
	  "Vegetarian BLT",
	  "(Fakin') Bacon with lettuce & tomato on whole wheat") );
	dinerMenu->add( new CMenuItem(
	  "BLT",
	  "Bacon with lettuce & tomato on whole wheat") );
	dinerMenu->add( new CMenuItem(
	  "Soup of the day",
	  "A bowl of the soup of the day, with a side of potato salad") );

    allMenus->print();

	return 0;
}


