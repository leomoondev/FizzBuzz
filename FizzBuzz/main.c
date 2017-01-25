//
//  main.c
//  FizzBuzz
//
//  Created by Leo Moon on 2017-01-24.
//  Copyright © 2017 leomoon. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    for(int i=1; i<101; i++) {
        
        if(i % 3 == 0) {
            printf("Fizz\n");
        }
        else if (i % 5 == 0) {
            printf("Buzz\n");
        }
        else if( (i %3 == 0) && (i %5 == 0)) {
            printf("FizzBuzz\n");
            
        }
        else {
            printf("%d\n", i);
        }
    }
    return 0;
}
