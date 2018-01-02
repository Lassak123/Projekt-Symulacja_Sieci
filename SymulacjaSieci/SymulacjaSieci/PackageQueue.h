#pragma once
#include "IPackageQueue.h"
#include "Types.h"
#include <deque>
#include <functional>

class PackageQueue: public IPackageQueue
{
public:
	PackageQueue();
	~PackageQueue();
	// PackageQueue(PackageQueueType);
	void push(Package);
	Package pop();
	Package* view();
	QueueType getQueueType();
	bool isEmpty();
	int size();

private:
	QueueType _queueType;
	std::deque<Package> _dequeue;
	std::function<Package()> _popFunction;
};
