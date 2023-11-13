#include <stdio.h>
#include <stdlib.h>
int main()
{
    do
    {
        int a;
        int total;
        printf("Nhap 1 so nguyen\n");
        scanf("%d", &a);
        printf("1. In dãy so chia het cho 2 và giam dan (n >= s? >= 2)\n");
        printf("2. In các so nho hon n và tinh tong\n");
        printf("3. In ra các uoc so chan cua n\n");
        printf("4. In ra các uoc so le và so luong các uoc la cua n\n");
        printf("5. In ra uoc so le lon nhat cau n\n");
        printf("6. Thoat\n");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            for (int i = a; i >= 2; i--)
            {
                if (i % 2 == 0)
                {
                    printf(" %d  ", i);
                }
            }
            printf("\n");

            break;
        case 2:
            int sum;
            for (int i = 1; i <= a; i++)
            {
                printf("%d  ", i);
                sum += i;
            }
            printf("\n");
            printf("Tong cac so do la %d\n", sum);
            break;
        case 3:
            for (int i = 2; i <= a; i+=2)
            {
                if (a % i == 0)
                {
                    printf("%d ", i);
                }
            }
            break;
        case 4:
            int count=0;
            for (int i = 1; i <= a; i += 2)
            {
                if (a % i == 0)
                {
                    ++count;
                    printf("%d ", i);
                }
            }
            printf("\n So luong uoc le cua %d là %d\n",a,count);
            break;
        case 5:
        for (int i = a; i >=1; i-=1)
        {
            if (a%i==0 && i%2!=0)
            {
                printf("Uoc so le lon nhat la %d\n",i);
                break;
            }
            
        }
        
