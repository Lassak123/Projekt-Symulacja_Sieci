#include "PackageQueue.h"

void PackageQueue::push(Package package)
{
	_dequeue.push_back(package);
}

Package PackageQueue::pop()
{
	return _popFunction();
}

Package* PackageQueue::view()const
{
	Package * result = new Package[_dequeue.size()];
	for (int i = 0; i < _dequeue.size(); i++)
	{
		result[i] = _dequeue[i];
	}
	return result;
}

bool PackageQueue::isEmpty() const
{
	return _dequeue.empty();
}

int PackageQueue::size() const
{
	return _dequeue.size();
}

