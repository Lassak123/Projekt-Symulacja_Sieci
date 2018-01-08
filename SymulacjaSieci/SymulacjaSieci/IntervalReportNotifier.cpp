<<<<<<< HEAD
#include "IntervalReportNotifier.h"

IntervalReportNotifier::IntervalReportNotifier(TimeOffset _interval) {
	interval = _interval;
}

bool IntervalReportNotifier::shouldGenerateReport(Time time) const
{
	return (time%interval == 0);
}
=======
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
>>>>>>> f27b00d07c8376d8d711637f90bb47ffe22f34d1
