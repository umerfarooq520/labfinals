
#include<stdio.h>
int main(){
    int star;
    printf("Enter Number of Stars: ");
    scanf("%d", &star);
    int i=1,j=1;
    while(i<=star){
            if(j<=star){
                    if(j == 1 || i == star || j == star || i == j || j== (star+1) - i){
                            printf("*");
                    }
                    else{
                        printf(" ");
                    }
                    j++;
            }
            if(j>star){
                printf("\n");
                i++;
                j=1;
            }

    }

return 0;
}

