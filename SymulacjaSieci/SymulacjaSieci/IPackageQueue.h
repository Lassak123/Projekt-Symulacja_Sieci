#ifndef IPACKAGEQUEUE_H
#define IPACKAGEQUEUE_H

#include "IPackageDepot.h"

class IPackageQueue : public IPackageDepot
{
public:
	virtual void push(Package);
	virtual Package pop();
	virtual bool empty();
	virtual int size();
	virtual Package* view();
	virtual QueueType getQueueType();
private:

};

#endif // !IPACKAGEQUEUE_H





