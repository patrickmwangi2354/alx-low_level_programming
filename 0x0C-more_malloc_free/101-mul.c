#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void validate_input(char *num1, char *num2)
{
while (*num1 != '\0')
{
if (!isdigit(*num1))
{
printf("Error\n");
exit(98);
}
num1++;
}
while (*num2 != '\0')
{
if (!isdigit(*num2))
{
printf("Error\n");
exit(98);
}
num2++;
}
}

long long multiply(char *num1, char *num2)

{
long long result = 0;
while (*num1 != '\0')
{
int digit1 = *num1 - '0';
int carry = 0;
char *tmp_num2 = num2;
while (*tmp_num2 != '\0')
{
int digit2 = *tmp_num2 - '0';
int product = digit1 * digit2 + carry;
result += (long long)product % 10;
carry = product / 10;
tmp_num2++;
}
if (carry > 0)
{
result += (long long)carry % 10;
}
num1++;
}
return (result);
}

int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (98);
}
char *num1 = argv[1];
char *num2 = argv[2];
validate_input(num1, num2);
long long result = multiply(num1, num2);
printf("%lld\n", result);
return (0);
}
