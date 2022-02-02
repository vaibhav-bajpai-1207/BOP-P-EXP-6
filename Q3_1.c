#include<stdio.h>

int main(){
    int d, m, y, flag=0;
    printf("Enter date in d m y format : ");
    scanf("%d %d %d", &d, &m, &y);

    if(d>31 || (d>30 && (m==4) || (m==6) || (m==9) || (m==11)) || (m==2 && d>29)){
        printf("Incorrect Values!");
    }
    else{

        switch(m){
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
                printf("Remaining days : %d", 31-d);
                break;
            case 4:
                printf("Remaining days : %d", 30-d);
                break;
            case 5:
                printf("Remaining days : %d", 31-d);
                break;
            case 6:
                printf("Remaining days : %d", 30-d);
                break;
            case 7:
                printf("Remaining days : %d", 31-d);
                break;
            case 8:
                printf("Remaining days : %d", 31-d);
                break;
            case 9:
                printf("Remaining days : %d", 30-d);
                break;
            case 10:
                printf("Remaining days : %d", 31-d);
                break;
            case 11:
                printf("Remaining days : %d", 30-d);
                break;
            case 12:
                printf("Remaining days : %d", 31-d);
                break;
            default:
                printf("Enter Correct Values!");
                break;
        }
    }

    return 0;
}