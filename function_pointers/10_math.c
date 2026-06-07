/************************************
Math Function Framework
Write wrapper functions around standard mathematical functions (sin, cos, tan, log) with the same function prototype.
Store pointers to these functions in an array.
Provide an interface for users to select and execute a math function on a given floating-point input.
*************************************************** */
#include <stdio.h>
#include <math.h>

double mySin(double x) {
    return sin(x);
}

double myCos(double x) 
{
    return cos(x);
}

double myTan(double x) 
{
    return tan(x);
}

double myLog(double x) 
{
    return log(x);
}

int main() {
    int choice;
    double x;

    double (*func[4])(double) {mySin,myCos,myTan,myLog};

    printf("Select Function:\n");
    printf("1. sin\n2. cos\n3. tan\n4. log\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter value: ");
    scanf("%lf", &x);

    if(choice>=1&&choice<=4) {
        double result = func[choice - 1](x);
        printf("Result =%.4lf\n", result);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}