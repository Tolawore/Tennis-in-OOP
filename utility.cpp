#include "Utility.h"
#include <cstdlib>
#include <ctime>

void initializeRandomness() {
    static bool initialized = false;
    if (!initialized) {
        std::srand(static_cast<unsigned int>(std::time(0)));
        initialized = true;
    }
}

int randomBetween(int low, int high) {
    return std::rand() % (high - low + 1) + low;
}
