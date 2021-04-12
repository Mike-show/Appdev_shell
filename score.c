#include "score.h"   //user defined header file

int main() {
	int scores[MAX] = {0}, marks[MAX] = {0};
	int statistics[6] = {0};

	input_scores(scores);
	evaluation(scores, marks);
	classification(marks, statistics);
	output_result(marks, statistics);
	return 0;
}