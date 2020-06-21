//
//  main.cpp
//  baekjoon
//
//  Created by Honggu Kang on 2020/06/20.
//  Copyright © 2020 Honggu Kang. All rights reserved.
//

//#include <iostream>
#include <stdio.h>
//#include "DrawStar.h"
#include "womenPres.h"

int main(int argc, const char * argv[]) {
    // std::cout << "Hello, World!\n";
    /* Drawing stars
    int N;
    scanf("%d",&N);
    DrawStar(N);
     */
    
    int T;
    scanf("%d",&T);
    int arr[T][2]; //arr[floor #][room #]
    for(int i=0;i<T;i++){
        scanf("%d",&arr[i][0]);
        scanf("%d",&arr[i][1]);
    }
    int Ans[T];
    for(int i=0; i<T; i++){
        Ans[i]=peopleNumber(arr[i][0],arr[i][1]);
        printf("%d\n",Ans[i]);
    }
    return 0;
}
