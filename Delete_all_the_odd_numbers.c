#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n,count=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            count++;
        }
    }
    int arr[count],j=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
           arr[j]=a[i];
            j++;
        }
    }
    for(int j=0;j<count;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}
