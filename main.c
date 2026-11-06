//
//  main.c
//  class0
//
//  Created by Jimmy on 11/5/26.
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a = 10;
    int *p = &a;
    printf("a 的值为: %d\n", a);
    // 输出 10
    printf("a 的地址为: %p\n", &a);  // 输出 a 的地址
    printf("p 所存储的地址为: %p\n", p);  // 输出 p 存储的地址
    printf("p 的地址为: %p\n", &p);  // 输出 p 的地址
    printf("p 指向的值为: %d\n", *p); 
}
