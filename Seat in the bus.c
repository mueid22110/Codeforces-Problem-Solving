#include<stdio.h>
int main(){
	int t, i;
	scanf("%d", &t);
	int check[t];
	for(i=0 ; i<t ; i++){
		int s, ans=0;
		scanf("%d", &s);
		int seat[s], j;
		
		for(j=0 ; j<s ; j++){
			scanf("%d" ,&seat[j]);
		}
		for(j=0 ; j<s-2 ; j++){
			if((seat[j] - seat[j+1] != 1) && (seat[j+1] - seat[j] != 1)){
				ans = 1;
			}
		}
		check[i] = ans;
	}
	for (i=0 ; i<t ; i++){
		if(check[i] == 1){
			printf("No\n");
		}
		else{
			printf("Yes\n");
		}
	}
	
	
	return 0;
}