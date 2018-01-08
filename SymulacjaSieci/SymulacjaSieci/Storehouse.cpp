#include "Storehouse.h"

Storehouse::Storehouse(ElementID ID) : id(ID)
{
	depot = new PackageQueue(QueueType::FIFO);
}

Storehouse::~Storehouse()
{
	delete depot;
}

void Storehouse::receivePackage(Package package)
{
	depot->push(package);
}

Package* Storehouse::viewDepot() const
{
	return depot->view();
}