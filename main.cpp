#include <stdio.h>
#include <iostream>
#include "PressToh.h"

using namespace std;

int main()
{
    PressToh hexCipher;
    int hold_me;
    hexCipher.map_key(hold_me);
    cout << hold_me << endl;
    return 0;
}
