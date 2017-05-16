/* marks.c */
/* marks.c */



/* Section: SSS*/



#include <stdio.h>



int main(void) {



	int marks;

	int i;

	float st_marks;
	float total;
	float average;

	total = 0;



	printf("       ---=== IPC mark Analyser ===---\n");



	printf("Please enter the number of marks(between 3 and 40): ");

	scanf("%d", &marks);



	while (marks < 3 || marks > 40) {

		printf("Invalid number, enter a number between 3 and 40 inclusive: ");

		scanf("%d", &marks);
	}
	
		i = marks;

		for (i = marks; i > 0; i--)
		{
			printf("%d> ", marks -i+1);
			scanf("%f", &st_marks);
			total = total + st_marks;
		}

		average = total / marks;
		
		printf("The average of all marks in this group is %.1f.\n", average);

		printf("Program Ended.\n");

		















	



	return 0;

}



