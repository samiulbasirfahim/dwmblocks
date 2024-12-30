#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
    /* {"$HOME/.suckless/dwmblocks/scripts/vpn", 5, 4}, */
    /* {"$HOME/.suckless/dwmblocks/scripts/network", 5, 3}, */
    /* {"$HOME/.suckless/dwmblocks/scripts/volume", 1, 2}, */
    {"$HOME/.suckless/dwmblocks/scripts/weather.sh",   60,  0},
    /* {"$HOME/.suckless/dwmblocks/scripts/volume_mic",    3,  0}, */
    {"$HOME/.suckless/dwmblocks/scripts/memory", 3, 0},
    {"$HOME/.suckless/dwmblocks/scripts/cpu", 3, 0},
    {"$HOME/.suckless/dwmblocks/scripts/date", 60, 0},
};

const unsigned short blockCount = LEN(blocks);
