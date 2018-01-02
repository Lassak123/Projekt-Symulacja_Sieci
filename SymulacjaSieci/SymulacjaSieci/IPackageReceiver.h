#pragma once
#include "Types.h"
class IPackageReceiver
{
public:
	virtual void receivePackage(Package);
	virtual Package* viewDepot();
	virtual ReciverType getReceiverType();
	virtual ElementID getId();
private:

};

