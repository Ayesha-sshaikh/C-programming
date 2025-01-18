#include <stdio.h>
int choice;
float per;
int main() {
    printf("enter your choice- for sci-1,comm-2 & arts-3...\n");
    scanf("%d",&choice);
    if(choice==1) {
        printf("enter your %..\n");
        scanf("%f",per);
        if(per>75) {
            printf("you can go for engineering");
        }
        else if(per>60&&per<=75){
            printf("you can go BSCit..");
        }
        else if(choice==2){
            printf("enter you %..\n");
            scanf("%f",&per);
            if(per>75){
                printf("you can go for CA/CS..");
            }
            else if(per>60&&per<=75) {
                printf("you can go for BBI..");
            }
            else if(per>50&&per<=60){
                printf("you can go for Bcom..");
            }
            else {
                printf("invalid per...");
            }
        }
    }
    else if(choice==3){
        printf("entyer your %..\n");
        scanf("%f",&per);
        if (per>75){
            printf("you can go for history..");
        }
    else if(per>60&&per<=75){
        printf("you can gp for sociology...");
    }
    else if(per>50&&per<=60){
        printf("you can go for psychology");
    }
    else {
        printf("invalid per...");
    }
    }
    else {
        printf("invalid choice...");
    }

    return 0;
}