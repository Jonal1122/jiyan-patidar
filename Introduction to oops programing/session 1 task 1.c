#include <stdio.h>
#include <string.h>

char tasks[5][100];
int count = 0;

int main() {
    strcpy(tasks[count++], "Study C");
    strcpy(tasks[count++], "Practice SQL");
    strcpy(tasks[count++], "Learn OOP");

    for(int i = 0; i < count; i++) {
        printf("%d. %s\n", i + 1, tasks[i]);
    }

    return 0;
}