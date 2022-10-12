#include <stdio.h>

double mean = 0.0;
int count = 0;
int median = 0;
int number_for_fib = 21;

int Numeros(int number, int a, int b);

int main(int argc, char* argv[]){


    // float mean = 0.0;
    int result = Numeros(number_for_fib-1, 0, 1);

    printf("%d\n", result);
    printf("The mean is %.2f\n", (mean + (double)result) / (double)number_for_fib);
    printf("The median is %d\n", median);
    return 0;
}

int Numeros(int number, int a, int b){
    printf("%d ", a);
    if (count == (number_for_fib - 1) / 2){
        median = a;
    }
    count++;
    mean += a;
    if (number == 0) {
        return a;
    }

    if (number == 1) {
        return b;
    }
    
    return Numeros(number-1,b,a+b);
}
