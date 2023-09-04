#include <stdio.h>

int main() {
	for (int student = 0; student < 3; student++) {
		int tempMarks = 0, totalMarks = 0;

		for (int subject = 1; subject < 4; subject++) {
			printf("Enter subject %d marks > ", subject);
			scanf("%d", &tempMarks);
			totalMarks += tempMarks;
		}
		double averageMarks = totalMarks / 3.0;

		printf(
			"\n"
			"Total Marks: %d\n"
			"Average Marks: %.2f\n\n",
			totalMarks, averageMarks
		);
	}
}