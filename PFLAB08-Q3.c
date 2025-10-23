#include<stdio.h>
int main(){
	int x=0,o=0;
	printf("Classroom Seating Chart:\n");
	printf("========================\n");
	printf("x = Student, o = Empty\n");
	for (int i =0; i<5; i++){
		for(int j =0; j<5; j++){
			if((i+j) %2 == 0){
				printf("x");
				x++;
			} else {
				printf("o");
				o++;
			}
		}
		printf("\n");
	}
	printf("Ocuppied Seats: %d\n", x);
	printf("Empty Seats: %d", o);
	return 0;
}
