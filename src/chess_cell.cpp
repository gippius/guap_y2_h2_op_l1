#include "chess_cell.hpp"

#include <sstream>

void ChessCell::setX(int x) {
    x_ = x;
}

void ChessCell::setY(int y) {
    y_ = y;
}

int ChessCell::getX() const {
    return x_;
}

int ChessCell::getY() const {
    return y_;
}

bool ChessCell::isInsideBoard() const {
    return x_ >= 1 && x_ <= 8 && y_ >= 1 && y_ <= 8;
}

bool ChessCell::isWhite() const {
    return isInsideBoard() && ((x_ + y_) % 2 != 0);
}

std::string ChessCell::describe() const {
    std::ostringstream output;
    output << "Cell (" << x_ << ", " << y_ << ")";

    if (!isInsideBoard()) {
        output << " is outside the chessboard.";
        return output.str();
    }

    output << " is " << (isWhite() ? "white" : "black") << '.';
    return output.str();
}

