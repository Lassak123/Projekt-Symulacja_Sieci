#ifndef IREPORTNOTIFIER_H
#define IREPORTNOTIFIER_H

#include "Types.h"

class IReportNotifier 
{
public:
	virtual bool shouldGenerateReport(Time) const =0;
private:
};

#endif // !IReportNotifier
