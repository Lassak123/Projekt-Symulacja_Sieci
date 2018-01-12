#include "IntervalReportNotifier.h"

bool IntervalReportNotifier::shouldGenerateReport(Time time) 
{
	return (time%interval == 0);
}


