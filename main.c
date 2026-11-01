#include <stdio.h>
#include "score.h"

#define REPORT_TITLE "Student Score Report"

int main(void)
{
    const int scores[] = {78, 92, 85, 46, 90};
    const int count = (int)(sizeof(scores) / sizeof(scores[0]));

    printf("%s\n", REPORT_TITLE);
    printf("Count: %d\n", count);
    printf("Average: %.2f\n", score_average(scores, count));
    printf("Maximum: %d\n", score_max(scores, count));

    return 0;
}
