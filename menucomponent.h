#ifndef __MENUCOMPONENT_H__
#define __MENUCOMPONENT_H__

#include <string>

namespace designpattern{
namespace iterator{

class CMenuComponent
{
public:
	virtual std::string getName() const;
	virtual std::string getDescription() const;
	virtual const CMenuComponent* getChild(int n) const;
	virtual void add(CMenuComponent*);
	virtual void remove(CMenuComponent*);
	virtual void print();
};

}//iterator
}//designpattern

#endif