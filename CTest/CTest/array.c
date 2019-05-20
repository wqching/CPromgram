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

int arrayConvertTest()
{
    printf("转换前的数组\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arrayModel[i][j]);
        }
        printf("\n");
    }
    
    //将二级数据的行列元素互换，并存储到数组 arrayConvert 中
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            arrayConvert[j][i] = arrayModel[i][j];
        }
    }
    
    //读取数组 arrayConvert 中的值
    
    printf("转换后的数组\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", arrayConvert[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}

