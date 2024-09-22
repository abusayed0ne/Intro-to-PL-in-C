#include<stdio.h>
int main(){
    int tk;
    scanf("%d",&tk);
    if (tk >=100){
        printf("Khawa Dawa Korbo!");
    }
    else if(tk >=50){
        printf("Fuchka Khawa Jete Pare!");
    }
    else if(tk >=20){
        printf("Ice Cream Khabo!");
    }
    else{
        printf("Ekhon Khabona! Tk Nai!!");
    }
    return 0;
}