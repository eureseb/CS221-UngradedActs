//This program is used to detect if a given string is a palindrome or not
#include <stdio.h>
#include <string.h>
int main(){
	char array[100];
	char new_array[100];
	int i,a=0,b;
	
	gets(array);
	for(i=0;array[i]!='\0';i++){
		if(array[i]!=' '){
			new_array[a] = array[i];
			a++;
		}
	}
	b = a/2;
	for(i=0;i<=b;i++){
		if(new_array[i] == new_array[--a]){
			if(i == b){
				printf("palindrome");
			}
		}
		else{
				printf("Not Palindrome");
				break;
			}
	}
	
	return 0;
}

