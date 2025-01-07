#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
    {"_dwmbar_weather",   60,  0},
    {"_dwmbar_memory", 3, 0},
    {"_dwmbar_cpu", 3, 0},
    {"_dwmbar_date", 60, 0},
};

const unsigned short blockCount = LEN(blocks);
