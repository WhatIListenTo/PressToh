#include "PressToh.h"

bool PressToh::map_key(string& output)
{
    for (char i: presstoh_key)
    {
        int last_sum;
        char last_shift = 'L';

        try {

            switch (last_shift)
            {
                case 'L':
                    output += (char)(int)i + 1;
                    last_shift = 'R';
                    break;

                case 'R':
                    output += (char)(int)i - 1;
                    last_shift = 'L';
                    break;
            };

        } catch(...) {
            return false;
        }
    }

    return true;
}

bool PressToh::unmap_key(string key, string& result)
    for (char i: key)
    {
        char last_shift = 'R';

        try {

            switch (last_shift)
            {
                case 'L':
                    result += (char)(int)i + 1;
                    last_shift = 'R';
                    break;

                case 'R':
                    result += (char)(int)i - 1;
                    last_shift = 'L';
                    break;
            };

        } catch(...) { 
            return false;
        }
    }
    return true;
}
