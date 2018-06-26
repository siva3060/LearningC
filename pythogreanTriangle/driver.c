
#include "requirments.h"


void main()
{

    triagle atriangle;
    char* triangle = "False";
    #ifdef DEBUG
    {
        printf("A Triangle has been created\n");
        printf("Two side of triangle are : %d , %d \n",atriangle.side1,atriangle.side2);
        if(atriangle.isPythoagorean != 0)
        {
          printf("%s\n","True");
        }
        else
        {
          printf("%s\n","False" );
        }

    }
    #endif
    readSidesOfTriangle(&atriangle);
    #ifdef DEBUG
    {
        printf("Read the user defined triangle\n");
        printf("All the sides read are : %d %d %d \n",atriangle.side1,atriangle.side2,atriangle.side3);
        printf("The triangle is being evaluated for pythoRequirments\n");
    }
    #endif
    isaPythagorean(&atriangle);
    printf("Is the Triagle formed by the side a pythorean Triangle %s\n",(atriangle.isPythoagorean != 0) ? "True" : "False");
}
