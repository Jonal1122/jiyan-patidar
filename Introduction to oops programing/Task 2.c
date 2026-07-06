#include <stdio.h>
#include <string.h>

char tasks[5][100] = {"Study C", "Practice SQL", "Learn OOP"};
int status[5] = {0, 0, 0};
int count = 3;

void markTaskDone(int index) {
    status[index] = 1;
}

int main() {
    markTaskDone(1);

    for(int i = 0; i < count; i++) {
        printf("%d. %s", i + 1, tasks[i]);

        if(status[i] == 1)
            printf(" - DONE");

        printf("\n");
    }

    return 0;
}