#include "Hand.hpp"

namespace CardGame {
	void Hand::DealTheCards()
	{
		for (int i = 0; i < 2; i++)
		{
			int card_ = rand() % 52;
			hand_.emplace_back(card_);
			Deck::deck.erase(card_);


		}
	}
}