#include <stdio.h>
#include <string.h>
int is_letter(char c) {
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        return 1; // It is a letter
    }
    return 0; // It is not a letter
}
void count(char p[],int*letter,int*vowel,int*space,int*ponct,int*word){
*letter=0;*vowel=0;*space=0;*ponct=0;*word=0;
char pn[] = "@#$%^&*()_+-=|!:,~`\{}[]';/.";
for(int i=0;i<strlen(p);i++){
  if(p[i]>='A'&&p[i]<='Z' || p[i]>='a'&&p[i]<='z') {
    (*letter)++;
  }
  if(p[i]=='a'||p[i]=='A'||p[i]=='e'||p[i]=='E'||p[i]=='i'||p[i]=='I'||p[i]=='u'||p[i]=='U'||p[i]=='o'||p[i]=='O'){
    (*vowel)++;
  }
  if(p[i]==' '){
    (*space)++;
  }
  for(int j=0;j<strlen(pn);j++){
  if(p[i]==pn[j]){
    (*ponct)++;
  }
}
  if(is_letter(p[i])){
    if(!is_letter(p[i+1])){
      (*word)++;
    }  
  }
		}


}
int main(){
char text[100]; // "...Hello, world!  Testing:one,two;three"; fhsdbvj
printf("enter a text");
fgets(text, sizeof(text), stdin);
int w,l,s,p,v;
count(text,&l,&v,&s,&p,&w);S
printf("Text: %s\n", text);
    printf("Letters: %d\n", l);
    printf("Vowels: %d\n", v);
    printf("Spaces: %d\n", s);
    printf("Punctuation: %d\n", p);
    printf("Words: %d\n", w);

}

