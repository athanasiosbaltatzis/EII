#pragma once
#include <string>

class Caesar
{
private:
    int key;

public:
    Caesar(int key);
    std::string encode(std::string input);
    std::string decode(std::string input);
};
