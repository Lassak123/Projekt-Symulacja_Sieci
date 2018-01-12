#ifndef STOREGOUSE_H
#define STOREGOUSE_H

#include "IPackageReceiver.h"
#include "PackageQueue.h"
#include <memory>

class Storehouse : public IPackageReceiver
{
public:
	Storehouse(ElementID);
	
	void receivePackage(Package)override;
	inline ElementID getId() const override { return id; }
	void receivePackage(Package) override;
	Package* viewDepot() const override;
	inline ReciverType getReceiverType() const override { return ReciverType::STORAGEHOUSE; }


private:
	ElementID id;
	std::unique_ptr<IPackageDepot> depot;
};

#endif // !STOREGOUSE_H
