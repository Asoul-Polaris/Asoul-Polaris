#include <stdio.h>
#include <stdlib.h>

// // define定义宏
// #define Add(x, y) (x + y)//define定义的宏起到替代作用，并不会优先计算，所以可以通过添加（）起到优先计算的作用

// int main() 
// {
//     printf("%d\n", 4 * Add(1, 2));
//     return 0;
// }

// 指针基础认识
// int main()
// {
//     int a = 10;//整形占据4个字节（内存单元）
//     printf("%p\n", &a);//%p专用于打印地址
//     int *pa = &a;//pa用于储存a的地址，即指针变量，int表明a的类型，*表明指针
//     *pa = 20;//*pa指向了a的地址，从而修改了a的值，称之为解引用
//     printf("%d\n", a);
//     printf("%d\n", sizeof(int*));//无论何种类型的指针，其大小都相同，因为存放的地址大小是相同的，32位平台为4，64位平台为8
//     return 0;
// }

// //结构体
// struct student
// {
//     char name[10];
//     int age;
// };

// int main()
// {
//     struct student A = {"cui", 22};//注意格式，每次都要调用
//     printf("name = %s\nage = %d\n", A.name, A.age);
//     return 0;
// }

// // if else注意事项
// int main()
// {
//     int age = 17;
//     if (age <= 18)
//     {
//         printf("未成年\n");
//     }
//     else if (age > 18 && age < 35)//逻辑上的并不可以用18<age<35，代码会优先从左向右执行,出现0或1，导致结果永远为真
//     {
//         printf("可以上班\n");
//     }
//     else//存在多个if else语句嵌套时，遵循就近原则而非缩进
//     {
//         printf("K48\n");//{}作为一个控制块，如果不存在，则只执行第一条命令
//         printf("K48\n");
//     }
//     return 0;
// }

// 另一种写法
// int main()
// {
//     if (1)
//     {
//         printf("%d\n", 1);
//     }
//     printf("%d\n", 2);

//     return 0;
// }

// // 判断一个数是不是奇数，输出0——100的所有奇数
// int main()
// {
//     int i = 0;
//     while (i < 101)
//     {
//         if (i % 2 == 1)
//         {
//             printf("%d\n", i);
//         }
//         i++;
//     }
//     return 0;
// }

// //switch语法
// int main()
// {
//     int day;
//     scanf("%d", &day);
//     switch (day)
//     {
//     case 1://case后必须是整形常量
//         printf("星期一");
//         break;
//     case 2://case后必须是整形常量
//         printf("星期二");
//         break;
    
//     default://无法匹配时的默认输出
//         printf("输入错误");
//         break;
//     }
//     return 0;
// }
