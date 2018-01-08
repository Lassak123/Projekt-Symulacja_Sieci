#include "IntervalReportNotifier.h"
#include "Types.h"

IntervalReportNotifier::IntervalReportNotifier(TimeOffset _interval){
interval=_interval;
}

bool IntervalReportNotifier::shouldGenerateReport(Time _time_)
{
	if (_time_%interval == 0)
		return true;
	else
		return false;
}
