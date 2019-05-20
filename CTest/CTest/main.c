//
//  main.c
//  CTest
//
//  Created by 陈文强 on 2019/5/20.
//  Copyright © 2019 陈文强. All rights reserved.
//

#include <stdio.h>
#include "array.c"

int main(int argc, const char * argv[]) {
    for (int indexOne = 0; indexOne < 3; indexOne++) {
        for (int indexTwo = 0; indexTwo < 3; indexTwo++) {
            
                printf("%d  ", arrayDemo[indexOne][indexTwo]);
            
        }
        printf("\n");
    }
    return 0;
}
