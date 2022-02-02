#include<stdio.h>

int main(){
    float ans=0, x2;
    char c;
    int flag=0;

    printf("Calculator : \n Enter 'c' to Clear and 'e' to exit : \n");
    while(1){
        printf("%f ", ans);
        // scanf(" %c %f", &c, &x2);
        scanf(" %c", &c);
        switch(c){
            case '+':
                scanf(" %f", &x2);
                ans += x2;
                break;
            case '-':
                scanf(" %f", &x2);
                ans -= x2;
                break;
            case '*':
                scanf(" %f", &x2);
                ans *= x2;
                break;
            case '/':
                scanf(" %f", &x2);
                ans /= x2;
                break;
            // case '%':
            //     ans %= x2;
            //     break;
            case 'c':
                ans = 0;
                break;
            case 'e':
                flag=1;
                break;
            default:
                printf("Operators can only be +, -, /, *, %");
        }
        if(flag)
            break;
    }

    return 0;
}