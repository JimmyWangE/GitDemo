
//
//  level5.c
//  class0
//
//  Created by Jimmy on 11/5/26.
//

#include <stdlib.h>
#include <stdio.h>
void findMax_min(int arr[], int len,int *max, int *min){
    *max = arr[0];
    *min = arr[0];
    for(int i=0;i <len ;i++){
        if(arr[i] > *max){
            *max = arr[i];
        }
        if(arr[i] < *min){
            *min = arr[i];
        }
    }
    printf("%d,%d",*min,*max);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int a[] = {3, -2, 8, 1, 5};
    int max, min;

    findMax_min(a, 5, &max, &min);
    return EXIT_SUCCESS;
}

