#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
  // {"bplayerctl",    0,  1 },
  // {"bplayerctl-previous", 1,    2 },
  // {"bplayerctl-play", 1,    3 },
  // {"bplayerctl-next", 1,    4 },
  // {"bupdate", 1800,    5 },
  // {"bmic",   0,    4 },
  // {"bvolume",   0,    6 },
  // {"bbattery",    60, 8 },
  // {"bnetwork",  10,   7 },
  // {"$HOME/.suckless/dwmblocks/scripts/network", 5,  10},
    {"$HOME/.suckless/dwmblocks/scripts/volume", 1,  10},
    {"$HOME/.suckless/dwmblocks/scripts/memory", 1,  10},
    {"$HOME/.suckless/dwmblocks/scripts/cpu",    1,  10},
    {"$HOME/.suckless/dwmblocks/scripts/date",   15, 10},
};

const unsigned short blockCount = LEN(blocks);
