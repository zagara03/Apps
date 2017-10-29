#ifndef __ITERATOR_H__
#define __ITERATOR_H__

namespace designpattern{
namespace iterator{

template < class T >
class CIterator
{
public:
    virtual ~CIterator() { }
    virtual bool hasNext() const = 0;
    virtual T* next() const = 0; 
};

}//iterator
}//designpattern
    
#endif