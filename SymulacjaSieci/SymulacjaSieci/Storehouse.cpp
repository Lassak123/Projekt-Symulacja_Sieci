#include "Storehouse.h"

Storehouse::Storehouse(ElementID ID) : id(ID)
{
	depot = std::make_unique<PackageQueue>();
}


void Storehouse::receivePackage(Package package)
{
	depot->push(package);
}

Package* Storehouse::viewDepot() const
{
	return depot->view();
}