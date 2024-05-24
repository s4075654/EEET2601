#include <stdio.h>

struct Student {
    char* name;
    int score;
};

struct Class {
    struct Student students[3];
};

struct Class InputAllInformationForAClass() {
    struct Class class;

    for (char student = 0; student < 3; student++) {
        class.students[student].name = NULL;
        size_t length = 0;
        getline(&class.students[student].name, &length, stdin);
        scanf("%d", &class.students[student].score);
        while (getchar() != '\n');
    }

    return(class);
}

struct Student StudentHasTheHighestScore(struct Class class) {
    struct Student student_has_the_highest_score = class.students[0];

    for (char student = 0; student < 3; student++) if (student_has_the_highest_score.score < class.students[student].score) student_has_the_highest_score = class.students[student];

    return(student_has_the_highest_score);
}

int main() {

    printf("%s", StudentHasTheHighestScore(InputAllInformationForAClass()).name);

    return(0);
}