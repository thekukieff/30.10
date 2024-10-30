#ifndef DECK_HPP
#define DECK_HPP

#include "Card.hpp"

namespace CardGame {

	class Deck {
	public:
		void SetDeck();




		std::vector <CardGame::Card> deck;
	private:
		int size_deck_ = 52;


	};
}

#endif //Desk_HPP