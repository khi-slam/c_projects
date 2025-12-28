#include <stdio.h>

int main(){
    int l[] = {1, 3, 2, 4, 5, 1, 2, 1, 5, 2, 1, 9};
    int max=l[0],max2=0;
    int n=sizeof(l)/sizeof(l[0]);
    for(int i=0;i<n-1;i++){
      if(max<l[i+1]){
        max2 = max;
        max = l[i+1];
      }
    }
   printf("largest is %d , second largest is %d \n",max,max2);
   return 0; 
}