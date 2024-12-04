#include <stdio.h>
#define PI 3.14159265
// Task 2. Build the GetSinCos() function
void GetSinCos(int d, double *dSin, double *dCos) {
    // Compute sin and cos here, converting the degree to radians
    *dSin = sin(d * PI / 180);  // Compute sine and store in dSin
    *dCos = cos(d * PI / 180);  // Compute cosine and store in dCos
}

int main()
{
    double dSin;
    double dCos;
    int degree;
    // Task 1. Read in user input to variable degree
    scanf("%d", &degree);  // Take degree input from the user
    
    // Task 3. Call the GetSinCos() function
    GetSinCos(degree, &dSin, &dCos);  // Pass the degree, and the addresses of dSin and dCos
    printf("The sin is %g \n", dSin);
    printf("The cos is %g \n", dCos);

    return 0;
}