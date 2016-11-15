#include "PressToh.h"

bool PressToh::map_key(int& output)
{
    for (char i: presstoh_key)
    {
        try {
            output += ctoi(i);
        } catch(...) {
            std::cout << "Something went wrong!" << std::endl;
            return false;
        }
    }
    return true;
}
