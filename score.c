#include "score.h"

double score_average(const int scores[], int count)
{
    int sum = 0;
    if (count <= 0) {
        return 0.0;
    }
    for (int i = 0; i < count; ++i) {
        sum += scores[i];
    }
    return (double)sum / count;
}

int score_max(const int scores[], int count)
{
    if (count <= 0) {
        return 0;
    }
    int maximum = scores[0];
    for (int i = 1; i < count; ++i) {
        if (scores[i] > maximum) {
            maximum = scores[i];
        }
    }
    return maximum;
}

int score_min(const int scores[], int count)
{
    if (count <= 0) {
        return 0;
    }
    int minimum = scores[0];
    for (int i = 1; i < count; ++i) {
        if (scores[i] < minimum) {
            minimum = scores[i];
        }
    }
    return minimum;
}

int score_pass_count(const int scores[], int count)
{
    int passed = 0;
    for (int i = 0; i < count; ++i) {
        if (scores[i] >= 60) {
            ++passed;
        }
    }
    return passed;
}
