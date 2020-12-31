#include<stdio.h>

#define MAX_WORD_LENGTH 15
#define IS_WORD_SEPARATOR_CHAR(c) (c == '\n' || c ==  ' ' || c == '\t')

#define IN  1
#define OUT 0

/* WARNING: There is no check for MAX_WORD_LENGTH */

void display_horizontal_histogram(int[]);
void display_vertical_histogram(int[]);
void display_histogram(int[], char);

void display_histogram(int histogram[], char type) {
    if (type == 'h') {
        display_horizontal_histogram(histogram);
    } else if (type = 'v') {
        display_vertical_histogram(histogram);
    }
}

void display_horizontal_histogram(int histogram[]) {
    printf("\n");

    //ignoring 0 length words (i = 1)
    for (int i = 1; i <= MAX_WORD_LENGTH; ++i) {
        printf("%2d: ", i);
        for (int j = 0; j < histogram[i]; ++j) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n");
}

void display_vertical_histogram(int histogram[]) {
    int i, j,  max = 0;

    // ignoring 0 length words (i = 1)
    for (i = 1; i <= MAX_WORD_LENGTH; ++i) {
        if (histogram[i] > max) {
            max = histogram[i];
        }
    }


    for (i = 1; i <= max; ++i) {
        for (j = 1; j <= MAX_WORD_LENGTH; ++j) {
            if (histogram[j] >= max - i + 1) {
                printf("  * ");
            } else {
                printf("    ");
            }
        }
        printf("\n");
    }

    for (i = 1; i <= MAX_WORD_LENGTH; ++i) {
        printf(" %2d ", i);
    }

    printf("\n\n");
}

int main()
{
    int c, state, word_length;
    int histogram[MAX_WORD_LENGTH + 1];

    for (int i = 0; i <= MAX_WORD_LENGTH; ++i) {
        histogram[i] = 0;
    }

    word_length = 0;
    state = OUT;
    while ((c = getchar()) != EOF) {
        if (IS_WORD_SEPARATOR_CHAR(c)) {
            state = OUT;
            if (word_length != 0) {
                histogram[0]++;
            }
            histogram[word_length]++;
            word_length = 0;
        } else {
            ++word_length;
            if (state == OUT) {
                state = IN;
            }
        }
    }

    if (word_length > 0) {
        histogram[word_length]++;
    }

    display_histogram(histogram, 'h');
    display_histogram(histogram, 'v');
}



