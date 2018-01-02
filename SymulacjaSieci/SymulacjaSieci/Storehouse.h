#pragma once
#include "IPackageReceiver.h"
#include "IPackageDepot.h"

class Storehouse: public IPackageReceiver
{
public:
	Storehouse(ElementID);
	void receivePackage(Package);
	Package* viewDepot();
	inline ElementID getId() { return id; }

private:
	ElementID id;
	IPackageDepot* depot;
};