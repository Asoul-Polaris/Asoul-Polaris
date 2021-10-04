#include <stdio.h>
#include <stdlib.h>
//打印练习
// int main()
// {
//     printf("我");
//     return 0;
// }  

//scanf练习
// int main()
// {
//     int a = 0;
//     int b = 0;
//     int sum = 0;
//     scanf("%d %d", &a,&b);
//     sum = a + b;
//     printf("sum = %d\n", sum);
//     system("pause");
//     return 0;
// }

//找最大值练习
// int main()
// {
//     //创建数组
//     int arr[10] = {0};
//     int i = 0;
//     for (i = 0; i < 10; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     //寻找最大值
//     int max = arr[0];
//     for (i = 1; i < 10; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
        
//     }
//     //打印输出
//     printf("max = %d\n", max);

//     system("pause");
//     return 0;
// }

//平均值练习
int main()
{
    //创建数组
    int arr[10] = {0};
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    //计算平均值
    int sum = arr[0];
    for (i = 1; i < 10; i++)
    {
        sum = sum + arr[i];
    }
    int avg = sum / 10;
    printf("avg = %d\n", avg);
    system("pause");
    return 0;
}
