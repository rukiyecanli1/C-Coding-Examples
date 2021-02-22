#include <stdio.h>
#include <stdlib.h>

void takas_1(int x, int y) {
int tmp = x;
x = y;
y = tmp;
}
void takas_2(int *x, int *y) {
int tmp = *x;
*x = *y;
*y = tmp;
}
int main() {
int a = 1;
int b = 2;
printf("a: %d - b: %d\n", a, b);
takas_1(a, b);
printf("a: %d - b: %d\n\n", a, b);
int tmp = a;
a = b;
b = tmp;
printf("a: %d - b: %d\n", a, b);
takas_2(&a, &b);
printf("a: %d - b: %d\n", a, b);
return 0;
}
