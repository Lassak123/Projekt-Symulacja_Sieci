#ifndef INTERVALREPORTNOTIFIER_H
#define INTERVALREPORTNOTIFIER_H

#include "IReportNotifier.h"
#include "Types.h"

class IntervalReportNotifier :public IReportNotifier
{
public:
	IntervalReportNotifier(TimeOffset);
	bool shouldGenerateReport(Time) const override;
private:
	TimeOffset interval;
};

#endif 