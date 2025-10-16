#include <stdio.h>
#include <locale.h>

int get_max(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else
    {
        if (b > a && b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}
int main()
{
    setlocale(LC_ALL, "RUS");
    int a;
    int b;
    int c;
    int max_result;
    printf("Введите значение a:");
    scanf("%d", &a);
    printf("Введите значение b:");
    scanf("%d", &b);
    printf("Введите значение c:");
    scanf("%d", &c);
    max_result = get_max(a, b, c);
    printf("Максимальное число: %d\n", max_result);
    return 0;
}