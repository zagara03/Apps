#include "menuiterator.h"
#include "utility.h"

using namespace designpattern::iterator;

CMenuIterator::CMenuIterator(std::vector< CMenuComponent* > rItems): mItems(rItems)
{
	printMessage("CMenuIterator::CMenuIterator", true);
	mIterator = mItems.begin();
}

bool CMenuIterator::hasNext() const
{
	if(mIterator != mItems.end()) {
		return true;
	} else {
		return false;
	} 
}

CMenuComponent* CMenuIterator::next() const
{
	CMenuComponent* result = *mIterator++;
	return result;
}

CMenuIterator::CMenuIterator(CMenuIterator& copy)
{

}