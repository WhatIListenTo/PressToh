#include "PressToh.h"

void PressToh::map_key()
{
    for (char i: presstoh_key)
    {
        int tmp;
        try {
            tmp = ctoi(i);
            std::cout << tmp << std::endl;
        } catch(...) {
            std::cout << "Something went wrong!" << std::endl;
        }
    }
}
