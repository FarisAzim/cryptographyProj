#ifndef CIPHER_ENGINE_HPP
#define CIPHER_ENGINE_HPP

#include <vector>
#include <string>
#include <cstdint>

class CipherEngine {
public:
    virtual ~CipherEngine() = default;

    // encrypt raw bytes using key, returns raw encrypted bytes
    virtual std::vector<uint8_t> encrypt(const std::vector<uint8_t>& plaintext, const std::string& key) = 0;

    // decrypt raw encrypted bytes usingkey, returns raw decrypted bytes
    virtual std::vector<uint8_t> decrypt(const std::vector<uint8_t>& ciphertext, const std::string& key) = 0;
};

#endif
