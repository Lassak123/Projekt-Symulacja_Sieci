<<<<<<< HEAD
#ifndef IREPORTNOTIFIER_H
#define IREPORTNOTIFIER_H

#include "Types.h"

class IReportNotifier 
{
public:
	virtual bool shouldGenerateReport(Time) const =0;
private:
};

#endif
=======
#ifndef IReportNotifier_h
#define IReportNotifier_h
#include"Types.h"

class IReportNotifier
{
public:
	virtual bool shouldGenerateRepotr(Time) = 0;
};


#endif // !IReportNotifier
>>>>>>> f27b00d07c8376d8d711637f90bb47ffe22f34d1
