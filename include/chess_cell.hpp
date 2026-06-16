#pragma once

#include <string>

class ChessCell {
public:
    void setX(int x);
    void setY(int y);

    int getX() const;
    int getY() const;

    bool isInsideBoard() const;
    bool isWhite() const;
    std::string describe() const;

private:
    int x_ = 0;
    int y_ = 0;
};

