#include <stdio.h>

int main() {
    int n, i, t = 0, done = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    int at[n], bt[n], rt[n], wt[n], tat[n];

    for(i = 0; i < n; i++) {
        printf("AT P%d: ", i+1);
        scanf("%d", &at[i]);

        printf("BT P%d: ", i+1);
        scanf("%d", &bt[i]);

        rt[i] = bt[i];
    }

    while(done < n) {
        int min = 9999, idx = -1;

        for(i = 0; i < n; i++) {
            if(at[i] <= t && rt[i] > 0 && rt[i] < min) {
                min = rt[i];
                idx = i;
            }
        }

        if(idx == -1) {
            t++;
            continue;
        }

        rt[idx]--;

        if(rt[idx] == 0) {
            done++;
            int ft = t + 1;

            wt[idx] = ft - bt[idx] - at[idx];
            if(wt[idx] < 0)
                wt[idx] = 0;
        }

        t++;
    }

    float aw = 0, atat = 0;

    printf("\nP\tAT\tBT\tWT\tTAT\n");

    for(i = 0; i < n; i++) {
        tat[i] = bt[i] + wt[i];

        printf("P%d\t%d\t%d\t%d\t%d\n", i+1, at[i], bt[i], wt[i], tat[i]);

        aw += wt[i];
        atat += tat[i];
    }

    printf("\nAvg WT = %.2f", aw/n);
    printf("\nAvg TAT = %.2f\n", atat/n);

    return 0;
}
