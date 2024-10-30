#ifndef CARD_HPP
#define CARD_HPP
#include <vector>
#include <iostream>
#include <cstdlib>
namespace CardGame {//������������ ���� 
	enum Suit {//����� ������������� ��������, ������������
		clubs= 0, diamonds = 1, hards = 2, spikes = 3//�����


	};

	enum Ranks {
		two = 2,
		three = 3,
		four = 4,
		five = 5,
		sizx = 6,
		seven = 7,
		eigth = 8,
		nine = 9,
		ten = 10,
		jack = 10,
		queen = 10,
		king = 10, 
		ace=10
	};

	class Card {
	public:
		Card() = default;
		Card(Ranks rank, Suit suit):value_(rank),suit_(suit){}

		Suit GetSuit()const;
		Ranks getValue()const;



	private:
		Ranks value_;//��������
		Suit suit_;//�����


	};


}


#endif //CARD_HPP