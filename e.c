#include <stdio.h>
int n;
int main()
{
    scanf("%d", &n);
    if (n <= 5)      // Trường hợp đặc biệt khi n <= 5
    {
        printf("1");
        return 0;
    }
    int result = 0;
    if (n % 5 == 0)       // Kiểm tra nếu n là bội số của 5
    {
        result = n / 5;
    }
    else
    {
        result = n / 5 + 1;
    }
    printf("%d", result);
    return 0;
}