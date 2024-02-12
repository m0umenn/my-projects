#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("give us the number of lines\n");
    int i,j,n,x1,x2,x,stars;
    scanf("%d",&n);
    stars=n+(n-1);
x1=((stars/2)+1);
x=stars/2;
x2=((stars/2)-1);


            for(j=0;j<stars;j++){
                if(j>x || j<x){
                    printf(" ");
                }else{printf("*");}
            }

            for(i=1;i<n;i++){printf("\n");
            for(j=0;j<stars;j++){
                if(j>x1 || j<x2){
                    printf(" ");
                }else{printf("*");}
            }
x1=x1+1;
x2=x2-1;
            }






    return 0;
}
