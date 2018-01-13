#include"Worker.h"

Worker::Worker(ElementID _id, TimeOffset _time, std::unique_ptr<IPackageQueue> ptr)
	:id(_id), processingDuration(_time)
{
	queue = std::move(ptr);
}

void Worker::receivePackage(Package package)
{
	queue->push(package);
}
Package * Worker::viewDepot() const
{
	return queue->view();
}

void Worker::doWork()
{
	if (currentlyProcessedPackage.size() == 0)
	{
		currentlyProcessedPackage.push_back(queue->pop());
		packageProcessingStartTime = 1;
	}
	else
	{
		if (packageProcessingStartTime<processingDuration)
		{
			packageProcessingStartTime++;
		}
		else
		{
			sendingBuffer.push_back(queue->pop());
			if (queue->size()==0)
			{
				packageProcessingStartTime = 0;
			}
			else
			{
				packageProcessingStartTime = 1;
				currentlyProcessedPackage.push_back(queue->pop());
			}

		}
	}
}




