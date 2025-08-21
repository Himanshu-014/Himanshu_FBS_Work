#include <stdio.h>
int main() {
    int h, m, s, ts;
    printf("Enter time (hh mm ss): ");
    scanf("%d %d %d", &h, &m, &s);

    ts = (h * 3600) + (m * 60) + s;
    printf("Total seconds = %d\n" , ts);
    return 0;
}
