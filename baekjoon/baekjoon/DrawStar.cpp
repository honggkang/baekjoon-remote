//
//  startDraw.cpp
//  baekjoon
//
//  Created by Honggu Kang on 2020/06/20.
//  Copyright © 2020 Honggu Kang. All rights reserved.
//
#include<stdio.h>

int DrawStar(int N){
    for(int i=0;i<N;i++){
        for (int j=0;j<i;j++){
                 printf("*");
        }
        if(i>0){
                 printf("\n");
        }
    }
    for(int i=N;i>0;i--){
        for (int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
