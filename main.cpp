#include "tetris.hpp"

int main( int argc , char **argv ){
  std::srand( std::time( 0 ) );
  auto tetris = std::make_shared<Tetris>();
  tetris->run();
  return 0;
}

