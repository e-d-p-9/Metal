//
//  main.c
//  Turkey
//
//  Created by Ethan Peacock on 3/22/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Declare the variable weight of type float
    float weight;
    
    // Store a number in that variable
    weight = 14.2;
    
    // log the weight to the user
    printf("Weight of turkey is %f pounds.\n", weight);
    
    // Declare another variable of type float
    float cookingTime;
    
    // Calculate the cooking time and store it in the variable
    // formula was 15 minutes plus 15 minutes per pound
    // in this case '*' means multiply
    cookingTime = 15 + 15 * weight;
    
    // log cooking time to the user
    printf("cooking time is %f minutes.\n", cookingTime);
    
    // end the function and indicate success
    return 0;
}
