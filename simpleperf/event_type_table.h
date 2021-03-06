// This file is auto-generated by generate-event_table.py.

EVENT_TYPE_TABLE_ENTRY("cpu-cycles", PERF_TYPE_HARDWARE, PERF_COUNT_HW_CPU_CYCLES, "", "")
EVENT_TYPE_TABLE_ENTRY("instructions", PERF_TYPE_HARDWARE, PERF_COUNT_HW_INSTRUCTIONS, "", "")
EVENT_TYPE_TABLE_ENTRY("cache-references", PERF_TYPE_HARDWARE, PERF_COUNT_HW_CACHE_REFERENCES, "",
                       "")
EVENT_TYPE_TABLE_ENTRY("cache-misses", PERF_TYPE_HARDWARE, PERF_COUNT_HW_CACHE_MISSES, "", "")
EVENT_TYPE_TABLE_ENTRY("branch-instructions", PERF_TYPE_HARDWARE, PERF_COUNT_HW_BRANCH_INSTRUCTIONS,
                       "", "")
EVENT_TYPE_TABLE_ENTRY("branch-misses", PERF_TYPE_HARDWARE, PERF_COUNT_HW_BRANCH_MISSES, "", "")
EVENT_TYPE_TABLE_ENTRY("bus-cycles", PERF_TYPE_HARDWARE, PERF_COUNT_HW_BUS_CYCLES, "", "")
EVENT_TYPE_TABLE_ENTRY("stalled-cycles-frontend", PERF_TYPE_HARDWARE,
                       PERF_COUNT_HW_STALLED_CYCLES_FRONTEND, "", "")
EVENT_TYPE_TABLE_ENTRY("stalled-cycles-backend", PERF_TYPE_HARDWARE,
                       PERF_COUNT_HW_STALLED_CYCLES_BACKEND, "", "")

EVENT_TYPE_TABLE_ENTRY("cpu-clock", PERF_TYPE_SOFTWARE, PERF_COUNT_SW_CPU_CLOCK, "", "")
EVENT_TYPE_TABLE_ENTRY("task-clock", PERF_TYPE_SOFTWARE, PERF_COUNT_SW_TASK_CLOCK, "", "")
EVENT_TYPE_TABLE_ENTRY("page-faults", PERF_TYPE_SOFTWARE, PERF_COUNT_SW_PAGE_FAULTS, "", "")
EVENT_TYPE_TABLE_ENTRY("context-switches", PERF_TYPE_SOFTWARE, PERF_COUNT_SW_CONTEXT_SWITCHES, "",
                       "")
EVENT_TYPE_TABLE_ENTRY("cpu-migrations", PERF_TYPE_SOFTWARE, PERF_COUNT_SW_CPU_MIGRATIONS, "", "")
EVENT_TYPE_TABLE_ENTRY("minor-faults", PERF_TYPE_SOFTWARE, PERF_COUNT_SW_PAGE_FAULTS_MIN, "", "")
EVENT_TYPE_TABLE_ENTRY("major-faults", PERF_TYPE_SOFTWARE, PERF_COUNT_SW_PAGE_FAULTS_MAJ, "", "")
EVENT_TYPE_TABLE_ENTRY("alignment-faults", PERF_TYPE_SOFTWARE, PERF_COUNT_SW_ALIGNMENT_FAULTS, "",
                       "")
EVENT_TYPE_TABLE_ENTRY("emulation-faults", PERF_TYPE_SOFTWARE, PERF_COUNT_SW_EMULATION_FAULTS, "",
                       "")

EVENT_TYPE_TABLE_ENTRY("L1-dcache-loads", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_L1D) | (PERF_COUNT_HW_CACHE_OP_READ << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("L1-dcache-load-misses", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_L1D) | (PERF_COUNT_HW_CACHE_OP_READ << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("L1-dcache-stores", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_L1D) | (PERF_COUNT_HW_CACHE_OP_WRITE << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("L1-dcache-store-misses", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_L1D) | (PERF_COUNT_HW_CACHE_OP_WRITE << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("L1-dcache-prefetches", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_L1D) | (PERF_COUNT_HW_CACHE_OP_PREFETCH << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("L1-dcache-prefetch-misses", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_L1D) | (PERF_COUNT_HW_CACHE_OP_PREFETCH << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("L1-icache-loads", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_L1I) | (PERF_COUNT_HW_CACHE_OP_READ << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("L1-icache-load-misses", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_L1I) | (PERF_COUNT_HW_CACHE_OP_READ << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("L1-icache-stores", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_L1I) | (PERF_COUNT_HW_CACHE_OP_WRITE << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("L1-icache-store-misses", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_L1I) | (PERF_COUNT_HW_CACHE_OP_WRITE << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("L1-icache-prefetches", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_L1I) | (PERF_COUNT_HW_CACHE_OP_PREFETCH << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("L1-icache-prefetch-misses", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_L1I) | (PERF_COUNT_HW_CACHE_OP_PREFETCH << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("LLC-loads", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_LL) | (PERF_COUNT_HW_CACHE_OP_READ << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("LLC-load-misses", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_LL) | (PERF_COUNT_HW_CACHE_OP_READ << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("LLC-stores", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_LL) | (PERF_COUNT_HW_CACHE_OP_WRITE << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("LLC-store-misses", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_LL) | (PERF_COUNT_HW_CACHE_OP_WRITE << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("LLC-prefetches", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_LL) | (PERF_COUNT_HW_CACHE_OP_PREFETCH << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("LLC-prefetch-misses", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_LL) | (PERF_COUNT_HW_CACHE_OP_PREFETCH << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("dTLB-loads", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_DTLB) | (PERF_COUNT_HW_CACHE_OP_READ << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("dTLB-load-misses", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_DTLB) | (PERF_COUNT_HW_CACHE_OP_READ << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("dTLB-stores", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_DTLB) | (PERF_COUNT_HW_CACHE_OP_WRITE << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("dTLB-store-misses", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_DTLB) | (PERF_COUNT_HW_CACHE_OP_WRITE << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("dTLB-prefetches", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_DTLB) | (PERF_COUNT_HW_CACHE_OP_PREFETCH << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("dTLB-prefetch-misses", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_DTLB) | (PERF_COUNT_HW_CACHE_OP_PREFETCH << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("iTLB-loads", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_ITLB) | (PERF_COUNT_HW_CACHE_OP_READ << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("iTLB-load-misses", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_ITLB) | (PERF_COUNT_HW_CACHE_OP_READ << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("iTLB-stores", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_ITLB) | (PERF_COUNT_HW_CACHE_OP_WRITE << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("iTLB-store-misses", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_ITLB) | (PERF_COUNT_HW_CACHE_OP_WRITE << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("iTLB-prefetches", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_ITLB) | (PERF_COUNT_HW_CACHE_OP_PREFETCH << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("iTLB-prefetch-misses", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_ITLB) | (PERF_COUNT_HW_CACHE_OP_PREFETCH << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("branch-loads", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_BPU) | (PERF_COUNT_HW_CACHE_OP_READ << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("branch-load-misses", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_BPU) | (PERF_COUNT_HW_CACHE_OP_READ << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("branch-stores", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_BPU) | (PERF_COUNT_HW_CACHE_OP_WRITE << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("branch-store-misses", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_BPU) | (PERF_COUNT_HW_CACHE_OP_WRITE << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("branch-prefetches", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_BPU) | (PERF_COUNT_HW_CACHE_OP_PREFETCH << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("branch-prefetch-misses", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_BPU) | (PERF_COUNT_HW_CACHE_OP_PREFETCH << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("node-loads", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_NODE) | (PERF_COUNT_HW_CACHE_OP_READ << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("node-load-misses", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_NODE) | (PERF_COUNT_HW_CACHE_OP_READ << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("node-stores", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_NODE) | (PERF_COUNT_HW_CACHE_OP_WRITE << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("node-store-misses", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_NODE) | (PERF_COUNT_HW_CACHE_OP_WRITE << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("node-prefetches", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_NODE) | (PERF_COUNT_HW_CACHE_OP_PREFETCH << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16)),
                       "", "")
EVENT_TYPE_TABLE_ENTRY("node-prefetch-misses", PERF_TYPE_HW_CACHE,
                       ((PERF_COUNT_HW_CACHE_NODE) | (PERF_COUNT_HW_CACHE_OP_PREFETCH << 8) |
                        (PERF_COUNT_HW_CACHE_RESULT_MISS << 16)),
                       "", "")

EVENT_TYPE_TABLE_ENTRY(
    "raw-sw-incr", PERF_TYPE_RAW, 0x0,
    "Instruction architecturally executed, Condition code check pass, software increment", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1i-cache-refill", PERF_TYPE_RAW, 0x1,
                       "Level 1 instruction cache refill", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1i-tlb-refill", PERF_TYPE_RAW, 0x2,
                       "Attributable Level 1 instruction TLB refill", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1d-cache-refill", PERF_TYPE_RAW, 0x3, "Level 1 data cache refill",
                       "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1d-cache", PERF_TYPE_RAW, 0x4, "Level 1 data cache access", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1d-tlb-refill", PERF_TYPE_RAW, 0x5,
                       "Attributable Level 1 data TLB refill", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-ld-retired", PERF_TYPE_RAW, 0x6,
                       "Instruction architecturally executed, Condition code check pass, load",
                       "arm")
EVENT_TYPE_TABLE_ENTRY("raw-st-retired", PERF_TYPE_RAW, 0x7,
                       "Instruction architecturally executed, Condition code check pass, store",
                       "arm")
EVENT_TYPE_TABLE_ENTRY("raw-inst-retired", PERF_TYPE_RAW, 0x8,
                       "Instruction architecturally executed", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-exc-taken", PERF_TYPE_RAW, 0x9, "Exception taken", "arm")
EVENT_TYPE_TABLE_ENTRY(
    "raw-exc-return", PERF_TYPE_RAW, 0xa,
    "Instruction architecturally executed, Condition code check pass, exception return", "arm")
EVENT_TYPE_TABLE_ENTRY(
    "raw-cid-write-retired", PERF_TYPE_RAW, 0xb,
    "Instruction architecturally executed, Condition code check pass, write to CONTEXTIDR", "arm")
EVENT_TYPE_TABLE_ENTRY(
    "raw-pc-write-retired", PERF_TYPE_RAW, 0xc,
    "Instruction architecturally executed, Condition code check pass, software change of the PC",
    "arm")
EVENT_TYPE_TABLE_ENTRY("raw-br-immed-retired", PERF_TYPE_RAW, 0xd,
                       "Instruction architecturally executed, immediate branch", "arm")
EVENT_TYPE_TABLE_ENTRY(
    "raw-br-return-retired", PERF_TYPE_RAW, 0xe,
    "Instruction architecturally executed, Condition code check pass, procedure return", "arm")
EVENT_TYPE_TABLE_ENTRY(
    "raw-unaligned-ldst-retired", PERF_TYPE_RAW, 0xf,
    "Instruction architecturally executed, Condition code check pass, unaligned load or store",
    "arm")
EVENT_TYPE_TABLE_ENTRY("raw-br-mis-pred", PERF_TYPE_RAW, 0x10,
                       "Mispredicted or not predicted branch Speculatively executed", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-cpu-cycles", PERF_TYPE_RAW, 0x11, "Cycle", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-br-pred", PERF_TYPE_RAW, 0x12,
                       "Predictable branch Speculatively executed", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-mem-access", PERF_TYPE_RAW, 0x13, "Data memory access", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1i-cache", PERF_TYPE_RAW, 0x14,
                       "Attributable Level 1 instruction cache access", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1d-cache-wb", PERF_TYPE_RAW, 0x15,
                       "Attributable Level 1 data cache write-back", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2d-cache", PERF_TYPE_RAW, 0x16, "Level 2 data cache access", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2d-cache-refill", PERF_TYPE_RAW, 0x17, "Level 2 data cache refill",
                       "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2d-cache-wb", PERF_TYPE_RAW, 0x18,
                       "Attributable Level 2 data cache write-back", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-bus-access", PERF_TYPE_RAW, 0x19, "Bus access", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-memory-error", PERF_TYPE_RAW, 0x1a, "Local memory error", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-inst-spec", PERF_TYPE_RAW, 0x1b, "Operation Speculatively executed",
                       "arm")
EVENT_TYPE_TABLE_ENTRY(
    "raw-ttbr-write-retired", PERF_TYPE_RAW, 0x1c,
    "Instruction architecturally executed, Condition code check pass, write to TTBR", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-bus-cycles", PERF_TYPE_RAW, 0x1d, "Bus cycle", "arm")
EVENT_TYPE_TABLE_ENTRY(
    "raw-chain", PERF_TYPE_RAW, 0x1e,
    "For odd-numbered counters, increments the count by one for each overflow of the preceding "
    "even-numbered counter. For even-numbered counters, there is no increment.",
    "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1d-cache-allocate", PERF_TYPE_RAW, 0x1f,
                       "Attributable Level 1 data cache allocation without refill", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2d-cache-allocate", PERF_TYPE_RAW, 0x20,
                       "Attributable Level 2 data cache allocation without refill", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-br-retired", PERF_TYPE_RAW, 0x21,
                       "Instruction architecturally executed, branch", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-br-mis-pred-retired", PERF_TYPE_RAW, 0x22,
                       "Instruction architecturally executed, mispredicted branch", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-stall-frontend", PERF_TYPE_RAW, 0x23,
                       "No operation issued due to the frontend", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-stall-backend", PERF_TYPE_RAW, 0x24,
                       "No operation issued due to backend", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1d-tlb", PERF_TYPE_RAW, 0x25,
                       "Attributable Level 1 data or unified TLB access", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1i-tlb", PERF_TYPE_RAW, 0x26,
                       "Attributable Level 1 instruction TLB access", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2i-cache", PERF_TYPE_RAW, 0x27,
                       "Attributable Level 2 instruction cache access", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2i-cache-refill", PERF_TYPE_RAW, 0x28,
                       "Attributable Level 2 instruction cache refill", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l3d-cache-allocate", PERF_TYPE_RAW, 0x29,
                       "Attributable Level 3 data or unified cache allocation without refill",
                       "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l3d-cache-refill", PERF_TYPE_RAW, 0x2a,
                       "Attributable Level 3 data cache refill", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l3d-cache", PERF_TYPE_RAW, 0x2b,
                       "Attributable Level 3 data cache access", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l3d-cache-wb", PERF_TYPE_RAW, 0x2c,
                       "Attributable Level 3 data or unified cache write-back", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2d-tlb-refill", PERF_TYPE_RAW, 0x2d,
                       "Attributable Level 2 data or unified TLB refill", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2i-tlb-refill", PERF_TYPE_RAW, 0x2e,
                       "Attributable Level 2 instruction TLB refill", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2d-tlb", PERF_TYPE_RAW, 0x2f,
                       "Attributable Level 2 data or unified TLB access", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2i-tlb", PERF_TYPE_RAW, 0x30,
                       "Attributable Level 2 instruction TLB access", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-remote-access", PERF_TYPE_RAW, 0x31,
                       "Attributable access to another socket in a multi-socket system", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-ll-cache", PERF_TYPE_RAW, 0x32,
                       "Attributable Last Level data cache access", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-ll-cache-miss", PERF_TYPE_RAW, 0x33,
                       "Attributable Last level data or unified cache miss", "arm")
EVENT_TYPE_TABLE_ENTRY(
    "raw-dtlb-walk", PERF_TYPE_RAW, 0x34,
    "Attributable data or unified TLB access with at least one translation table walk", "arm")
EVENT_TYPE_TABLE_ENTRY(
    "raw-itlb-walk", PERF_TYPE_RAW, 0x35,
    "Attributable instruction TLB access with at least one translation table walk", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-ll-cache-rd", PERF_TYPE_RAW, 0x36,
                       "Attributable Last Level cache memory read", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-ll-cache-miss-rd", PERF_TYPE_RAW, 0x37,
                       "Attributable Last Level cache memory read miss", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-remote-access-rd", PERF_TYPE_RAW, 0x38,
                       "Attributable memory read access to another socket in a multi-socket system",
                       "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1d-cache-lmiss-rd", PERF_TYPE_RAW, 0x39,
                       "Level 1 data cache long-latency read miss", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-op-retired", PERF_TYPE_RAW, 0x3a,
                       "Micro-operation architecturally executed", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-op-spec", PERF_TYPE_RAW, 0x3b, "Micro-operation Speculatively executed",
                       "arm")
EVENT_TYPE_TABLE_ENTRY("raw-stall", PERF_TYPE_RAW, 0x3c, "No operation sent for execution", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-stall-slot-backend", PERF_TYPE_RAW, 0x3d,
                       "No operation sent for execution on a Slot due to the backend", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-stall-slot-frontend", PERF_TYPE_RAW, 0x3e,
                       "No operation send for execution on a Slot due to the frontend", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-stall-slot", PERF_TYPE_RAW, 0x3f,
                       "No operation sent for execution on a Slot", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1d-cache-rd", PERF_TYPE_RAW, 0x40, "Level 1 data cache read", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-sample-pop", PERF_TYPE_RAW, 0x4000, "Sample Population", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-sample-feed", PERF_TYPE_RAW, 0x4001, "Sample Taken", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-sample-filtrate", PERF_TYPE_RAW, 0x4002,
                       "Sample Taken and not removed by filtering", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-sample-collision", PERF_TYPE_RAW, 0x4003,
                       "Sample collided with previous sample", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-cnt-cycles", PERF_TYPE_RAW, 0x4004, "Constant frequency cycles", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-stall-backend-mem", PERF_TYPE_RAW, 0x4005, "Memory stall cycles", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1i-cache-lmiss", PERF_TYPE_RAW, 0x4006,
                       "Level 1 instruction cache long-latency miss", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2d-cache-lmiss-rd", PERF_TYPE_RAW, 0x4009,
                       "Level 2 data cache long-latency read miss", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2i-cache-lmiss", PERF_TYPE_RAW, 0x400a,
                       "Level 2 instruction cache long-latency miss", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l3d-cache-lmiss-rd", PERF_TYPE_RAW, 0x400b,
                       "Level 3 data cache long-latency read miss", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-sve-inst-retired", PERF_TYPE_RAW, 0x8002,
                       "SVE Instructions architecturally executed", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-sve-inst-spec", PERF_TYPE_RAW, 0x8006,
                       "SVE Instructions speculatively executed", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1d-cache-wr", PERF_TYPE_RAW, 0x41,
                       "Attributable Level 1 data cache access, write", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1d-cache-refill-rd", PERF_TYPE_RAW, 0x42,
                       "Attributable Level 1 data cache refill, read", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1d-cache-refill-wr", PERF_TYPE_RAW, 0x43,
                       "Attributable Level 1 data cache refill, write", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1d-cache-refill-inner", PERF_TYPE_RAW, 0x44,
                       "Attributable Level 1 data cache refill, inner", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1d-cache-refill-outer", PERF_TYPE_RAW, 0x45,
                       "Attributable Level 1 data cache refill, outer", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1d-cache-wb-victim", PERF_TYPE_RAW, 0x46,
                       "Attributable Level 1 data cache Write-Back, victim", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1d-cache-wb-clean", PERF_TYPE_RAW, 0x47,
                       "Level 1 data cache Write-Back, cleaning and coherency", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1d-cache-inval", PERF_TYPE_RAW, 0x48,
                       "Attributable Level 1 data cache invalidate", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1d-tlb-refill-rd", PERF_TYPE_RAW, 0x4c,
                       "Attributable Level 1 data TLB refill, read", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1d-tlb-refill-wr", PERF_TYPE_RAW, 0x4d,
                       "Attributable Level 1 data TLB refill, write", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1d-tlb-rd", PERF_TYPE_RAW, 0x4e,
                       "Attributable Level 1 data or unified TLB access, read", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l1d-tlb-wr", PERF_TYPE_RAW, 0x4f,
                       "Attributable Level 1 data or unified TLB access, write", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2d-cache-rd", PERF_TYPE_RAW, 0x50,
                       "Attributable Level 2 data cache access, read", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2d-cache-wr", PERF_TYPE_RAW, 0x51,
                       "Attributable Level 2 data cache access, write", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2d-cache-refill-rd", PERF_TYPE_RAW, 0x52,
                       "Attributable Level 2 data cache refill, read", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2d-cache-refill-wr", PERF_TYPE_RAW, 0x53,
                       "Attributable Level 2 data cache refill, write", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2d-cache-wb-victim", PERF_TYPE_RAW, 0x56,
                       "Attributable Level 2 data cache Write-Back, victim", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2d-cache-wb-clean", PERF_TYPE_RAW, 0x57,
                       "Level 2 data cache Write-Back, cleaning and coherency", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2d-cache-inval", PERF_TYPE_RAW, 0x58,
                       "Attributable Level 2 data cache invalidate", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2d-tlb-refill-rd", PERF_TYPE_RAW, 0x5c,
                       "Attributable Level 2 data or unified TLB refill, read", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2d-tlb-refill-wr", PERF_TYPE_RAW, 0x5d,
                       "Attributable Level 2 data or unified TLB refill, write", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2d-tlb-rd", PERF_TYPE_RAW, 0x5e,
                       "Attributable Level 2 data or unified TLB access, read", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l2d-tlb-wr", PERF_TYPE_RAW, 0x5f,
                       "Attributable Level 2 data or unified TLB access, write", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-bus-access-rd", PERF_TYPE_RAW, 0x60, "Bus access, read", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-bus-access-wr", PERF_TYPE_RAW, 0x61, "Bus access, write", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-bus-access-shared", PERF_TYPE_RAW, 0x62,
                       "Bus access, Normal, Cacheable, Shareable", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-bus-access-not-shared", PERF_TYPE_RAW, 0x63,
                       "Bus access, not Normal, Cacheable, Shareable", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-bus-access-normal", PERF_TYPE_RAW, 0x64, "Bus access, normal", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-bus-access-periph", PERF_TYPE_RAW, 0x65, "Bus access, peripheral",
                       "arm")
EVENT_TYPE_TABLE_ENTRY("raw-mem-access-rd", PERF_TYPE_RAW, 0x66, "Data memory access, read", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-mem-access-wr", PERF_TYPE_RAW, 0x67, "Data memory access, write", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-unaligned-ld-spec", PERF_TYPE_RAW, 0x68, "Unaligned access, read",
                       "arm")
EVENT_TYPE_TABLE_ENTRY("raw-unaligned-st-spec", PERF_TYPE_RAW, 0x69, "Unaligned access, write",
                       "arm")
EVENT_TYPE_TABLE_ENTRY("raw-unaligned-ldst-spec", PERF_TYPE_RAW, 0x6a, "Unaligned access", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-ldrex-spec", PERF_TYPE_RAW, 0x6c,
                       "Exclusive operation speculatively executed, LDREX or LDX", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-strex-pass-spec", PERF_TYPE_RAW, 0x6d,
                       "Exclusive operation speculatively executed, STREX or STX pass", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-strex-fail-spec", PERF_TYPE_RAW, 0x6e,
                       "Exclusive operation speculatively executed, STREX or STX fail", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-strex-spec", PERF_TYPE_RAW, 0x6f,
                       "Exclusive operation speculatively executed, STREX or STX", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-ld-spec", PERF_TYPE_RAW, 0x70, "Operation speculatively executed, load",
                       "arm")
EVENT_TYPE_TABLE_ENTRY("raw-st-spec", PERF_TYPE_RAW, 0x71,
                       "Operation speculatively executed, store", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-ldst-spec", PERF_TYPE_RAW, 0x72,
                       "Operation speculatively executed, load or store", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-dp-spec", PERF_TYPE_RAW, 0x73,
                       "Operation speculatively executed, integer data processing", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-ase-spec", PERF_TYPE_RAW, 0x74,
                       "Operation speculatively executed, Advanced SIMD instruction", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-vfp-spec", PERF_TYPE_RAW, 0x75,
                       "Operation speculatively executed, floating-point instruction", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-pc-write-spec", PERF_TYPE_RAW, 0x76,
                       "Operation speculatively executed, software change of the PC", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-crypto-spec", PERF_TYPE_RAW, 0x77,
                       "Operation speculatively executed, Cryptographic instruction", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-br-immed-spec", PERF_TYPE_RAW, 0x78,
                       "Branch speculatively executed, immediate branch", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-br-return-spec", PERF_TYPE_RAW, 0x79,
                       "Branch speculatively executed, procedure return", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-br-indirect-spec", PERF_TYPE_RAW, 0x7a,
                       "Branch speculatively executed, indirect branch", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-isb-spec", PERF_TYPE_RAW, 0x7c, "Barrier speculatively executed, ISB",
                       "arm")
EVENT_TYPE_TABLE_ENTRY("raw-dsb-spec", PERF_TYPE_RAW, 0x7d, "Barrier speculatively executed, DSB",
                       "arm")
EVENT_TYPE_TABLE_ENTRY("raw-dmb-spec", PERF_TYPE_RAW, 0x7e, "Barrier speculatively executed, DMB",
                       "arm")
EVENT_TYPE_TABLE_ENTRY("raw-exc-undef", PERF_TYPE_RAW, 0x81, "Exception taken, Other synchronous",
                       "arm")
EVENT_TYPE_TABLE_ENTRY("raw-exc-svc", PERF_TYPE_RAW, 0x82, "Exception taken, Supervisor Call",
                       "arm")
EVENT_TYPE_TABLE_ENTRY("raw-exc-pabort", PERF_TYPE_RAW, 0x83, "Exception taken, Instruction Abort",
                       "arm")
EVENT_TYPE_TABLE_ENTRY("raw-exc-dabort", PERF_TYPE_RAW, 0x84,
                       "Exception taken, Data Abort and SError", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-exc-irq", PERF_TYPE_RAW, 0x86, "Exception taken, IRQ", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-exc-fiq", PERF_TYPE_RAW, 0x87, "Exception taken, FIQ", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-exc-smc", PERF_TYPE_RAW, 0x88, "Exception taken, Secure Monitor Call",
                       "arm")
EVENT_TYPE_TABLE_ENTRY("raw-exc-hvc", PERF_TYPE_RAW, 0x8a, "Exception taken, Hypervisor Call",
                       "arm")
EVENT_TYPE_TABLE_ENTRY("raw-exc-trap-pabort", PERF_TYPE_RAW, 0x8b,
                       "Exception taken, Instruction Abort not Taken locallyb", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-exc-trap-dabort", PERF_TYPE_RAW, 0x8c,
                       "Exception taken, Data Abort or SError not Taken locallyb", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-exc-trap-other", PERF_TYPE_RAW, 0x8d,
                       "Exception taken, Other traps not Taken locallyb", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-exc-trap-irq", PERF_TYPE_RAW, 0x8e,
                       "Exception taken, IRQ not Taken locallyb", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-exc-trap-fiq", PERF_TYPE_RAW, 0x8f,
                       "Exception taken, FIQ not Taken locallyb", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-rc-ld-spec", PERF_TYPE_RAW, 0x90,
                       "Release consistency operation speculatively executed, Load-Acquire", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-rc-st-spec", PERF_TYPE_RAW, 0x91,
                       "Release consistency operation speculatively executed, Store-Release", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l3d-cache-rd", PERF_TYPE_RAW, 0xa0,
                       "Attributable Level 3 data or unified cache access, read", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l3d-cache-wr", PERF_TYPE_RAW, 0xa1,
                       "Attributable Level 3 data or unified cache access, write", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l3d-cache-refill-rd", PERF_TYPE_RAW, 0xa2,
                       "Attributable Level 3 data or unified cache refill, read", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l3d-cache-refill-wr", PERF_TYPE_RAW, 0xa3,
                       "Attributable Level 3 data or unified cache refill, write", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l3d-cache-wb-victim", PERF_TYPE_RAW, 0xa6,
                       "Attributable Level 3 data or unified cache Write-Back, victim", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l3d-cache-wb-clean", PERF_TYPE_RAW, 0xa7,
                       "Attributable Level 3 data or unified cache Write-Back, cache clean", "arm")
EVENT_TYPE_TABLE_ENTRY("raw-l3d-cache-inval", PERF_TYPE_RAW, 0xa8,
                       "Attributable Level 3 data or unified cache access, invalidate", "arm")
