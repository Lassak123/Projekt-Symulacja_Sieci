#ifndef TYPES_H
#define TYPES_H

#define Time int
#define TimeOffset int
#define ElementID int

enum ReciverType
{
	WORKER,
	STORAGEHOUSE
};

enum QueueType
{
	LIFO,
	FIFO
};

class Package
{
public:
	Package();
	inline ElementID getId() const { return id; }
private:
	ElementID id;
	static ElementID packageCounter;
};

ElementID Package::packageCounter = 0;

Package::Package()
{
	packageCounter++;
	id = packageCounter;
}

#endif // !TYPES_H

