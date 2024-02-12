#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iso646.h>
void sum(int a, int b){
printf("the sum of this operation is %d",a+b);
}
void sub(int a, int b){
printf("the sub of this operation is %d",a-b);
}
void mul(int a, int b){
printf("the mul of this operation is %d",a*b);
}
void Div(int a, int b){
printf("the div of this operation is %d",a/b);
}

int main()
{
    int a,b;
    char add ='+';
    char min ='-';
    char multi ='*25';
    char qisma ='/';
    char addt;
    printf("what do you wanna calculate?\n");
    scanf("%d",&a);
    scanf("%c",&addt);
    scanf("%d",&b);


    if(addt==add){
    sum(a,b);
    }
  if(addt==min){
    sub(a,b);
    }
      if(addt==multi){
    mul(a,b);
    }
      if(addt==qisma){
          if(a==0 || b==0){
              printf("can't really do it bud");
          }else{
              Div(a,b);
          }
    }
    return 0;
}
