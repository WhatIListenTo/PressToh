#include <string>
#include <iostream>

using namespace std;

#ifndef PRESSTOH_H
#define PRESSTOH_H

class PressToh {
protected:
    string presstoh_key = "hexpresso";
public:
    int ctoi(char c)
    {
        return c - '0';
    }
    void map_key();
};
#endif
