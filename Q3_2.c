#include<stdio.h>

int main(){
    int d, m, y, flag=0;
    printf("Enter date in d m y format : ");
    scanf("%d %d %d", &d, &m, &y);

    if(d>31 || (d>30 && ((m==4) || (m==6) || (m==9) || (m==11))) || (m==2 && d>29)){
        printf("Incorrect Values!");
    }
    else{

        int x;
        if(m == 1 || m == 3 || m==5 || m==7 || m==8 || m==10 || m==12){
            x = 1;
        }
        else if(m==2){
            x=2;
        }
        else{
            x=3;
        }

        switch(x){
            case 1:
                printf("Remaining days : %d", 31-d);
                break;
            case 2:
                flag = y%4 != 0 ? 0 : (y%100 != 0 ? 1 : (y%400 == 0 ? 1 : 0));
                if(flag)
                    printf("Remaining days : %d", 29-d); 
                else
                    printf("Remaining days : %d", 28-d);
                break;
            case 3:
                printf("Remaining days : %d", 30-d);
                break;
            default:
                printf("Enter Correct Values!");
                break;
        }
    }

    return 0;
}