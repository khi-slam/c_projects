#include <stdio.h>
#include <string.h>

int count_vowels(char p[]){
int countv=0;    
char v[]={"a","e","u","i","o","A","E","U","I","O"};
for(int j=0;j<strlen(p[]);j++){
for(int i=0;i<10;i++){
   if(v[i]==p[j])
       countv++;
  }
}
  return countv; 
}
int count_letter(char p){
int countl=0,i=65,j=0;
char l[];
while(i != 122){
l[j]=i;
    if(i==90){i+=6;}
i++;
j++;
}
for(int z=0;z<strlen(p[]);z++){
 for(int t=0;t<j+1;t++){
if(l[t]==p)
    countl++;
 }
}
return countl;
}
int count_space(char p){
int counts=0;
for(int i=0;i<strlen(p[]);i++){
if(p[i]==' ')
  counts++;	
}
return counts;
}
int count_ponctuation(char p[]){
int countp=0;
char pn[] = {
    ' ', '!', '"', '#', '$', '%', '&', '\', '(', ')', 
    '*', '+', ',', '-', '.', '/', ':', ';', '<', '=', 
    '>', '?', '@', '[', ''', ']', '^', '_', '`', 
    '{', '|', '}', '~', 
};
for(int i=0;i<strlen(p[]);i++){
 for(int j=0;j<strlen(pn);j++){
   if(p[i]==pn[j])
    countp++;}	   
}
return countp;
}
inr count_words(char p[]){
char pn[] = {
    ' ', '!', '"', '#', '$', '%', '&', '\', '(', ')', 
    '*', '+', ',', '-', '.', '/', ':', ';', '<', '=', 
    '>', '?', '@', '[', ']', '^', '_', '`',''', 
    '{', '|', '}', '~' 
};
for(int i=0;i<strlen(p[]);i++){
for(int j=0;j<strlen(pn[]);i++){
  if((p[i]=>'A'&&p[i]<='Z' || p[i]=>'a'&&p[i]=<'z')&&(
}
	

}
}
int main(){
 printf("enter a paragraph");

