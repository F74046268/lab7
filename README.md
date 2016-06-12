g++ -c MinoI.cpp
g++ -c MinoJ.cpp
g++ -c MinoS.cpp
g++ -c MinoO.cpp
g++ -c MinoL.cpp
g++ -c Mino.cpp
g++ -c tetris5.cpp
g++ -c genMino.cpp
g++ -o tetris5 tetris5.o genMino.o Mino.o MinoL.o MinoJ.o MinoI.o MinoO.o MinoS.o
