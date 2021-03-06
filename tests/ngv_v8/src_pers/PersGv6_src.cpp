#include "Ht.h"
#include "PersGv6.h"

void CPersGv6::PersGv6()
{
	if (PR_htValid) {
		switch (PR_htInst) {
		case GV6_ENTRY:
		{
			P_x = PR_htId;
			P_gvAddr = PR_htId;
			P_gvAddr2 = 0u;
			P_gvAddr3 = 1u;

			// D_2x2x2x
			GW_gv_B_2x2x2x_1F_m0.write_addr(PR_htId, 0u);
			GW_gv_B_2x2x2x_1F_m0.m_x = P_x;

			GW_gv_B_2x2x2x_1F_m1.write_addr(PR_htId, 0u);
			GW_gv_B_2x2x2x_1F_m1.m_x = P_x;

			GW_gv_B_2x2x2x_2F_m0.write_addr(PR_htId);
			GW_gv_B_2x2x2x_2F_m0.m_x[0] = P_x;

			GW_gv_B_2x2x2x_2F_m1.write_addr(PR_htId);
			GW_gv_B_2x2x2x_2F_m1.m_x[0] = P_x;

			GW_gv_B_2x2x2x_1F_AI_m0.write_addr(PR_htId, 0u);
			GW_gv_B_2x2x2x_1F_AI_m0.m_x = P_x;

			GW_gv_B_2x2x2x_1F_AI_m1.write_addr(PR_htId, 0u);
			GW_gv_B_2x2x2x_1F_AI_m1.m_x = P_x;

			GW_gv_B_2x2x2x_2F_AI_m0.write_addr(PR_htId);
			GW_gv_B_2x2x2x_2F_AI_m0.m_x[0] = P_x;

			GW_gv_B_2x2x2x_2F_AI_m1.write_addr(PR_htId);
			GW_gv_B_2x2x2x_2F_AI_m1.m_x[0] = P_x;

			GW_gv_B_2x2x2x_1F_AA_m0.write_addr(PR_htId, 0u);
			GW_gv_B_2x2x2x_1F_AA_m0.m_x = P_x;

			GW_gv_B_2x2x2x_1F_AA_m1.write_addr(PR_htId, 0u);
			GW_gv_B_2x2x2x_1F_AA_m1.m_x = P_x;

			GW_gv_B_2x2x2x_4F_AA_m0.write_addr(PR_htId);
			GW_gv_B_2x2x2x_4F_AA_m0.m_x[0] = P_x;

			GW_gv_B_2x2x2x_4F_AA_m1.write_addr(PR_htId);
			GW_gv_B_2x2x2x_4F_AA_m1.m_x[0] = P_x;

			P_loopCnt = 0;
			HtContinue(GV6_LOOP);
		}
		break;
		case GV6_LOOP:
		{
			// D_2x2x2x
			if (GR_gv_B_2x2x2x_1F_m0.m_x != PR_x) HtAssert(0, 0);
			if (GR_gv_B_2x2x2x_1F_m1.m_x != PR_x) HtAssert(0, 0);
			if (GR_gv_B_2x2x2x_2F_m0.m_x[0] != PR_x) HtAssert(0, 0);
			if (GR_gv_B_2x2x2x_2F_m1.m_x[0] != PR_x) HtAssert(0, 0);
			if (GR_gv_B_2x2x2x_1F_AI_m0.m_x != PR_x) HtAssert(0, 0);
			if (GR_gv_B_2x2x2x_1F_AI_m1.m_x != PR_x) HtAssert(0, 0);
			if (GR_gv_B_2x2x2x_2F_AI_m0.m_x[0] != PR_x) HtAssert(0, 0);
			if (GR_gv_B_2x2x2x_2F_AI_m1.m_x[0] != PR_x) HtAssert(0, 0);
			if (GR_gv_B_2x2x2x_1F_AA_m0.m_x != PR_x) HtAssert(0, 0);
			if (GR_gv_B_2x2x2x_1F_AA_m1.m_x != PR_x) HtAssert(0, 0);
			if (GR_gv_B_2x2x2x_4F_AA_m0.m_x[0] != PR_x) HtAssert(0, 0);
			if (GR_gv_B_2x2x2x_4F_AA_m1.m_x[0] != PR_x) HtAssert(0, 0);

			P_x += 1;

			// D_2x2x2x
			GW_gv_B_2x2x2x_1F_m0.write_addr(PR_htId, 0u);
			GW_gv_B_2x2x2x_1F_m0.m_x = P_x;

			GW_gv_B_2x2x2x_1F_m1.write_addr(PR_htId, 0u);
			GW_gv_B_2x2x2x_1F_m1.m_x = P_x;

			GW_gv_B_2x2x2x_2F_m0.write_addr(PR_htId);
			GW_gv_B_2x2x2x_2F_m0.m_x[0] = P_x;

			GW_gv_B_2x2x2x_2F_m1.write_addr(PR_htId);
			GW_gv_B_2x2x2x_2F_m1.m_x[0] = P_x;

			GW_gv_B_2x2x2x_1F_AI_m0.write_addr(PR_htId, 0u);
			GW_gv_B_2x2x2x_1F_AI_m0.m_x.AtomicInc();

			GW_gv_B_2x2x2x_1F_AI_m1.write_addr(PR_htId, 0u);
			GW_gv_B_2x2x2x_1F_AI_m1.m_x.AtomicInc();

			GW_gv_B_2x2x2x_2F_AI_m0.write_addr(PR_htId);
			GW_gv_B_2x2x2x_2F_AI_m0.m_x[0].AtomicInc();

			GW_gv_B_2x2x2x_2F_AI_m1.write_addr(PR_htId);
			GW_gv_B_2x2x2x_2F_AI_m1.m_x[0].AtomicInc();

			GW_gv_B_2x2x2x_1F_AA_m0.write_addr(PR_htId, 0u);
			GW_gv_B_2x2x2x_1F_AA_m0.m_x.AtomicAdd(1u);

			GW_gv_B_2x2x2x_1F_AA_m1.write_addr(PR_htId, 0u);
			GW_gv_B_2x2x2x_1F_AA_m1.m_x = P_x;

			GW_gv_B_2x2x2x_4F_AA_m0.write_addr(PR_htId);
			GW_gv_B_2x2x2x_4F_AA_m0.m_x[0].AtomicAdd(1u);

			GW_gv_B_2x2x2x_4F_AA_m1.write_addr(PR_htId);
			GW_gv_B_2x2x2x_4F_AA_m1.m_x[0] = P_x;


			HtContinue(P_loopCnt++ < 100 ? GV6_LOOP : GV6_RETURN);
		}
		break;
		case GV6_RETURN:
		{
			if (SendReturnBusy_gv6()) {
				HtRetry();
				break;
			}

			SendReturn_gv6();
		}
		break;
		default:
			assert(0);
		}
	}
}
