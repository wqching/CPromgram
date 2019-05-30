//
//  max.c
//  Array
//
//  Created by 陈文强 on 2019/5/30.
//  Copyright © 2019 陈文强. All rights reserved.
//

#include <stdio.h>

//比较四个数的最大值


//比较两个数的最大值
int max2(int a, int b)
{
    int max;    //声明一个变量 max ，表示最大值
    
    max = (a > b ? a : b);  //将最大值赋给 max

    return max;
    
    
}

//比较四个数的最大值
int max4(int a, int b, int m, int n)
{
    int max;
    
    max = max2(a, b);
    max = max2(max, m);
    max = max2(max, n);
    
    return max;
}

//输入最大值

void printMax()
{
    
    int max;
    
    int a;
    int b;
    int c;
    int d;
    
    printf("请输入4个整数\n");
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    max = max4(a, b, c, d);
    
    printf("最大值是 %d \n", max);
}
