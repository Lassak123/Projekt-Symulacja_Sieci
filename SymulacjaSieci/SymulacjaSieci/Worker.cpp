#include"Worker.h"

Worker::Worker(ElementID _id, TimeOffset _time, IPackageQueue* _packagequeue)
	:id(_id), processingDuration(_time)
{}

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
	
}




