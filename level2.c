//
//  level2.c
//  class0
//
//  Created by Jimmy on 11/5/26.
//

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
    printf("请输入一个在(1,9)的数字\n");
    int n;scanf("%d",&n);
    for(int i = 1;i<=n;i ++){
        for(int j =1;j<=n && j<=i;j++){
            printf("%d*%d=%d\t",j,i,j*i);
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}
