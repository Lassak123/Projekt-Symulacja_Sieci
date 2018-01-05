#ifndef IPACKAGEDEPOT_H
#define IPACKAGEDEPOT_H

#include "Types.h"

class IPackageDepot
{
public:
	virtual void push(Package);
	virtual bool empty() const;
	virtual int size() const;
	virtual Package* view()const;

private:

};

#endif // !IPACKAGEDEPOT_H