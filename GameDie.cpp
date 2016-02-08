#include <iostream>
#include <cstdlib>
#include<Math.h>
#include "GameDie.h"

//class constructor that seeds the random number generator
GameDie::GameDie()
{

}

//generate a random number between 1-6 (inclusive) and display it
void GameDie::roll()
{
  srand(time(NULL));
  int r=rand()%17+4;
  printf("The random number generated is:%d\n",r);
}

int main()
{
  GameDie gd;
  gd.roll();
}