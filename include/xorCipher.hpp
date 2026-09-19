#ifndef XOR_CIPHER_HPP
#define XOR_CIPHER_HPP

#include "cipherEng.hpp"

class XorCipher : public CipherEngine {
public:
    std::vector<uint8_t> encrypt(const std::vector<uint8_t>& plaintext, const std::string& key) override;
    std::vector<uint8_t> decrypt(const std::vector<uint8_t>& ciphertext, const std::string& key) override;
};

#endif
