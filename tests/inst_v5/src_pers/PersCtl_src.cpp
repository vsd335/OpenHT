#include "Ht.h"
#include "PersCtl.h"

#define BUSY_RETRY(b) { if (b) { HtRetry(); break; } }

void
CPersCtl::PersCtl()
{
	if (PR_htValid) {
		switch (PR_htInst) {
		case CTL_INST1: {
			BUSY_RETRY(SendCallBusy_inst1());

			SendCall_inst1(CTL_INST2, 1);
			break;
		}
		case CTL_INST2: {
			BUSY_RETRY(SendCallBusy_inst2());

			SendCall_inst2(CTL_RTN, 2);
			break;
		}
		case CTL_RTN: {
			BUSY_RETRY(SendReturnBusy_htmain());

			SendReturn_htmain();
			break;
		}
		default:
			assert(0);
		}
	}
}
