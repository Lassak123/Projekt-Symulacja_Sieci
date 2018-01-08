#ifndef PACKKAGEQUEUE_H
#define PACKKAGEQUEUE_H

#include "IPackageQueue.h"
#include "Types.h"
#include <deque>
#include <functional>

class PackageQueue : public IPackageQueue
{
public:
	PackageQueue(QueueType);
	void push(Package) override;
	Package pop() override;
	Package* view()const override;
	QueueType getQueueType()const override { return _queueType; }
	bool empty() const override;
	int size() const override;

private:
	QueueType _queueType;
	std::deque<Package> _dequeue;
	std::function<Package()> _popFunction;
};

#endif // !PACKKAGEQUEUE_H


