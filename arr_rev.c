#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    int * ptr = (int*) malloc(num*sizeof(int));
    
    for (int x =0; x<num; x++){
        ptr[x] = arr[x];
    }//copy array into ptr
    int bruh = num-1;
    for( int x=0; x<num; x++){
        arr[x] = ptr[bruh-x];
    }

    /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
