#include <stdio.h>
void swap(int *a,int *b){
int t=*a;
*a = *b;
*b = t;

}
int main(){
 int l[] = {1, 3, 2, 4, 5, 1, 2, 1, 5, 2, 1, 9};
 int n = sizeof(l)/sizeof(l[0]);
 for(int i=0;i<n-1;i++){
  for(int j=0;j<n-1;j++){  
  if(l[j]>l[j+1] )
   swap(&l[j],&l[j+1]);
  }
 }
 for(int i = 0; i < n; i++) {
        printf("%d ", l[i]);
    }
    printf("\n");
 return 0;
}