#include <stdio.h>

int main(){

    int n=5;
    int arr[n][n];
    int x=1, y=1;
    while(x<=n){
        for(int i=x-1; i<n; i++){
            for(int j=y-1; j<n; j++)
                arr[i][j]=x;
        }
        x++; y++;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
}
