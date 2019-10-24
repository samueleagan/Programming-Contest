#include <stdio.h>
#include <string.h>
#include <math.h>


typedef struct coordinate {
  int x, y;
  char coordLetter;
} coordinate;

int checkString (char string[], coordinate coord[], int length);

int main(void) {
  int stringLength = 25;
  int sizeOfString = 5;
  char sampleString[25] = "IXIXXXXCXAXSXXPXXCSXAGXXX";
  coordinate stringCoords[stringLength];

  int counter = 0;
  for (int i = 1; i <= sizeOfString; i++) {
    for (int j = 0; j < sizeOfString; j++) {
      stringCoords[j + counter].x = i;
      stringCoords[j + counter].y = j+1;
      stringCoords[j + counter].coordLetter = sampleString[j + counter];
    }
    counter += 5;
  }
  if (stringLength < 9){ // Using 9 since a 3x3 board is of size 9, and that is the smallest size "board" that we are able to have
    puts("NO");          // to be able to fit her favorite string
  }
  else {
    int test = checkString(sampleString, stringCoords, stringLength);
  }

  return 0;
}

int checkString (char string[], coordinate coord[], int length) {
  int isFavoriteStringThere = 1;
  char finishedString[100];
  if (coord[length].coordLetter == string[length]) {
    finishedString[length] = coord[length].coordLetter;
  }
  else{
    checkString(string, coord, length - 1);
  }
  return isFavoriteStringThere;
}


/*

Sample Input 1 string:   IXIXXXXCXAXSXXPXXCSXAGXXX





int checkValidMove (int x1, int y1, int x2, int y2) {
  coordinate firstCoordinate = {x1,y1};
  coordinate secondCoordinate = {x2,y2};
  int isTrue;
  int test = (pow((firstCoordinate.x - secondCoordinate.x), 2) + pow((firstCoordinate.y - secondCoordinate.y), 2));
  if (test == 5) {
    isTrue = 1;
  }
  else {
    isTrue = 0;
  }
  return isTrue;
}
} */

/*   for (int i = 0; i < stringLength; i++) {
    printf("%d %d %c\n", stringCoords[i].x, stringCoords[i].y, stringCoords[i].coordLetter);
  } */
