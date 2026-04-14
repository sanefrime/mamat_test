// 123456789
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    char str[1000];
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;
    int g = 0;
    int h = 0;
    int j = 0;
    int k = 0;
    scanf(" %[^\n]", str);
    int i =0 ;
    while(str[i] != '\0') {
        if (str[i] == '1') {
            b++;
        }if (str[i] == '2') {
            c++;
        }if (str[i] == '3') {
            d++;
        }if (str[i] == '4') {
            e++;
        }if (str[i] == '5') {
            f++;
        }if (str[i] == '6') {
            g++;
        }if (str[i] == '7') {
            h++;
        }if (str[i] == '8') {
            j++;
        }if (str[i] == '9') {
            k++;
        }if (str[i] == '0') {
            a++;
        }
        i++;
    }
    printf("%d %d %d %d %d %d %d %d %d %d\n", a, b, c, d, e, f, g, h, j, k);
    return 0;
}
