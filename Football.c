#include<stdio.h>
int main(){
	char s[100];
	printf("Enter the team situation: ");
	gets(s);
	int ans = 0;
	
	for(int i = 0 ; i < sizeof(s) ; i++){
		int count = 0;
		if(s[i] == '0'){
			while(s[i] == '0' && i<sizeof(s)){
				count++;
				i++;
			}
		}else{
			while(s[i] == '1' && i<sizeof(s)){
				count++;
				i++;
			}
		}
		if(count >=7){
			ans = 1;
		}
	}
	if(ans == 1){
			printf("YES");
	}else{
		printf("NO");
	}
	
	return 0;
}