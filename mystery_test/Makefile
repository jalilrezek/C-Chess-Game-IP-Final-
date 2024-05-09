CC = g++
CONSERVATIVE_FLAGS = -std=c++11 -Wall -Wextra -pedantic
DEBUGGING_FLAGS = -g -O0
CFLAGS = $(CONSERVATIVE_FLAGS) $(DEBUGGING_FLAGS)
INCLUDE_DIRS = -IException_Classes -IPiece_Classes
vpath %.h Exception_Classes:Piece_Classes
vpath %.cpp Exception_Classes:Piece_Classes

chess: main.o Board.o Game.o CreatePiece.o Bishop.o King.o Knight.o Pawn.o Queen.o Rook.o
	$(CC) -o $@ $^ $(INCLUDE_DIRS) $(CFLAGS)

Board.o: Board.cpp Piece.h Pawn.h Rook.h Knight.h Bishop.h Queen.h King.h Mystery.h CreatePiece.h Terminal.h
	$(CC) -c $< -o $@ $(INCLUDE_DIRS) $(CFLAGS)

Game.o: Game.cpp Board.h Game.h Piece.h
	$(CC) -c $< -o $@ $(INCLUDE_DIRS) $(CFLAGS)

CreatePiece.o: CreatePiece.cpp Board.h Game.h Piece.h Pawn.h Rook.h Knight.h Bishop.h Queen.h King.h Mystery.h 
	$(CC) -c $< -o $ $@ $(INCLUDE_DIRS) $(CFLAGS)

Bishop.o: Bishop.cpp Bishop.h Piece.h
	$(CC) -c $< -o $@ $(INCLUDE_DIRS) $(CFLAGS)

King.o: King.cpp King.h Piece.h
	$(CC) -c $< -o $@ $(INCLUDE_DIRS) $(CFLAGS)

Knight.o: Knight.cpp Knight.h Piece.h
	$(CC) -c $< -o $@ $(INCLUDE_DIRS) $(CFLAGS)

Pawn.o: Pawn.cpp Pawn.h Piece.h
	$(CC) -c $< -o $@ $(INCLUDE_DIRS) $(CFLAGS)

Queen.o: Queen.cpp Queen.h Piece.h
	$(CC) -c $< -o $@ $(INCLUDE_DIRS) $(CFLAGS)

Rook.o: Rook.cpp Rook.h Piece.h
	$(CC) -c $< -o $@ $(INCLUDE_DIRS) $(CFLAGS)

main.o: main.cpp Board.h Game.h Piece.h Pawn.h Rook.h Knight.h Bishop.h Queen.h King.h Mystery.h 
	$(CC) -c $< -o $@ $(INCLUDE_DIRS) $(CFLAGS)

.PHONY: clean
clean:
	rm -f *.o chess

