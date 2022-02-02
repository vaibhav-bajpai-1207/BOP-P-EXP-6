#include<stdio.h>
#include<string.h >

int main(){
    int n, num[4];
    printf("Enter the no. : ");
    scanf("%d", &n);

    int i=3;
    while(n != 0 && i>=0){
        num[i] = n%10;
        n /= 10;
        i--;
    }

    for(int j=0; j<4; j++){
        if(num[j]>0 || num[3] == 0){
            switch(j){
                case 0:
                    switch(num[j]){
                        case 1:
                            printf("One Thousand ");
                            break;
                        case 2:
                            printf("Two Thousand ");
                            break;
                        case 3:
                            printf("Three Thousand ");
                            break;
                        case 4:
                            printf("Four Thousand ");
                            break;
                        case 5:
                            printf("Five Thousand ");
                            break;
                        case 6:
                            printf("Six Thousand ");
                            break;
                        case 7:
                            printf("Seven Thousand ");
                            break;
                        case 8:
                            printf("Eight Thousand ");
                            break;
                        case 9:
                            printf("Nine Thousand ");
                            break;
                        
                    }
                    break;
                case 1:
                    switch(num[j]){
                        case 1:
                            printf("One Hundred ");
                            break;
                        case 2:
                            printf("Two Hundred ");
                            break;
                        case 3:
                            printf("Three Hundred ");
                            break;
                        case 4:
                            printf("Four Hundred ");
                            break;
                        case 5:
                            printf("Five Hundred ");
                            break;
                        case 6:
                            printf("Six Hundred ");
                            break;
                        case 7:
                            printf("Seven Hundred ");
                            break;
                        case 8:
                            printf("Eight Hundred ");
                            break;
                        case 9:
                            printf("Nine Hundred ");
                            break;
                        
                    }
                    break;
                case 2:
                    switch(num[j]){
                        case 1:
                            switch(num[j+1]){
                                case 0:
                                    printf("Ten ");
                                    return 0;
                                case 1:
                                    printf("Eleven ");
                                    return 0;
                            case 2:
                                    printf("Twelve ");
                                    return 0;
                            case 3:
                                    printf("Thirteen ");
                                    return 0;
                            case 4:
                                    printf("Fourteen ");
                                    return 0;
                            case 5:
                                    printf("Fifteen ");
                                    return 0;
                            case 6:
                                    printf("Sixteen ");
                                    return 0;
                            case 7:
                                    printf("Seventeen ");
                                    return 0;
                            case 8:
                                    printf("Eighteen ");
                                    return 0;
                            case 9:
                                    printf("Nineteen ");
                                    return 0;
                                }
                            break;
                        case 2:
                            printf("Twenty ");
                            break;
                        case 3:
                            printf("Thirty ");
                            break;
                        case 4:
                            printf("Forty ");
                            break;
                        case 5:
                            printf("Fifty ");
                            break;
                        case 6:
                            printf("Sixty ");
                            break;
                        case 7:
                            printf("Seventy ");
                            break;
                        case 8:
                            printf("Eighty ");
                            break;
                        case 9:
                            printf("Ninety ");
                            break;
                        
                    }
                    break;
                case 3:
                    switch(num[j]){
                        case 1:
                            printf("One ");
                            break;
                        case 2:
                            printf("Two ");
                            break;
                        case 3:
                            printf("Three ");
                            break;
                        case 4:
                            printf("Four ");
                            break;
                        case 5:
                            printf("Five ");
                            break;
                        case 6:
                            printf("Six ");
                            break;
                        case 7:
                            printf("Seven ");
                            break;
                        case 8:
                            printf("Eight ");
                            break;
                        case 9:
                            printf("Nine ");
                            break;
                        
                    }
                    break;
                
            }
        }
    }

    return 0;
}