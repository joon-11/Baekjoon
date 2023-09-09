#include <stdio.h>

int main(){
	char arr[9][9];
	int max = 0;
	int loci, locj;
	
	
	for(int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			scanf("%d", &arr[i][j]);
			int temp = arr[i][j];	
			if(max <= temp){
				max = arr[i][j];
				loci = i + 1;
				locj = j + 1;	
			}
		}
	}
	
	printf("%d\n", max);
	printf("%d %d", loci, locj);
	

	
	return 0;
}