#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int n;
printf("enter a number \n");
scanf("%d",&n);
if(n<=0){
printf("erorr number must be positive \n");
return 1;
}  
char A[95];
int index =0;
for(char c=' ';c<='~';c++){
    A[index]=c;
    index++;}
srand(time(NULL));
for(int i=0;i<n;i++){
printf("%c",A[rand() % index]);
}
printf("\n");
return 0;
}
