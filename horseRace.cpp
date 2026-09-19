#include <cstdlib>
#include <random>
#include <iostream>

bool keepGoing = true;
int horseTravel[5] = {0,0,0,0,0};
const int MAXRACERS = 5;
const int TRACKLENGTH = 15;

void advance(int horseNum, int* horseTravel);
void printLane(int horseNum, int* horseTravel);
bool isWinner(int horseNum, int* horseTravel);
std::random_device rd;
std::uniform_int_distribution<int> dist(0,1);


int main(){
  while(keepGoing){
    int s=0;
    for(s;s<MAXRACERS;s++){
      advance(s,horseTravel);
      printLane(s,horseTravel);
      if(isWinner(s,horseTravel)){
        keepGoing = false;
      }//end if
    }//end for
    std::cout << "Press enter for another turn" << std::endl;
    std::cin.ignore();
  }//end while
  return(0);
}//end main


void advance(int horseNum, int horseArray[]){
  int coin = dist(rd);
  horseArray[horseNum] += coin;
}//end advance

void printLane(int horseNum, int horseArray[]){
  int t = 0;
  for(t; t<TRACKLENGTH; t++){
    if(t == horseArray[horseNum]){
      std::cout << horseNum;
    }//end if
    else{
      std::cout << ".";
    }//end else
  }//end for
  std::cout << std::endl;
}//end printLane

bool isWinner(int horseNum, int horseArray[]){
  if(horseArray[horseNum] >= TRACKLENGTH){
    std::cout << horseNum << " has crossed the finish line!" << std::endl;
    return(1);
  }//end if
  return(0);
}//end isWinner
