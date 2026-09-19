#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <memory>
#include "cipherEng.hpp"
#include "xorCipher.hpp"
using namespace std;

int print(const std::vector<uint8_t>& text){
    for (uint8_t t :text){
        std::cout << std::hex     << std::setw(2)    << std::setfill('0')        << int(t) << " ";
        //       set stream to hex   set width to 2     fill empty space with 0
    }
    std::cout << std::dec <<std::endl; //reset stream to decimal
    return 0;
}

int main(int argc, char* argv[]) {
    string key = "thisthekey";
    string msg = "imma go to the gym";
    XorCipher engine;

    cout << "Original message: " << endl;
    cout << msg << endl;
    cout << "Key: " << endl;
    cout << key << endl;

    //get the message into raw bytes
    vector<uint8_t> bytes(msg.begin(), msg.end());

    //encrypt using key and then print
    cout << "Encrypted bytes: " << endl;
    vector<uint8_t> cipher = engine.encrypt(bytes, key);
    print(cipher);

    //decrypt reusing key and then print
    cout << "Decrypted via same key: " << endl;
    vector<uint8_t> result = engine.decrypt(cipher, key);
    print(result);

    //convert result bytes into human readable text
    cout << "Decrypted text: " << endl;
    string resultText(result.begin(), result.end());
    cout << resultText << endl;


    return 0; 
}