#include"class.h"

Player:: Player()
{
    level = 1; 
    TN = 100; 
    NL = 100; 
}

Player:: Player(int level, float TN, float NL)
{
    this->level = level; 
    this->TN = TN; 
    this->NL = NL; 
}

void Player:: PTTN(CayTrong *cay)
{
    if(NL > 0)
    {
        cay->giamThoiGian();
        NL -= 1; 
    }
    else 
        cout << "Nguoi choi khong con nang luong\n";
    
}

void Player::PTTH(CayTrong* cay)
{
    if (cay && cay->getX() >= 0 && cay->getY() >= 0) {
        this->TN += cay->getSP();
        cay->xoaViTri(cay->getX(), cay->getY());
    } else {
        cout << "Vi tri cua cay khong hop le.\n";
    }
}

int Player::getLevel()
{
    return level; 
}
