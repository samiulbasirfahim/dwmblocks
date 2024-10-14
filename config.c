#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
  // {"$HOME/.suckless/dwmblocks/scripts/vpn",     5,  4},
  // {"$HOME/.suckless/dwmblocks/scripts/network", 5,  3},
    // {"$HOME/.suckless/dwmblocks/scripts/volume", 1,  2},
    // {"$HOME/.suckless/dwmblocks/scripts/mic",    1,  1},
    {"$HOME/.suckless/dwmblocks/scripts/volume_mic",    3,  0},
    {"$HOME/.suckless/dwmblocks/scripts/memory_cpu",    3,  0},
    {"$HOME/.suckless/dwmblocks/scripts/date",   30, 0},
};

const unsigned short blockCount = LEN(blocks);
