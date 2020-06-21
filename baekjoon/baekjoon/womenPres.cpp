//
//  womenPres.cpp
//  baekjoon
//
//  Created by Honggu Kang on 2020/06/21.
//  Copyright © 2020 Honggu Kang. All rights reserved.
//

#include <stdio.h>
#include "womenPres.h"

int peopleNumber(int f, int r){
    int result;
    if(f>=2){
        int tmp=0;
        for (int i=1;i<r+1;i++){
            tmp = tmp+peopleNumber(f-1,i);
        }
        result = tmp;
    }
    else if(f==1){
        int tmp=0;
        for(int i=1;i<r+1;i++){
            tmp = tmp+i;
        }
        result = tmp;
    }
    else{
        result = -1;
    }
    return result;
}
