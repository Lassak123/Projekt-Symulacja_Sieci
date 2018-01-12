#ifndef INTERVALREPORTNOTIFIER_H
#define INTERVALREPORTNOTIFIER_H

#include "Types.h"
#include "IReportNotifier.h"

class IntervalReportNotifier: public IReportNotifier
{

  public:
		IntervalReportNotifier(TimeOffset _interval) :interval(_interval) {}
        bool shouldGenerateReport(Time);
  private:
        TimeOffset interval;  
};

#endif
