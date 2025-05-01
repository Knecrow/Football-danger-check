#include<stdio.h>
int main(){

    char s[100];
    printf("Enter Values:");
    scanf("%s", s);

int flag=1;

for(int i=1;s[i]!='\0';i++){
  
if(s[i]==s[i-1]){
    
    flag++;
    if(flag>=7 ){
        printf("YES");
        return 0;
    }
}
else{
   flag=1;
}
}
  printf("NO");  

    return 0;
}