#include "Deck.h"
#include <iostream>

using namespace std;

int main() {
    Deck d;
    d.printDeck();
    d.shuffleDeck();
    d.printDeck();
    return 0;
}
