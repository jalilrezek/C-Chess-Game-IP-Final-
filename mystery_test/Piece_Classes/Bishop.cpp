#include "Bishop.h"

namespace Chess
{
  bool Bishop::legal_move_shape(const Position& start, const Position& end) const {
    //if the end position is the same as the start position, return false
    if (end.first == start.first || end.second == start.second){
      return false;
    }
    //if the bishop is moving diagonally, the difference between 
    if ((end.first - start.first == end.second - start.second) || (end.first - start.first == -1*(end.second - start.second) )){
      return true;
    }
    return false;
  }
}
