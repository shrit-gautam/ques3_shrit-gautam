#include<stdio.h>

int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("enter element no. %d: ",i+1);
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=i;j--){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=a[k];
            }
            if(sum>max){
                max=sum;
            }
        }
    }
    printf("max is: %d",max);
    prinf("hey");



    return 0;
}