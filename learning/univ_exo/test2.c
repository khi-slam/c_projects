#include <stdio.h>

int main(){
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++) {
        a[i]=i;
        printf("%d \n",a[i]);
    }
    return 0;}
