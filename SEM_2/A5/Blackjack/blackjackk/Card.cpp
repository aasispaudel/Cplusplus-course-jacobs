#include "Card.h"

Card::Card(rank r, suit s, bool ifu):  m_Rank(r), m_Suit(s), m_IsFaceUp(ifu)
{} 

int Card::GetValue() const
{
	int value = 0;

	// to be filled with content

	return value;
}

void Card::Flip()
{
    m_IsFaceUp = !(m_IsFaceUp);
}