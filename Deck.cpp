#include "Deck.hpp"

void CardGame::Deck::SetDeck()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 2; j < 15; j++)
		{
			std::cout << CardGame::Ranks(j)<<" " << CardGame::Suit(i) <<std::endl;
			deck.emplace_back(CardGame::Ranks(j), CardGame::Suit(i));

		}
	}




}
