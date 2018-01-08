<<<<<<< HEAD
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
=======
#include "Types.h"


class IntervalReportNotifier{

  public:
        IntervalReportNotifier(TimeOffset);
        bool shouldGenerateReport(Time);
  private:
        TimeOffset interval;  
};
>>>>>>> f27b00d07c8376d8d711637f90bb47ffe22f34d1
