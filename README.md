# lab3HorseRacev2

## Algorithm

```
#Includes <>
cstdlib
iostream
random

#Prototypes
void advance(int horseNum, int* horseList)
void printLane(int horseNum, int* horseList)
bool isWinner(int horseNum, int* horseList)

#Values
bool keepGoing = True
const MAXRACERS = 5
const TRACKLENGTH = 15
int horseTravel[] = {0, 0, 0, 0, 0}
seed random number
set uniform\_int\_distribution\<int> dist(0,1);


#Functions
int Main()
  while(keepGoing)
    s = 0
    for(s, s < MAXRACERS, s++)
      advance(s, horseTravel[s])
      printLane(s, horseTravel[s])
      if(isWinner(s, horseTravel[s]))
        keepGoing = False
    cout << "Press enter for another turn"
    cin.ignore()

void advance(int horseNum, int horseDistanceArray[])
  coin = dist(rd);
  \*horseDistanceArray[horseNum] += coin;

void printLane(int horseNum, int horseDistanceArray[])
  int t = 0
  for(t, t < TRACKLENGTH, t++)
    if(\*t == \*horseDistanceArray[horseNum])
      print("%d", horseNum")
    else
      print(".")

bool isWinner(int horseNum, int horseDistanceArray[])
  if(\*horseDistanceArray[horseNum] >= TRACKLENGTH)
    return(true)
```
