#ifndef __MENUITERATOR_H__
#define __MENUITERATOR_H__

#include <vector>
#include "iterator.h"
#include "menucomponent.h"

namespace designpattern{
namespace iterator{

class CMenuComponent;

class CMenuIterator : public CIterator<CMenuComponent>
{
public:
    CMenuIterator(std::vector< CMenuComponent* > rItems);
    virtual bool hasNext() const;
    virtual CMenuComponent* next() const; 

private:
    CMenuIterator(CMenuIterator& );
    void operator=(CMenuIterator& );
    mutable std::vector< CMenuComponent* > mItems;
    mutable std::vector< CMenuComponent* >::iterator mIterator;
};

}//iterator
}//designpattern

#endif