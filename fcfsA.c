#include <stdio.h>

int main() {
    int n, i, j;
    int p[30];
    int at[30];
    int bt[30];
    int ct[30];
    int tat[30];
    int wt[30];
    float av_wt = 0, av_tat = 0;

    printf("Enter number of Processes (Maximum 30): ");
    scanf("%d", &n);

    printf("Enter Arrival Time and Burst Time for each process:\n");
    for(i = 0; i < n; i++) {
        p[i] = i + 1;
        printf("P[%d] Arrival Time: ", i + 1);
        scanf("%d", &at[i]);
        printf("P[%d] Burst Time:   ", i + 1);
        scanf("%d", &bt[i]);
        printf("\n");
    }
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(at[j] > at[j + 1]) {
                int temp = at[j];
		at[j] = at[j + 1];
		at[j + 1] = temp;
                temp = bt[j];
		bt[j] = bt[j + 1];
		bt[j + 1] = temp;
                temp = p[j];
		p[j] = p[j + 1];
		p[j + 1] = temp;
            }
        }
    }
    int current_time = 0;

    for(i = 0; i < n; i++) {
        if(current_time < at[i]) {
            current_time = at[i];
        }

        ct[i] = current_time + bt[i];

        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];

        av_tat += tat[i];
        av_wt += wt[i];

        current_time = ct[i];
    }

    printf("\n\nSorted by Arrival Time:\n");
    printf("----------------------------------------------------------------------------------\n");
    printf("Process\tArrival\t\tBurst\t\tCompletion\tTurnAround\tWaiting\n");
    printf("----------------------------------------------------------------------------------\n");

    for(i = 0; i < n; i++) {
        printf("P[%d]\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",
               p[i], at[i], bt[i], ct[i], tat[i], wt[i]);
    }

    printf("\nAverage Waiting Time    : %.2f", av_wt / n);
    printf("\nAverage Turnaround Time : %.2f\n", av_tat / n);

    return 0;
}
