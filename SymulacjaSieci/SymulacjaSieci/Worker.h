#ifndef WORKER_H
#define WORKER_H

#include "PackageSender.h"
#include "PackageQueue.h"
#include "IPackageReceiver.h"
#include <vector>
#include <memory>


class Worker :public PackageSender, public IPackageReceiver
{
public:
	Worker(ElementID, TimeOffset, IPackageQueue*);
	void receivePackage(Package) override;
	Package* viewDepot() const override;
	void doWork();
	inline ReciverType getReceiverType() const override { return ReciverType::WORKER; }
	inline ElementID getId() const override { return id; }
	inline TimeOffset getProcessingDuration() { return processingDuration; }
	inline Time getPackageProcessingStartTime() { return packageProcessingStartTime; }

	

private:
	ElementID id;
	TimeOffset processingDuration;
	Time packageProcessingStartTime;
	std::unique_ptr<IPackageQueue> queue;
	std::vector<Package> currentlyProcessedPackage;
};
#endif // !WORKER_H