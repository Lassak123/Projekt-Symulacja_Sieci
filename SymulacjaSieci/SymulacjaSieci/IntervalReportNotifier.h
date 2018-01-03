#include "Types.h"


class IntervalReportNotifier{

  public:
        IntervalReportNotifier(TimeOffset);
        bool shouldGenerateReport(Time);
  private:
        TimeOffset interval;  
}
