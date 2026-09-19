#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <memory>
#include "XorCipher.hpp"
using namespace std;

int print(const std::vector<uint8_t>& text){
    for (uint8_t t :text){
        std::cout << std::hex     << std::setw(2)    << std::setfill('0')        << int(t) << " ";
        //       set stream to hex   set width to 2     fill empty space with 0
    }
    std::cout << std::dec <<std::endl; //reset stream to decimal
}

int main(int argc, char* argv[]) {
    
    return 0; 
}