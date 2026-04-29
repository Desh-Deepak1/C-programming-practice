#include <stdio.h>

int main() {   
    int n, bt[30], wait_t[30], turn_ar_t[30], ct[30];
    int i, j;
    float av_wt_t = 0, avturn_ar_t = 0;
    printf("Enter no of Process (Maximum 30):  ");
    scanf("%d", &n);
    printf("Enter no of process Burst time: \n");
    for(i = 0; i < n; i++) {
        printf("P[%d] -> ", i + 1);
        scanf("%d", &bt[i]);
    }
    wait_t[0] = 0;
    for(i = 0; i < n; i++) {
        wait_t[i] = 0;
        for(j = 0; j < i; j++) {
            wait_t[i] += bt[j];
        }
    }
    printf("\nProcess\t Burst Time\t Waiting Time\t TurnAround Time  Completion Time\n");
    for(i = 0; i < n; i++) {
        turn_ar_t[i] = bt[i] + wait_t[i];
        ct[i] = turn_ar_t[i];
        av_wt_t += wait_t[i];
        avturn_ar_t += turn_ar_t[i];

        printf("\nP[%d]\t\t%d\t\t%d\t\t%d\t\t%d", i + 1, bt[i], wait_t[i], turn_ar_t[i], ct[i]);
    }
    printf("\n\nAverage Waiting Time    : %.2f", av_wt_t / n);
    printf("\nAverage Turnaround Time : %.2f\n", avturn_ar_t / n);

    return 0;
}
