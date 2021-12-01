#include <stdio.h>
#include <string.h>
int main(){
char s[100],s1[100];
int len,len1,i,j;
scanf("%s%n",s,&len);
scanf("%s%n",s1,&len1);
for(i=0;s[i]!='\0';i++){
    if(s[i]==s1[0] && s[i+1]==s1[1]){
        for(j=0;j<s1[j]!='\0';j++,i++){
            if(s[i]==s1[j]){
                printf("%d  ",i);
                break;
                }
                else
                    break;
            }
        }
    }

return 0;
}