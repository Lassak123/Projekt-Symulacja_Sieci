#ifndef IPACKAGEDEPOT_H
#define IPACKAGEDEPOT_H

#include "Types.h"

class IPackageDepot
{
public:
	virtual void push(Package)=0;
	virtual bool empty() const =0;
	virtual int size() const =0 ;
	virtual Package* view()const =0;

private:

};

#endif // !IPACKAGEDEPOT_H