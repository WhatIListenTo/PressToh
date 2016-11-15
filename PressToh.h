#include <string>
#include <iostream>

using namespace std;

#ifndef PRESSTOH_H
#define PRESSTOH_H

class PressToh {
protected:
    string presstoh_key;
public:
    int ctoi(char c)
    {
        return c - '0';
    }
    bool map_key(string& output);
    bool unmap_key(string output, string& result);
    string set_key(string key) {
        presstoh_key = key;
        return presstoh_key;
    }
    string get_key() { return presstoh_key; }
};
#endif
