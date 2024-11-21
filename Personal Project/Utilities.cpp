#include "Utilities.h"
#include <cstdlib>

int getRandomNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}
