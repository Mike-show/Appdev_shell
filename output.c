#include "score.h"

void output_result(int m[], int st[]) {
	int i;
	printf("Here are the marks:\n");
	for (i = 0; i < MAX && m[i] != -1; i++) {
		printf("score %d: %3d\n", i+1, m[i]);
	}
	puts(""); //make a new line

	printf("Here are the statistics:\n");
	for (i = 0; i < 6; i++) {
		printf("Mark %d: %d hits\n", i, st[i]);
	}
}
