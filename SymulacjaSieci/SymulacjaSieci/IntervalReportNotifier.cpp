#include "IntervalReportNotifier.h"

IntervalReportNotifier::IntervalReportNotifier(TimeOffset _interval) {
	interval = _interval;
}

bool IntervalReportNotifier::shouldGenerateReport(Time time) const
{
	return (time%interval == 0);
}