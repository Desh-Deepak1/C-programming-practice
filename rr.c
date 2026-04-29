#include <stdio.h>

int main() {
    int n, tq, i, t = 0, done = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    int bt[n], rt[n], wt[n], tat[n];

    for(i = 0; i < n; i++) {
        printf("BT P%d: ", i+1);
        scanf("%d", &bt[i]);
        rt[i] = bt[i];
    }

    printf("Enter Time Quantum: ");
    scanf("%d", &tq);

    while(done < n) {
        for(i = 0; i < n; i++) {
            if(rt[i] > 0) {
                if(rt[i] > tq) {
                    t += tq;
                    rt[i] -= tq;
                } else {
                    t += rt[i];
                    wt[i] = t - bt[i];
                    rt[i] = 0;
                    done++;
                }
            }
        }
    }

    float aw = 0, atat = 0;

    printf("\nP\tBT\tWT\tTAT\n");

    for(i = 0; i < n; i++) {
        tat[i] = bt[i] + wt[i];

        printf("P%d\t%d\t%d\t%d\n", i+1, bt[i], wt[i], tat[i]);

        aw += wt[i];
        atat += tat[i];
    }

    printf("\nAvg WT = %.2f", aw/n);
    printf("\nAvg TAT = %.2f\n", atat/n);

    return 0;
}
