#include <stdio.h>

typedef struct {
    unsigned char asmt1;
    unsigned char asmt2;
    unsigned char asmt3;
} an_imaginary_course;

an_imaginary_course GetTheValues() {
    an_imaginary_course three_assessments;
    
    printf("Input the values of asmt1, asmt2 and asmt3: ");
    scanf("%hhu %hhu %hhu", &three_assessments.asmt1, &three_assessments.asmt2, &three_assessments.asmt3);

    return(three_assessments);
}

long double ComputeTheFinalResultAndPrintItWithTwoDigitsAfterTheDecimal(an_imaginary_course three_assessments) {
    return (((float)three_assessments.asmt1 * 30 / 100 + (float)three_assessments.asmt2 * 30 / 100 + (float)three_assessments.asmt3 * 40 / 100));
}

int main() {

    printf("The final result: %.2Lf\n", ComputeTheFinalResultAndPrintItWithTwoDigitsAfterTheDecimal(GetTheValues()));

    return(0);
}