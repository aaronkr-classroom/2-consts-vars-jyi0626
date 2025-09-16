// invest.c

#include <stdio.h>
#include <math.h>

int main(void) {
    double principal = 1000000.0; 
    double rate = 0.10;          
    int n = 12;                  
    int t = 40;                   

   
    double future_value = principal * pow(1 + rate / n, n * t);

    printf("����: %.0f��\n", principal);
    printf("�� ������: %.2f%%\n", rate * 100);
    printf("���� Ƚ�� (��): %d\n", n);
    printf("���� �Ⱓ: %d��\n", t);
    printf("40�� �� ���� ��ġ: %.0f��\n", future_value);

    return 0;
}
