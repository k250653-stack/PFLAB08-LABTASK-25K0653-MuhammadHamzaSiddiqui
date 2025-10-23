#include<stdio.h>
int main(){
	int matrix[3][3] = {12,34,56,72,4,6,90,67,12};
	int max= matrix[0][0];
	int x=0;
	int y=0;
	for (int i=0 ; i<3; i++){
		for(int j = 0; j<3; j++){
			if(matrix[i][j] > max){
			max = matrix[i][j];
			x = i;
			y = j;
	}
		}
		
	}
	printf("The highest number is %d at index(%d,%d)", max,x,y);
	return 0;
}
