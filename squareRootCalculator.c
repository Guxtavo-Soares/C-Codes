#include <stdio.h>
#include <math.h>

void xVertex(float a, float b);
void yVertex(int delta, float a);
int calcDelta(float a, float b, float c);
int main(void){
    float a, b, c = 0;
    double x1, x2 = 0;
    int delta = 0;

    printf("Calculating quadratic equation...\n");
    printf("Enter the value of A: ");
    scanf("%f", &a);
    printf("Enter the value of B: ");
    scanf("%f", &b);
    printf("Enter the value of C: ");
    scanf("%f", &c);

    delta = calcDelta(a, b, c);
    printf("The delta of \"%0.fx^2 + %0.fx + %0.f\" is: %d\n", a, b, c, delta);

    xVertex(a, b);
    yVertex(delta, a);

    if(delta<0){
        printf("There are no real roots.\n");
        return(0);
    }
    if(delta==0){
        printf("This equation has only one root.");
        x1 = ((-1 * b) + sqrt(delta)) / (2 * a);
        return(0);
    } else {
        x1 = ((-1 * b) + sqrt(delta)) / (2 * a);
        x2 = ((-1 * b) - sqrt(delta)) / (2 * a);

        printf("X' = %.15f\n", x1);
        printf("X\" = %.15f\n", x2);
        return 0;
    }
}
int calcDelta(float a, float b, float c){
    int delta = 0;
    delta = pow(b, 2) - 4 * (a * c);
    return(delta);
}

void xVertex(float a, float b){
    float xvertex = 0;
    xvertex = (-b) / (2 * a);
    printf("The X vertex of this function is %2.f\n", xvertex);
}

void yVertex(int delta, float a){
    float yvertex = 0;
    yvertex = (-delta) / (4 * a);
    printf("The Y vertex of this function is %2.f\n", yvertex);
}
