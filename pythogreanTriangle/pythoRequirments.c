















#include "pythoRequirments.h"

int sumOfSquaresOfSides(int a,int b)
{
    return (pow(a,2)+pow(b,2));
}

int pythogreanTripletCondition(int a,int b,int c)
{

    if(a > b && a > c)
    {

          #ifdef DEBUG
          {
              printf("The largest side is : %d\n",a );
          }
          #endif
        pow(a,2) == sumOfSquaresOfSides(b,c);
        return true;
    }
    else if(b > c)
    {
              #ifdef DEBUG
              {
                  printf("The largest side is : %d\n",b);
              }
              #endif
          pow(b,2) == sumOfSquaresOfSides(a,c);
          return true;
    }
    else if(c > a && c >b)
    {

                #ifdef DEBUG
                {
                    printf("The largest side is : %d\n",c);
                }
                #endif
        pow(c,2)  == sumOfSquaresOfSides(b,a);
        return true;
    }
    else
    {

                #ifdef DEBUG
                {
                    printf("There is no largest side \n");
                }
                #endif
      return false;
    }

//    (a>b && a>c) ? return a:((b>c)?return b:return c)
}


void readSidesOfTriangle(triagle* atriangle)
{
  int side1,side2,side3;
  printf("Enter the side of triangle\n");
  scanf("%d %d %d",&side1,&side2,&side3);
  (*atriangle).side1 = side1;
  (*atriangle).side2 = side2;
  (*atriangle).side3 = side3;


  //QUESTION : how to saved data to structure variables using scanf
          // using 1. By reference
          //       2. By value
 }


void isaPythagorean(triagle* atriangle)
{
  int a = atriangle->side1;
  int b = atriangle->side2;
  int c = atriangle->side3;

    #ifdef DEBUG
    {
        printf("The sides of triangle are : %d %d %d \n",a,b,c);
        printf("Evaluated for condition\n");
    }
    #endif
    atriangle->isPythoagorean = pythogreanTripletCondition(a,b,c);

}
