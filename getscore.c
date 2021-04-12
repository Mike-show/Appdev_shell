#include "score.h"

void input_scores(int scores[]) {
	int input = 0;
	printf("Input a score, -1 to end:\n");
	for (int i = 0; i < MAX && input != -1; i++) {
		printf("score %d: ", i+1);
		scanf("%d", &input);
		if(input <= 100 && i >= -1){
			scores[i] = input;
		}
		else {
			i--;
			printf("Error!\n");
		}
	}
}
