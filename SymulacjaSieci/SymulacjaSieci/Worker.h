#pragma once
#include "PackageSender.h"
#include "IPackageQueue.h"
#include "IPackageReceiver.h"


class Worker :public PackageSender, public IPackageReceiver
{
public:
	Worker(ElementID, TimeOffset, IPackageQueue*);
	void receivePackage(Package);
	Package* viewDepot();
	void doWork();
	//ReciverType getReceiveType(); czy aby na pewno?
	inline ElementID getId() { return id; }
	inline TimeOffset getProcessingDuration() { return processingDuration; }
	inline Time getPackageProcessingStartTime() { return packageProcessingStartTime; }

	

private:
	ElementID id;
	TimeOffset processingDuration;
	Time packageProcessingStartTime;
	IPackageQueue* queue;
};