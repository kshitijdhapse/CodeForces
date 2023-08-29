#include<stdio.h>
struct process
{
    int at;
    int bt;
    int ct;
    int tat;
    int wt;
};
void swap(struct process *a, struct process *b) {
    struct process temp = *a;
    *a = *b;
    *b = temp;
}

void sortat(struct process arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i].at > arr[j].at) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

void display(struct process arr[], int n) {
    printf("P.no\t\tAT\t\tBT\t\tCT\t\tTAT\t\tWT\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n", i + 1, arr[i].at, arr[i].bt, arr[i].ct, arr[i].tat ,arr[i].wt);
    }
}
int main(){
    int n;
    printf("Enter No. of processes : ");
    scanf("%d",&n);
    printf("\n");

    struct process p[n];
    for(int i=0;i<n;i++){
        scanf("%d",&p[i].at);
        scanf("%d",&p[i].bt);
    }
    display(p,n);
    sortat(p,n);
    printf("\n");
    display(p,n);
    for(int i=0;i<n;i++){
        if(i==0){
            p[i].ct=p[i].at+p[i].bt;
            p[i].tat=p[i].ct-p[i].at;
        }else{
            if(p[i].at>p[i-1].ct){
                p[i].ct=p[i].at+p[i].bt;
            }else{
                p[i].ct=p[i-1].ct+p[i].bt;
            }
            
            p[i].tat=p[i].ct-p[i].at;
        }
        p[i].wt=p[i].tat-p[i].bt;
    }
    printf("\n");
    display(p,n);
    return 0;
}