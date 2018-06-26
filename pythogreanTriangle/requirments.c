
#include "requirments.h"

int sumOfSquaresOfSides(int a,int b)
{
    return (pow(a,2)+pow(b,2));
}



int pythogreanTripletCondition(int a,int b,int c)
{
    int lhs,rhs;
    lhs = rhs = 0;

    if(a > b && a > c)
    {


        lhs = sumOfSquaresOfSides(b,c);
        rhs = pow(a,2);

        #ifdef DEBUG
        {
            printf("The largest side is : %d\n",a );
            printf("The compared values are : %d == %d \n",lhs,rhs);

        }
        #endif
          if(lhs == rhs)
            return true;
          else
            return false;
    }
    else if(b > c)
    {
      lhs = sumOfSquaresOfSides(a,c);
      rhs = pow(b,2);
              #ifdef DEBUG
              {
                  printf("The largest side is : %d\n",b);
                  printf("The compared values are : %d == %d \n",lhs,rhs);

              }
              #endif
              if(lhs == rhs)
                return true;
              else
                return false;
    }
    else if(c > a && c >b)
    {
      lhs = sumOfSquaresOfSides(a,b);
      rhs = pow(c,2);
                #ifdef DEBUG
                {
                    printf("The largest side is : %d\n",c);
                    printf("The compared values are : %d == %d \n",lhs,rhs);

                }
                #endif
                if(lhs == rhs)
                  return true;
                else
                  return false;
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

    printf("End of pythogreanTripletCondition()\n");
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

  printf("Inside function isaPythagorean()\n");
    #ifdef DEBUG
    {
        printf("The sides of triangle are : %d %d %d \n",a,b,c);
        printf("Evaluated for condition\n");
    }
    #endif
    atriangle->isPythoagorean = pythogreanTripletCondition(a,b,c);
    printf("The value of t/f is : %d\n",atriangle->isPythoagorean);

}
