#include<stdio.h>
int main() {
    int n,i;
    printf("Enter number of process:\n");
    scanf("%d",&n);
    int at[n],bt1[n],io[n],bt2[n],pct[n],ct[n];
    for(i=0; i<n;i++) {
        printf("\n process p%d\n",i+1);
        printf("Arrival time:\n");
        scanf("%d", & at[i]);
        printf("Brust time:\n");
        scanf("%d",& bt1[i]);
        printf("input/output:\n");
        scanf("%d", & io[i]);
        printf("Brust time 2:\n");
        scanf("%d",& bt1[i]);

    }
    pct[0]= at[0]+ bt1[0]+io[0];
    for(i=1;i<n;i++)
        pct[i]=pct[i-1]+bt1[i];
    ct[0]= pct[i]+ bt2[0];       
    for(i=1;i<n;i++){
        ct[i]=ct[i-1]+bt2[i];
    }
    return 0;
}