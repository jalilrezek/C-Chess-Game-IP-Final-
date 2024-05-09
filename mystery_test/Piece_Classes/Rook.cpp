#include "Rook.h"

namespace Chess
{
  bool Rook::legal_move_shape(const Position& start, const Position& end) const {
    /////////////////////////
    // [REPLACE THIS STUB] //
    /////////////////////////

    return (start.first != end.first && start.second == end.second) || (start.first == end.first && start.second != end.second);
  }
}