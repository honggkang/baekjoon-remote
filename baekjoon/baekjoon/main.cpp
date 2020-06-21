//
//  main.cpp
//  baekjoon
//
//  Created by Honggu Kang on 2020/06/20.
//  Copyright © 2020 Honggu Kang. All rights reserved.
//

//#include <iostream>
#include <stdio.h>
#include "DrawStar.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    // std::cout << "Hello, World!\n";
    /*
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        printf(">\n");
    }else if(a==b){
        printf("==\n");
    }else{
        printf("<\n");
    }
    */
    int N;
    scanf("%d",&N);
    DrawStar(N);
    return 0;
}
