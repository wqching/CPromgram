//
//  array.c
//  CTest
//
//  Created by 陈文强 on 2019/5/20.
//  Copyright © 2019 陈文强. All rights reserved.
//

#include <stdio.h>

int arrayDemo[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int arrayModel[2][3] = {1, 2, 3, 4, 5, 6};
int arrayConvert[3][2] = {};

int arrayTest()
{
    for (int indexOne = 0; indexOne < 3; indexOne++)
    {
        for (int indexTwo = 0; indexTwo < 3; indexTwo++)
        {
            printf("%d  ", arrayDemo[indexOne][indexTwo]);
        }
        printf("\n");
    }
    
    return 0;
}

