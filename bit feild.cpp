#include <stdio.h>

struct date {
    int d:4;   // 4 bits for day (0–15)
    int m:5;   // 5 bits for month (0–31)
    int y:12;  // 12 bits for year (0–4095)
};

int main() {
    // Array of 3 date structures
    struct date doj[3] = {
        {6, 2, 2001},
        {15, 12, 1999},
        {1, 1, 2024}
    };

    printf("List of Dates:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d / %d / %d\n", doj[i].d, doj[i].m, doj[i].y);
    }

    return 0;
}

