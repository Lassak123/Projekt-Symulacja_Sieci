#ifndef IPACKAGEQUEUE_H
#define IPACKAGEQUEUE_H

#include "IPackageDepot.h"

class IPackageQueue : public IPackageDepot
{
public:
	virtual QueueType getQueueType() const = 0;
	virtual Package pop() = 0;
private:

};

#endif // !IPACKAGEQUEUE_H





