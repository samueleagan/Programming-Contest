#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

typedef struct coordinate {
  int x, y;
  char coordLetter;
} coordinate;

int checkString (char string[], coordinate coord[], int length);
int checkValidMove (int x1, int y1, int x2, int y2);

int main(void) {
  const char testString[10] = "ICPCASIASG";

  int sizeOfString;
  scanf("%d\n", &sizeOfString);

  char inputString[sizeOfString * sizeOfString];
  scanf("%s", inputString);

  size_t stringLength = strlen(inputString);

  coordinate stringCoords[stringLength];
  int counter = 0;
  for (int i = 1; i <= sizeOfString; i++) {
    for (int j = 0; j < sizeOfString; j++) {
      stringCoords[j + counter].x = i;
      stringCoords[j + counter].y = j+1;
      stringCoords[j + counter].coordLetter = inputString[j + counter];
    }
    counter += 5;
  }

  if (stringLength < 9){ // Using 9 since a 3x3 board is of size 9, and that is the smallest size "board" that we are able to have
    puts("NO");          // to be able to fit her favorite string
  }

  else {
    int test = checkString(inputString, stringCoords, stringLength);
    if (test == 1) {
      puts("YES");
    }
    else {
      puts("NO");
    }
  }
  return 0;
}

// This probably doesn't need to be done recursively, but I want to do it that way cause bleh
int checkString (char string[], coordinate coord[], int length) { // Need to use this
                                                                  // to iterate through the input string
  int fixedLength = length;
  char finishedString[100];
  if (string[fixedLength - length] == coord[length].coordLetter) {
    finishedString[fixedLength - length] = coord[fixedLength - length].coordLetter;
    puts("yeah");
    if (strcmp(finishedString,string) == 0) {
      puts("yeah i guess");
      return 1;
    }
  }
  // Still getting an infinite loop, need to fix exit statement
  return checkString(string, coord, length - 1);
}

int checkValidMove (int x1, int y1, int x2, int y2) {
  coordinate firstCoordinate = {x1,y1};
  coordinate secondCoordinate = {x2,y2};
  int isTrue;
  int test = (pow((firstCoordinate.x - secondCoordinate.x), 2) + pow((firstCoordinate.y - secondCoordinate.y), 2));
  if (test == 5) {
    return 1;
  }
  else {
    return 0;
  }
}

/*
   Check for a valid move:
   (a-c)^2 + (b-d)^2 = 5
   Move is valid if 5, else not a valid move
   I wonder if I need to implement a way to check for a valid move...

   Favorite string = "ICPCASIASG"

   Sample Input 1:                   Sample Output 1:

    5                                 YES
    IXIXXXXCXAXSXXPXXCSXAGXXX


   Sample Input 2
    5                                 NO
    THEQUICKBROWNFOXJUMPSOVER
*/
