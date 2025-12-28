#include <stdio.h>

int main(){
int l[] = {1, 3, 2, 4, 5, 1, 2, 1, 5, 2, 1, 9};
int n=sizeof(l)/sizeof(l[0]);
int t = l[0];
for(int i=0;i<n-1;i++){
l[i]=l[i+1];
}
l[n-1]=t;
for(int j=0;j<n;j++){
    printf("%d \0 ",l[j]);
}
printf("\n");
return 0;
}