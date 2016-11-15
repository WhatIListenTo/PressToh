#include <stdio.h>
#include <iostream>
#include "PressToh.h"

using namespace std;

int main(int argc, char* argv[])
{
    PressToh hexCipher;
    hexCipher.set_key(argv[1]);

    string hold_me;
    string unmap_result;

    hexCipher.map_key(hold_me);
    
    cout << hold_me << endl;
    
    hexCipher.unmap_key(hold_me, unmap_result);
    
    cout << unmap_result << endl;
    
    return 0;
}
