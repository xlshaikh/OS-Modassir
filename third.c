#include<stdio.h>
int main() {
    int n,i;
    printf("Enter number of process:");
    scanf("%d",&n);
    int at[n],bt[n],ct[n],tat[n],wt[n];
    float atat=0,awt=0;
    int sum_tat=0, sum_wt=0;
    for(i=0; i<n;i++) {
        printf("\n process p%d\n",i+1);
        printf("Arrival time:");
        scanf("%d", & at[i]);
        printf("Brust time:");
        scanf("%d",& bt[i]);
    }
    ct[0]= at[0]+ bt[0];
    for(i=1;i<n;i++){
        if(ct[i-1]<at[i])
           ct[i]= at[i]+ bt[i];
        else
            ct[i]=ct[i-1]+ bt[i];   

    }
    for(i=0;i<n;i++){
        tat[i]= ct[i]-at[i];
        wt[i]= tat[i]-bt[i];

        sum_tat+=tat[i];
        sum_tat+=wt[i];

    }
        atat = (float)sum_tat / n;
        awt = (float)sum_wt / n;

    printf("\nprocess\tat\tbt\tct\ttat\twt\n");
    for(i=0;i<n;i++)
    {
        printf("p%d\t%d\t%d\t%d\t%d\t%d\n", i+1 , at[i] , bt[i], ct[i] , tat[i] , wt[i]);



    }
    printf("\n (atat) = %.2f", atat);
    printf("\n(awt) = %.2f\n", awt);

    return 0;
}