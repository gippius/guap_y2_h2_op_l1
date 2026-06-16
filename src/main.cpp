#include "chess_cell.hpp"

#include <iostream>

int main() {
    ChessCell first;
    first.setX(1);
    first.setY(1);

    ChessCell second;
    second.setX(4);
    second.setY(7);

    ChessCell third;
    third.setX(9);
    third.setY(2);

    std::cout << "Lab 1, variant 4\n";
    std::cout << first.describe() << '\n';
    std::cout << second.describe() << '\n';
    std::cout << third.describe() << '\n';

    return 0;
}

