#ifndef HAND_HPP
#define HAND_HPP
#include "Card.hpp"
#include "Deck.hpp"
namespace CardGame {

	class Hand {
	public:
		void DealTheCards();


	private:
		std::vector <Card> hand_;

	};
}

#endif //Desk_HPP