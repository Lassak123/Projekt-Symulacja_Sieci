#ifndef IPACKAGERECEIVER_H
#define IPACKAGERECEIVER_H

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

#endif // !IPACKAGERECEIVER_H

