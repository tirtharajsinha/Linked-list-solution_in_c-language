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
    
    
    
    
    //array sizing ends here
    //multiplication starts here
    max=m+n-1;
    int mul[max],mulf[max];
    for(int i=0;i<max;i++){
        mul[i]=0;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            mul[i+j]=mul[i+j]+arra[i]*arrb[j];
        }
    }
    for(int i=max-1;i>=0;i--){
        mulf[max-1-i]=mul[i];
    }
    
     for(int i=0;i<max;i++){
        if(i==max-1){
            printf("%d",mulf[i]);
            
        }
        else if(i==max-2)
        {
           printf("%dx + ",mulf[i]);
        }
        else
        {
            printf("%dx^%d + ",mulf[i],max-1-i);
        }
    }
    
    

    return 0;
}
