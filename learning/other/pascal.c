#include <stdio.h>
long long fact(int n){
long long i=0;
long long fact = 1;
while((n-i)>=1){
fact = fact*(n-i);
i++;
}
return fact;
}
long long C(int n , int k){
  if(n<k){
    printf("n must be bigger than k");
  return -1;
  }
  long long  C=fact(n)/(fact(n-k)*fact(k));
return C;      
}  
int main(){
 int n;   
 printf("enter number of rows");
scanf("%d",&n);
for(int i=0;i<n;i++){
  for(int m = 0 ;  m < n-i ; m++){printf("   ");}
  for(int j=0;j<=i;j++){
    printf("%3lld   ",C(i,j));
  }
  printf("\n");
}
return 0;

}







