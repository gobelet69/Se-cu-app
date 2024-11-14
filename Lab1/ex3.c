//Une fonction qui renvoie le plus grand nombre de trois nombres réels.
#include <stdio.h>
#include <stdlib.h>

double bo3(double a, double b, double c) {
    double max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}
int main(int argc, char *argv[]) {
if (argc != 4) {
    printf("Usage: %s <num1> <num2> <num3>\n", argv[0]);
    return 1;
}

double a = atof(argv[1]);
double b = atof(argv[2]);
double c = atof(argv[3]);

double result = bo3(a, b, c);
printf("The largest number is: %f\n", result);

return 0;
}


