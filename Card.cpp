#include "Card.h"

Card::Card(Suits suit, Ranks rank) {
    this->suit = suit;
    this->rank = rank;
}

Card::~Card() {
    // destructor
}

Card::Ranks Card::getRank() {
    return this->rank;
}

Card::Suits Card::getSuit() {
    return this->suit;
}

int Card::getFaceValue() {
    if(this->rank <= TEN) {
        return static_cast<int>(this->rank);
    }else if(this->rank <= KING) {
        return 10;
    }

    return 11;
}
