#include "Storehouse.h"

Storehouse::Storehouse(ElementID ID)
	:id(ID)
{
	depot = new IPackageDepot();
}



