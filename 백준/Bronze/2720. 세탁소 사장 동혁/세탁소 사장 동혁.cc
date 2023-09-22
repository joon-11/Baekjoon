#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	int count;

	char mon[4] = {25, 10, 5, 1};
	scanf("%d", &count);
	
	for(int i = 0; i < count; i++){
		char res[4] = {0,};
		int sc;
		int j = 0;
		scanf("%d", &sc);
		
		while(sc != 0){
			while(j < 4){
				if(sc >= mon[j]){
					sc -= mon[j];
					res[j] ++;
				}else{
					j++;
				} 
			}
			for(int k = 0; k < 4; k++){
				printf("%d ", res[k]);
			}
			break;
		}

	}	
}