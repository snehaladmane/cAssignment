#include<stdio.h>

int main(){
    int age=0;
    printf("please enter your age:: ");
    scanf("%d",&age );

    if(age>=18){
        printf("here is your driving liscence");
    }
    else{
        printf("you are not eligible");
    }
    return 0;
}