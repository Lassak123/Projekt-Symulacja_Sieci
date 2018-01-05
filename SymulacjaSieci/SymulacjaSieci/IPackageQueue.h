#ifndef IPACKAGEQUEUE_H
#define IPACKAGEQUEUE_H

#include "IPackageDepot.h"

class IPackageQueue : public IPackageDepot
{
public:
	virtual void push(Package);
	virtual Package pop();
	virtual bool empty() const;
	virtual int size() const;
	virtual Package* view() const;
	virtual QueueType getQueueType() const;
private:

};

#endif // !IPACKAGEQUEUE_H





