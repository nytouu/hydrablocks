#define CMDLENGTH 100
#define delimiter "  "

static const Block blocks[] = {
/*  command             interval    signal */
    {"bar-record",      0,          9},
    {"bar-song", 		1,          11},
    {"bar-kb",      	0,          8},
	{"bar-volume",      0,          10},
	{"bar-bluetooth",   0,          15},
	{"bar-internet",    10,         4},
	{"bar-clock",       60,         1},
    {"bar-power",       0,          26},
};
