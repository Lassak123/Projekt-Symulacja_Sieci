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
	void push(Package);
	Package pop();
	Package* view()const;
	QueueType getQueueType()const { return _queueType; }
	bool isEmpty() const;
	int size() const;

private:
	QueueType _queueType;
	std::deque<Package> _dequeue;
	std::function<Package()> _popFunction;
};

#endif // !PACKKAGEQUEUE_H


