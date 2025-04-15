/* Caculation of simple interest*/
#include<stdio.h> // header file

int main() { // main statement from the where the C file will start to get executed 
    int p,n; // integer vaiables
    float r,si; // floating point variables

    // values assigned to the variables
    p = 1000; 
    n = 3;
    r = 8.5;

    // formula for simple interest
    si = p*n*r/100; // Simple interest calculated 

    printf("%f", si); // print statement that prints the simple interest
}