#include <stdio.h>
#include <stdlib.h>
int ucln(int a, int b)
{
    while (b != 0)
    {
        int count = b;
        b = a % b;
        a = count;
    }
    return a;
}
int bcnn(int a, int b)
{
    int total = a * b / ucln(a, b);
    return total;
}
int main()
{
    do
    {
        int a, b;
        int total;
        printf("Nhap ln luot 2 so nguyen\n");
        scanf("%d%d", &a, &b);
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. tích 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. So du trong phep chia 2 so\n");
        printf("6. Uoc chung lon nhat\n");
        printf("7. Boi chung nho nhat\n");
        printf("8. Thoat\n");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case 2:
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case 3:
            printf("%d x %d = %d\n", a, b, a * b);
            break;
        case 4:
            printf("%d : %d = %d\n", a, b, a / b);
            break;
        case 5:
            printf("%d % %d = %d\n", a, b, a % b);
            break;
        case 6:
            total = ucln(a, b);
            printf("UCLN cua 2 s? dó là %d", total);
            break;
        case 7:
            total = bcnn(a, b);
            printf("BCNN cua 2 so do la %d", total);
        case 8:
            return 0;
        default:
            printf("Vui long chon tu 1-8\n");
        }
    } while ("Vui long cho tu 1 - 8\n");
}
