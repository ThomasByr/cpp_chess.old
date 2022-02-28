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

    ofImage img;  // image of the piece
    double value; // value of the piece (used for AI), is susceptible to change
    int i, j;     // position of the piece on the board

  protected:
    PieceType type;
    PieceColor color;
};
