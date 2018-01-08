#ifndef IPACKAGERECEIVER_H
#define IPACKAGERECEIVER_H

#include "Types.h"

class IPackageReceiver
{
public:
	virtual void receivePackage(Package) = 0;
	virtual Package* viewDepot() const = 0;
	virtual ReciverType getReceiverType() const = 0;
	virtual ElementID getId() const = 0;
private:

};

#endif // !IPACKAGERECEIVER_H

