//
//  level1.c
//  class0
//
//  Created by Jimmy on 11/5/26.
//
#include <stdlib.h>
#include <stdio.h>
int main (void){
    int input;
    scanf("%d",&input);
    if(input >=6 && input <=11){
        printf("早上好");
    }else if (input >=12 && input <=13){
        printf("中午好");
    }else if(input >= 14 && input <=18){
        printf("下午好");
    }else if((input >=19 && input <=24) || (input >=1 && input<=5)){
        printf("晚上好");
    }else{
        printf("not good input");
    }
    return 0;
}
