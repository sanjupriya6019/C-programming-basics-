#include<stdio.h>
int main(){
    int num;
        printf("___positive/negetive/zero___checker\n\n\n");
    while(1){
    printf("Enter the values\n");
    scanf("%d",&num);
    if(num>0){
        printf("%d positive number\n",num);
    }
    if(num<0){
        printf("%d negative number\n",num);
    }
    if(num==0){
        printf("%d zero\n",num);
    
    break;
    }
}
    return 0;
}

