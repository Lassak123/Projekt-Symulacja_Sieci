#pragma once
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
