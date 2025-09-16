// invest.c

#include <stdio.h>
#include <math.h>

int main(void) {
    double principal = 1000000.0; 
    double rate = 0.10;          
    int n = 12;                  
    int t = 40;                   

   
    double future_value = principal * pow(1 + rate / n, n * t);

    printf("원금: %.0f원\n", principal);
    printf("연 이자율: %.2f%%\n", rate * 100);
    printf("복리 횟수 (연): %d\n", n);
    printf("투자 기간: %d년\n", t);
    printf("40년 후 투자 가치: %.0f원\n", future_value);

    return 0;
}
