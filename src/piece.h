#pragma once

#include "ofMain.h"

enum PieceType { PAWN, ROOK, KNIGHT, BISHOP, QUEEN, KING };

enum PieceColor { WHITE, BLACK };

class Piece {
  public:
    Piece(PieceType type, PieceColor color);
    PieceType get_type();
    PieceColor get_color();
    void draw();

    bool is_valid_move(int x, int y);
    bool move_to(int x, int y);

    string to_string();
    string to_ascii_icon();

    ofImage img;  // image of the piece
    double value; // value of the piece (used for AI), is susceptible to change
    int i, j;     // position of the piece on the board

  protected:
    PieceType type;
    PieceColor color;
};
