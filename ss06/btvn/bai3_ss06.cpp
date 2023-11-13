#include <stdio.h>
#include <stdlib.h>
int main()
{
    do
    {
        int a, b, c;
        int total;
        printf("Nhap lan luot 3 so nguyen\n");
        scanf("%d%d%d", &a, &b, &c);
        printf("1. Tong 3 so nguyen\n");
        printf("2. Trung binh cong cua 3 so nguyen\n");
        printf("3. So lon nhat, nho nhat trong 3 so\n");
        printf("4. Thoat\n");
        int choice;
        scanf("%d", &choice);
        int max = a, min = a;
        max = (max > b) ? max : b;
        max = (max > c) ? max : c;
        min = (min < b) ? min : b;
        min = (min < c) ? min : c;
        switch (choice)
        {
        case 1:
            printf("%d + %d + %d = %d\n", a, b, c, a + b + c);
            break;
        case 2:
            printf("(%d + %d + %d) : 3 = %d\n", a, b, c, (a + b + c) / 3);
            break;
        case 3:
            printf("So lon nhat la: %d\tSo be nhat la:%d\n",max,min);
            break;
        case 4:
            return 0;
        default:
            printf("Vui long chon tu 1-4\n");
        }
    } while ("Vui long cho tu 1 - 4\n");
}
