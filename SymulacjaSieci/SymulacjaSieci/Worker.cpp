#include"Types.h"
#include"Worker.h"
#include<iostream>
Worker::Worker(ElementID _id, TimeOffset _to, IPackageQueue* IPQ)
{
	id = _id;
	processingDuration = _to;
	packageProcessingStartTime = 0;
	queue = IPQ;
}
void Worker::receivePackage(Package _package)
{
	queue->push(_package);
}
Package* Worker::viewDepot()
{
	return queue;//????????
}
void Worker::doWork();
{

}
//ReciverType getReceiveType(); czy aby 