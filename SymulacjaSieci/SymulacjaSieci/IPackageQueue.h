#ifndef IPACKAGEQUEUE_H
#define IPACKAGEQUEUE_H

#include "IPackageDepot.h"

class IPackageQueue : public IPackageDepot
{
public:
	virtual void push(Package) = 0;
	virtual Package pop() = 0;
	virtual bool empty() const = 0;
	virtual int size() const = 0;
	virtual Package* view() const = 0;
	virtual QueueType getQueueType() const = 0;
private:

};

#endif // !IPACKAGEQUEUE_H





