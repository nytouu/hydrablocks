#define CMDLENGTH 50
#define delimiter " |"

static const Block blocks[] = {
/*  command             interval    signal */
    {"getscrolltext",   1,          11},
    {"keeblayout",      0,          8},
	{"volume",          0,          10},
	{"blocksbluegui",   0,          15},
	{"internet",        10,         4},
	{"clock",           60,         1},
};
