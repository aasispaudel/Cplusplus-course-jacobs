#ifndef HOUSE_H_
#define HOUSE_H_

#include <iostream>
#include "GenericPlayer.h"


class House : public GenericPlayer
{
public:
    House(const std::string& name = "House");

    virtual ~House();

    //indicates whether house is hitting - will always hit on 16 or less
    virtual bool IsHitting() const;

    //flips over first card
    void FlipFirstCard();
};


#endif