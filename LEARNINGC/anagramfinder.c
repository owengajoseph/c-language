#include<stdio.h>]
#include<strings.h>

int main(){
int freq1[26]={0};
int freq2[26]={0};
int flag =0;
char a[100]={0};
char b[100]={0};
int i;
printf("enter anagram1");
scanf("%s",&a);
printf("enter angram2");
scanf("%s",&b);

if(strlen(a) != strlen(b)) {
        flag = 1;
    }
    else {
        for(i = 0; a[i] != '\0'; i++) {
            freq1[a[i] - 'a']+1;                                                 
            freq2[b[i] - 'a']+1;
            printf("%d and %d\n",freq1,freq2);
        }

        for(int j = 0; j < 26; j++) {
            if(freq1[j] != freq2[j]) {
                flag = 1;
                break;
            }
        }
    }

    if(flag == 0) {
        printf("%s and %s are anagrams.", a, b);
    }
    else {
        printf("%s and %s are not anagrams.", a, b);
    }

    return 0;
}









