#include <stdio.h>
#include <stdbool.h>
#include <math.h>


//Preprocessor directive for Debugging
//#define DEBUG



typedef struct
{
  int side1;
  int side2;
  int side3;
  bool isPythoagorean;
} triagle;


void readSidesOfTriangle(triagle* atriangle);
void isaPythagorean(triagle* atriangle);
int sumOfSquaresOfSides(int a,int b);
int pythogreanTripletCondition(int a,int b,int c);
