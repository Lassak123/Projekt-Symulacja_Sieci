#include "PackageQueue.h"

PackageQueue::PackageQueue(QueueType queuetype)
{
	if (queuetype == QueueType::FIFO)
	{
		_popFunction = [this]()->Package
		{
			Package result = _dequeue.front();
			_dequeue.pop_front();
			return result;
		};
	}
	else if (queuetype == QueueType::LIFO)
	{
		_popFunction = [this]()->Package
		{
			Package result = _dequeue.back();
			_dequeue.pop_front();
			return result;
		};
	}
}

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

bool PackageQueue::empty() const
{
	return _dequeue.empty();
}

int PackageQueue::size() const
{
	return _dequeue.size();
}

