#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,j,k;

    printf("give us the value of a and b\n");
    printf("the value of a is: "); scanf("%d",&a);
    printf("the value of b is: "); scanf("%d",&b);

       int v1[a];
    int v2[b];
    int v3[a+b];
    for(i=0;i<a;i++){
            printf ("please give us the %d value of your array v1 : ",i);
        scanf("%d",&v1[i]);
    }
    printf("\n");
    for(i=0;i<b;i++){
        printf ("please give us the %d value of your array v2 : ",i);
        scanf("%d",&v2[i]);
    }
    i=0;
    j=0;
    k=0;
    while(i!=a){
        while(j!=b){
                if(v1[i]>v2[j]){
                    v3[k]=v2[j];
                    k=k+1;
                    j=j+1;

                }else{
                  v3[k]=v1[i];
                    k=k+1;
                    i=i+1;
                }

        }
    }
    i=0;
    j=0;
    k=0;
   for(i=0;i<(a+b);i++){
     for(j=i+1;j<(a+b)-1;j++){
    if(v3[j]==v3[i]){
        for(k=j+1;k<(a+b);k++)
            v3[j]=v3[k];
    }
   } (a+b)==((a+b)-1);
   }





    printf("\n");
    printf("the array v3 : {");
for(k=0;k<(a+b);k++){
    printf("%d",v3[k]);
    if(k!=(a+b)-1 ){
        printf(",");
    }else{break;}
}
printf("}");

    return 0;
}
