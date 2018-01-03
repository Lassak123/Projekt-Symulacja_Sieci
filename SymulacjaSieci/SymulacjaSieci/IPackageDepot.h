#ifndef IPACKAGEDEPOT_H
#define IPACKAGEDEPOT_H

#include "Types.h"

class IPackageDepot
{
public:
	virtual void push(Package);
	virtual bool empty();
	virtual int size();
	virtual Package* view();

private:

};

#endif // !IPACKAGEDEPOT_H