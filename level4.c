//
//  level4.c
//  class0
//
//  Created by Jimmy on 11/5/26.
//


#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    for(int i =100;i <=999;i++){
        int a = i/100,b = (i/10)%10,c = i%10;
        int temp = a*a*a+b*b*b+c*c*c;
        if(i == temp )
            printf("%d ",i);
    }
    return EXIT_SUCCESS;
}
