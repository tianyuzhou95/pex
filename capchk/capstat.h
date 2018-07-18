/*
 * This is capstat.h for capchk
 * This file should only be included in capchk.cpp
 * 2018 Tong Zhang<t.zhang2@partner.samsung.com>
 */
#ifndef _CAPCHK_STAT_
#define _CAPCHK_STAT_

STATISTIC(FuncCounter, "Functions greeted");
STATISTIC(ExternalFuncCounter, "External functions");
STATISTIC(DiscoveredPath, "Discovered Path");
STATISTIC(MatchedPath, "Matched Path");
STATISTIC(GoodPath, "Good Path");
STATISTIC(BadPath, "Bad Path");
STATISTIC(IgnPath, "Ignored Path");
STATISTIC(UnResolv, "Path Unable to Resolve");
STATISTIC(CSFPResolved, "Resolved CallSite Using Function Pointer");
STATISTIC(CRITVAR, "Critical Variables");
STATISTIC(CRITFUNC, "Critical Functions");
STATISTIC(FwdAnalysisMaxHit, "# of times max depth for forward analysis hit");
STATISTIC(BwdAnalysisMaxHit, "# of times max depth for backward analysis hit");
STATISTIC(CPUnResolv, "Critical Function Pointer Unable to Resolve, Collect Pass");
STATISTIC(CPResolv, "Critical Function Pointer Resolved, Collect Pass");
STATISTIC(CFuncUsedByNonCallInst, "Critical Functions used by non CallInst");
STATISTIC(CFuncUsedByStaticAssign, "Critical Functions used by static assignment");
STATISTIC(MatchCallCriticalFuncPtr, "# of times indirect call site matched with critical functions");
STATISTIC(UnMatchCallCriticalFuncPtr, "# of times indirect call site failed to match with critical functions");
STATISTIC(CapChkInFPTR, "found capability check inside call using function ptr\n");

#ifdef CUSTOM_STATISTICS
void capchk::dump_statistics()
{
    errs()<<"------------STATISTICS---------------\n";
    STATISTICS_DUMP(FuncCounter);
    STATISTICS_DUMP(ExternalFuncCounter);
    STATISTICS_DUMP(DiscoveredPath);
    STATISTICS_DUMP(MatchedPath);
    STATISTICS_DUMP(GoodPath);
    STATISTICS_DUMP(BadPath);
    STATISTICS_DUMP(IgnPath);
    STATISTICS_DUMP(UnResolv);
    STATISTICS_DUMP(CSFPResolved);
    STATISTICS_DUMP(CRITFUNC);
    STATISTICS_DUMP(CRITVAR);
    STATISTICS_DUMP(FwdAnalysisMaxHit);
    STATISTICS_DUMP(BwdAnalysisMaxHit);
    STATISTICS_DUMP(CPUnResolv);
    STATISTICS_DUMP(CPResolv);
    STATISTICS_DUMP(CFuncUsedByNonCallInst);
    STATISTICS_DUMP(CFuncUsedByStaticAssign);
    STATISTICS_DUMP(MatchCallCriticalFuncPtr);
    STATISTICS_DUMP(UnMatchCallCriticalFuncPtr);
    STATISTICS_DUMP(CapChkInFPTR);
    errs()<<"\n\n\n";
}
#endif

#endif //_CAPCHK_STAT_

