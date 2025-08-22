#define WARMUP 1000
#define UNROLL 8 // automatically *8
#define LOOP 512
#define RUNS 32

// processor specific configs
//               m8  m4  m2  m1  mf2 mf4 mf8
//          SEW: 6310    6310    6310    6310
//               4268... 4268... 4268... 4268...
#define T_A    0b0000000000000000000000000000 // all
#define T_W    0b0000000000000000000000000000 // widen
#define T_WR   0b0000000000000000000000000000 // widen reduction
#define T_N    0b0000000000000000000000000000 // narrow
#define T_F    0b0000000000000000000000000000 // float
#define T_FW   0b0000000000000000000000000000 // float widen
#define T_FWR  0b0000000000000000000000000000 // float widen reduction
#define T_FN   0b0000000000000000000000000000 // float narrow

#define T_E2   0b0000000000000000000000000000 // extend 2
#define T_E4   0b0000000000000000000000000000 // extend 4
#define T_E8   0b0000000000000000000000000000 // extend 8
#define T_ei16 0b0000000000000000000000000000 // no m8

// special:
#define T_m1 ((1 << 28) | T_A) // emul<=1
