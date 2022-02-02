#include<stdio.h>
#include<math.h>

int count_days_except_months(int a[]){
    int d = a[0], m=a[1], y=a[2];
    long int days = d + y*365 + ((m<=2 && m>0) ? (floor((y-1)/4) - floor((y-1)/100) + floor((y-1)/400)) : (floor(y/4) - floor(y/100) + floor(y/400)));
    return days;
}

int main(){
    int d1[3], d2[3];
    printf("Enter first date : ");
    scanf("%d %d %d", &d1[0], &d1[1], &d1[2]);
    printf("Enter Second date : ");
    scanf("%d %d %d", &d2[0], &d2[1], &d2[2]);

    long int days1 = count_days_except_months(d1);
    long int days2 = count_days_except_months(d2);

    switch(d1[1]){
        case 1: 
            days1 += 31;
            break;
        case 2: 
            days1 += 28;
            break;
        case 3: 
            days1 += 31;
            break;
        case 4: 
            days1 += 30;
            break;
        case 5: 
            days1 += 31;
            break;
        case 6: 
            days1 += 30;
            break;
        case 7: 
            days1 += 31;
            break;
        case 8: 
            days1 += 31;
            break;
        case 9: 
            days1 += 30;
            break;
        case 10: 
            days1 += 31;
            break;
        case 11: 
            days1 += 30;
            break;
        case 12: 
            days1 += 31;
            break;
        
    }

    switch(d2[1]){
        case 1: 
            days2 += 31;
            break;
        case 2: 
            days2 += 28;
            break;
        case 3: 
            days2 += 31;
            break;
        case 4: 
            days2 += 30;
            break;
        case 5: 
            days2 += 31;
            break;
        case 6: 
            days2 += 30;
            break;
        case 7: 
            days2 += 31;
            break;
        case 8: 
            days2 += 31;
            break;
        case 9: 
            days2 += 30;
            break;
        case 10: 
            days2 += 31;
            break;
        case 11: 
            days2 += 30;
            break;
        case 12: 
            days2 += 31;
            break;
        
    }

    printf("No of days between : %d", days1-days2);

    return 0;
}