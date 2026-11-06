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
void swap(int a[], int i, int j) {
    int temp = a[i];  // 暂存第一个元素
    a[i] = a[j];
    a[j] = temp;
}
void quick(int l,int r,int a[]){
    if(l>=r) return ;
    int i =l -1,j = r+1,mid = a[l+r>>1];
    while (i < j) {
        do i++;while(a[i] < mid);
        do j--;while(mid < a[j]);
        if(i < j) swap(a,i,j);
    }
    quick(l,j,a),quick(j+1,r,a);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[7];
    for(int i =0;i<7;i++){
        scanf("%d",&a[i]);
    }
    quick(0,6,a);
    for(int i =0;i<7;i++){
        printf("%d ",a[i]);
    }
    
    
    return EXIT_SUCCESS;
}
