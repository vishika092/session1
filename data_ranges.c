#include<stdio.h>
#include <float.h>
#include <limits.h>

int main(){
    printf("\nFLOATS:\n");
    printf("Maximum floats: %e\n", FLT_MAX);
    printf("Minimum floats: %e\n", FLT_MIN);

    printf("\n\n");

    printf("\nDouble:\n");
    printf("Maximum double: %e\n", DBL_MAX);
    printf("Minimum double: %e\n", DBL_MIN);

    printf("\n\n");


    printf("\nLong Double:\n");
    printf("Maximum LONG DOUBLE: %Le\n", LDBL_MAX);
    printf("Minimum LONG DOUBLE: %Le\n", LDBL_MIN);

   

}