#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 字符串练习
// int main()
// {
//     //对于字符串结尾处以\0作为标志
//     char arr1[] = "abcde";
//     char arr2[] = {'a', 'b', 'c', '\0'};
//     printf("arr1 = %s\n", arr1);//显然，结果为abcde
//     printf("arr2 = %s\n", arr2);//如果不存在结尾处的\0，结果后会存在一定乱码

//     //结尾的\0不算长度
//     // int len1 = strlen(arr1);
//     // int len2 = strlen(arr2);

//     printf("len1 = %d\n", strlen(arr1));//结果为5
//     printf("len2 = %d\n", strlen(arr2));//结果为随机值
//     printf("\a\a\a");
//     system("pause");
//     return 0;
// }

// // 函数练习
// int Add(int x, int y)
// {
//     int z = x + y;
//     return z;
// }
// int main()
// {
//     int num1;
//     int num2;
//     scanf("%d%d", &num1, &num2);
//     printf("%d\n", Add(num1, num2));
//     system("pause");
//     return 0;
// }

// //逻辑操作符
// int main()
// {
//     int a = 1;
//     int b = 2;
//     int c = a && b;//&&表示逻辑上的与，只有两者为真（！0）才为真，输出为1，否则0
//     int d = a || b;//||表示逻辑上的或，两者只要有一个真，输出为1，否则0
//     printf("%d\n", c);
//     printf("%d\n", d);
//     return 0;
// }

// // 三目操作符
// int main()
// {
//     // exp1 ? exp2 :exp3 判断1是否成立，成立则运行2，不成立则运行3，用于化简if else语句
//     int a = 1;
//     int b = 2;
//     // if (a < b)
//     //     Min = a;
//     // else
//     //     Min = b;
//     int Min = a < b ? a : b;
//     printf("%d\n", Min);
//     return 0;
// }

// // 逗号表达式
// int main()
// {
//     // 从左向右依次计算，最后一个表达式结果为赋值项
//     int a = 1;
//     int b = 2;
//     int c = 3;
//     int d = (a = b + 1, b = a + 2, c = b + 2);
//     printf("%d\n", d);
//     return 0;
// }

// static指令与进步理解局部变量
void test()
{
    // int a = 1;//每次执行test函数后，a都会被销毁，a永远为2
    static int a = 1;//添加static后，a不会被销毁，生命周期被继续保留，本质上是改变变量的存储类型，同时限制其只能在源文件中使用
    a++;
    printf("%d\n", a);
}

int main()
{
    int i = 0;
    while (i < 10)
    {
        test();
        i++;
    }
    system("pause");
}

// 从外部文件引用变量或者函数，需要声明
// extern int（声明变量类型）+（变量/函数）
// 例如：extern int Add(int x, int y) 注意需要声明：返回类型，函数名，参数类型
// 同时static也可以修饰函数，作用与修饰变量基本相同