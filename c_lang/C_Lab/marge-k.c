#include <stdio.h>

int main() {
    int a[3] = {1,4,7};
    int b[3] = {2,5,8};
    int c[3] = {3,6,9};
    int result[9];
    int i=0,j=0,k=0,r=0;

    while(i<3 && j<3 && k<3) {
        if(a[i]<=b[j] && a[i]<=c[k])
            result[r++]=a[i++];
        else if(b[j]<=a[i] && b[j]<=c[k])
            result[r++]=b[j++];
        else
            result[r++]=c[k++];
    }

    for(int x=0;x<r;x++)
        printf("%d ",result[x]);
}