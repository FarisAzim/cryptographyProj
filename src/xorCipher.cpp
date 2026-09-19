#include "xorCipher.hpp"

std::vector<uint8_t> XorCipher::encrypt(const std::vector<uint8_t>& plaintext, const std::string& key) {
    if (plaintext.empty()){
        return plaintext;
    }

    //create cipher vector with size of plaintext predefined
    std::vector<uint8_t> cipher(plaintext.size());

    for (size_t i = 0; i< plaintext.size(); i++){
        cipher[i] = plaintext[i] ^ key[i%key.size()];
    }
    return cipher;
}

std::vector<uint8_t> XorCipher::decrypt(const std::vector<uint8_t>& plaintext, const std::string& key) {
    return encrypt(plaintext, key);
}