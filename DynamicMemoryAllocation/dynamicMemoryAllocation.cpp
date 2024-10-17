#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int *array = (int*)malloc(n*sizeof(int));

    return 0;
}