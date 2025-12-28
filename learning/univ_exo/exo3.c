#include <stdio.h>

int main(){
char A[6]={'a','b','c','d','e','f'};
char x;
x=A[0];
for(int i=0;i<5;i++){
   A[i]=A[i+1];
}
A[5]=x;
for(int i=0;i<=5;i++){
printf("%c \n",A[i]);
}
printf("\n");
return 0;
}
