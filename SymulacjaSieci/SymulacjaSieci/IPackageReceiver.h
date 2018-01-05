#ifndef IPACKAGERECEIVER_H
#define IPACKAGERECEIVER_H

#include "Types.h"

class IPackageReceiver
{
public:
	virtual void receivePackage(Package);
	virtual Package* viewDepot() const;
	virtual ReciverType getReceiverType() const;
	virtual ElementID getId() const;
private:

};

#endif // !IPACKAGERECEIVER_H

