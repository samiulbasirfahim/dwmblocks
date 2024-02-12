#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
    {"$HOME/.suckless/dwmblocks/scripts/vpn", 5,  7},
    {"$HOME/.suckless/dwmblocks/scripts/network", 5,  7},
    {"$HOME/.suckless/dwmblocks/scripts/volume", 1,  10},
    {"$HOME/.suckless/dwmblocks/scripts/mic",    1,  10},
    {"$HOME/.suckless/dwmblocks/scripts/memory", 3,  10},
    {"$HOME/.suckless/dwmblocks/scripts/cpu",    3,  10},
    {"$HOME/.suckless/dwmblocks/scripts/date",   15, 10},
};

const unsigned short blockCount = LEN(blocks);
