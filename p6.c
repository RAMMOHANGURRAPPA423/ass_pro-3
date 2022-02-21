#include <stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int i=0,search=0,num;
    int*ptr=&a[0];
    printf("enter num");
    scanf("%d\n",&num);
    for(i=0;i<5;i++){
    if(*(ptr+i)=num){
        search=1;
        break;
    }
}
if(search==1)
printf("%d\n is present",num);
else
printf("%d\n is not present",num);
}


