#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
    {"~/.suckless/dwmblocks/scripts/weather.sh",   60,  0},
    {"~/.suckless/dwmblocks/scripts/memory", 3, 0},
    {"~/.suckless/dwmblocks/scripts/cpu", 3, 0},
    {"~/.suckless/dwmblocks/scripts/date", 60, 0},
};

const unsigned short blockCount = LEN(blocks);
