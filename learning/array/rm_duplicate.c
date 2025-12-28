#include <stdio.h>
#include <stdbool.h>
int main(){
int l[] = {1, 3, 2, 4, 5, 1, 2, 1, 5, 2, 1, 9};
int n= sizeof(l)/sizeof(l[0]);
int d[n];
int dupl_count = 0;
for (int i=0;i<n;i++){
 bool dupl_check = false;
 for(int j=0;j<dupl_count;j++){
    if(d[j]==l[i]){
     dupl_check=true;
     break;}
 }
 if(!dupl_check){
 d[dupl_count]=l[i];
 dupl_count++;}
}
for(int i = 0; i < dupl_count; i++) {
        printf("%d ", d[i]);
    }
    printf("\n");
 
return 0;
}