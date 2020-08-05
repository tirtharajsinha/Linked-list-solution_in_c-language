#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int c1,c2,m,n,max;
    scanf("%d%d",&c1,&c2);
    m=c1+1;
    n=c2+1;
    int a[m],b[n],arra[m],arrb[n];
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(int i=m-1;i>=0;i--){
        arra[m-1-i]=a[i];
    }
    for(int i=n-1;i>=0;i--){
        arrb[n-1-i]=b[i];
    }
    if(m>n){
        max=m;
    }
    else{
        max=n;
    }
    int sum[max],sumf[max];
    for(int i=0;i<max;i++){
        sum[i]=0;
    }
    for(int i=0;i<m;i++){
        sum[i]=arra[i];
    }
    
    
    for(int i=0;i<max;i++){
        sum[i]=sum[i]+arrb[i];
    }
    
    
    for(int i=max-1;i>=0;i--){
        sumf[max-1-i]=sum[i];
    }
    for(int i=0;i<max;i++){
        if(i==max-1){
            printf("%d",sumf[i]);
            
        }
        else if(i==max-2)
        {
           printf("%dx + ",sumf[i]);
        }
        else
        {
            printf("%dx^%d + ",sumf[i],max-1-i);
        }
    }
    
    

    return 0;
}
