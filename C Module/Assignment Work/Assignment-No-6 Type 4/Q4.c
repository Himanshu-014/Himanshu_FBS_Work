#include <stdio.h>

// Function declaration
float total(float, float, float, float, float );
float percent(float);
void main() {
	float subj1 = 75.00, subj2 = 92.52, subj3 = 87.11, subj4 = 66.00, subj5 = 71.48;

	// Function call
	float res = total(subj1, subj2, subj3, subj4, subj5);
	printf("Total Score = %.2f", res);

	float res1=percent(res);
	printf("Total percentage = %.2f", res1);
}

// Function definition
float total(float subj1, float subj2, float subj3, float subj4, float subj5) {


	float total_score = subj1 + subj2 + subj3 + subj4 + subj5;
	return total_score;
}
float percent(float res) {

	float percentage  = (res / 500.0) * 100;
	return percentage;
}