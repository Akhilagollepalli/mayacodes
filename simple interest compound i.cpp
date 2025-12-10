#include<stdio.h>
#include<math.h>
int main() {
float p, t, r, si, ci;
printf("Enter principal amount (p): ");
scanf("%f", &p); 
printf("Enter time in year (t): ");
scanf("f", &t);
printf("Enter the rate in percent (r): ");
scanf("f", &r);
printf("simple interest =%0.3f\n", si);
printf("compound interest =%0.3f", ci);
return 0;
}
