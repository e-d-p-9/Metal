//
//  main.c
//  TwoFloats
//
//  Created by Ethan Peacock on 3/22/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // assign numbers to two floats
    float num1 = 3.14;
    float num2 = 42.0;
    
    // assign sum to a double of two floats
    double num_sum = num1 + num2;
    printf("The sum of %f and %f is %f.\n", num1, num2, num_sum);

    return 0;
}
