OPTFLAG(PEEPHOLE ,0, "peephole",   "Peephole postpass")
OPTFLAG(BRANCH   ,1, "branch",     "Branch optimizations")
OPTFLAG(INLINE   ,2, "inline",     "Inline method calls")
OPTFLAG(CFOLD    ,3, "cfold",      "Constant folding")
OPTFLAG(CONSPROP ,4, "consprop",   "Constant propagation")
OPTFLAG(COPYPROP ,5, "copyprop",   "Copy propagation")
OPTFLAG(DEADCE   ,6, "deadce",     "Dead code elimination")
OPTFLAG(LINEARS  ,7, "linears",    "Linear scan global reg allocation")
OPTFLAG(CMOV     ,8, "cmov",       "Conditional moves")
OPTFLAG(SHARED   ,9, "shared",     "Emit per-domain code")
OPTFLAG(INTRINS  ,10, "intrins",    "Intrinsic method implementations")
OPTFLAG(TAILC    ,11, "tailc",      "Tail recursion and tail calls")
OPTFLAG(LOOP     ,12, "loop",       "Loop related optimizations")
OPTFLAG(FCMOV    ,13, "fcmov",      "Fast x86 FP compares")
OPTFLAG(LEAF     ,14, "leaf",       "Leaf procedures optimizations")
OPTFLAG(AOT      ,15, "aot",        "Usage of Ahead Of Time compiled code")
OPTFLAG(PRECOMP  ,16, "precomp",    "Precompile all methods before executing Main")
OPTFLAG(ABCREM   ,17, "abcrem",     "Array bound checks removal")
OPTFLAG(SSAPRE   ,18, "ssapre",     "SSA based Partial Redundancy Elimination")
OPTFLAG(EXCEPTION,19, "exception",  "Optimize exception catch blocks")
OPTFLAG(SSA      ,20, "ssa",        "Use plain SSA form")
OPTFLAG(SSE2     ,21, "sse2",       "SSE2 instructions on x86")
OPTFLAG(GSHARED  ,22, "gshared",    "Share generics")
OPTFLAG(SIMD	 ,23, "simd",	    "Simd intrinsics")
OPTFLAG(UNSAFE	 ,24, "unsafe",	    "Remove bound checks and perform other dangerous changes")
