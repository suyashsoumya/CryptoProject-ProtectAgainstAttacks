#ifndef _BLOCKCHAIN_H
#define _BLOCKCHAIN_H

#include <vector>
#include "Block.h"

class Blockchain{
private:
    vector<Block> blockchain;

public:
    Blockchain();
    vector<Block> getBlockchain();
    Block getLastBlock();
    bool isBlockchainValid();
    void addBlock(string data, time_t timestamp);
    void displayBlockchain();

};

#endif 