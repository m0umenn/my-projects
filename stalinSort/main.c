#include <stdio.h>
#include <stdlib.h>

int main()
{

printf("introduce the value of n lad:\n");
       int n;   scanf("%d",&n);
     int i,j;

    int v[n];


    for(i=0;i<n;i++){
            printf("please give us the the value number %d of your array ",i);
        scanf(" %d",&v[i]);
    }
        printf("\n");
    printf("here's your array kind sir\n");
    printf("\n");

    printf("v[] = {");
    for(i=0;i<n;i++){
        printf("%d",v[i]);
        if(i!=(n-1)){
            printf(",");
        }else{break;}
    }
printf("}");
for(i=1;i<n;i++){
    if(v[i-1]>v[i] || v[i]>v[i+1] ){
         for(j=i;j<n;j++){
         v[j]=v[j+1];

         }n=n-1;

    }
}
     printf("\n");
    printf("here's your array after the stalin sort kind sir\n");
    printf("\n");

    printf("v[] = {");
    for(i=0;i<n;i++){
        printf("%d",v[i]);
        if(i!=(n-1)){
            printf(",");
        }else{break;}
    }
printf("}");


    return 0;
}
