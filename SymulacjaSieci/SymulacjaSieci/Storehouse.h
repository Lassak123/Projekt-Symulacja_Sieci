#ifndef STOREGOUSE_H
#define STOREGOUSE_H

#include "IPackageReceiver.h"
#include "IPackageDepot.h"
#include "IPackageQueue.h"
#include "PackageQueue.h"

class Storehouse : public IPackageReceiver
{
public:
	Storehouse(ElementID);
	~Storehouse();
	void receivePackage(Package);
	Package* viewDepot() const;
	inline ElementID getId() const override { return id; }

	void receivePackage(Package) override;
	Package* viewDepot() const override;
	inline ReciverType getReceiverType() const override { return ReciverType::STORAGEHOUSE; }


private:
	ElementID id;
	IPackageDepot* depot;
};

#endif // !STOREGOUSE_H
