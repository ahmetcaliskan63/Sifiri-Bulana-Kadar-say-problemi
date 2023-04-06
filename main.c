#include <stdio.h>

int sifirBulanaKadarSay(int num1, int num2) {
    int sayac = 0;
    while (num1 != 0 && num2 != 0) {
        if (num1 >= num2) {
            num1 -= num2;
        } else {
            num2 -= num1;
        }
        sayac++;
    }
    return sayac;
}

int main() {
    int num1, num2;
    printf("Num1'i girin: ");
    scanf("%d", &num1);
    printf("Num2'yi girin: ");
    scanf("%d", &num2);
    int sonuc = sifirBulanaKadarSay(num1, num2);
    printf("Sonuc: %d", sonuc);
    return 0;
}

