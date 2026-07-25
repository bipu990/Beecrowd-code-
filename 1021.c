#include <stdio.h>
int main ()
{
    float x;
    scanf ("%f",&x);
    
    int y=(int)x;
    
    printf ("NOTAS:\n");
    
    int a = y / 100;
    printf ("%d nota(s) de R$ 100.00\n",a);
    int b = y % 100;
    int c = b / 50;
    printf ("%d nota(s) de R$ 50.00\n",c);
    int d = b % 50;
    int e = d / 20;
    printf ("%d nota(s) de R$ 20.00\n",e);
    int f = d % 20;
    int g = f / 10;
    printf ("%d nota(s) de R$ 10.00\n",g);
    int h = f % 10;
    int i = h / 5;
    printf ("%d nota(s) de R$ 5.00\n",i);
    int j = h % 5;
    int k = j / 2;
    printf ("%d nota(s) de R$ 2.00\n",k);
    
    printf ("MOEDAS:\n");
    
    float z=x-y;
    int coin = (int)(z*100+0.5);
    
    int l = j % 2;
    int m = l / 1;
    printf ("%d moeda(s) de R$ 1.00\n",m);
    
    int n = coin / 50;
    printf("%d moeda(s) de R$ 0.50\n", n);
    coin = coin % 50;
    
    int q = coin / 25;
    printf("%d moeda(s) de R$ 0.25\n", q);
    coin = coin % 25;
    
    int s = coin / 10;
    printf("%d moeda(s) de R$ 0.10\n", s);
    coin = coin % 10;
    
    int u = coin / 5;
    printf("%d moeda(s) de R$ 0.05\n", u);
    coin = coin % 5;
    
    int w = coin;
    printf("%d moeda(s) de R$ 0.01\n", w);
    
    return 0;
}

// 1. float সংখ্যা Computer binary-তে সংরক্ষণ করে。
// 2. 0.73, 0.30, 0.10 এর মতো অনেক decimal সংখ্যা binary-তে ঠিকভাবে সংরক্ষণ করা যায় না।
// 3. তাই 0.73 memory-তে 0.72999999 বা 0.73000002 হতে পারে।
// 4. Computer-এর গুণে কোনো ভুল হয় না। ভুলটা শুরুতেই float-এর মানে থাকে।
// 5. Coin বের করার আগে decimal অংশকে cent-এ রূপান্তর করতে 100 দিয়ে গুণ করি।
//    যেমন: 0.73 × 100 = 73
// 6. কিন্তু floating-point error-এর কারণে ফল 72.999999 হতে পারে।
// 7. (int) করলে দশমিকের অংশ কেটে যায়।
//    যেমন: (int)72.999999 = 72 (ভুল)
// 8. তাই (int) করার আগে +0.5 যোগ করা হয়।
//    যেমন: 72.999999 + 0.5 = 73.499999
//          (int)73.499999 = 73 (সঠিক)
// 9. +0.5 মূলত floating-point error এড়ানোর জন্য ব্যবহার করা হয়।
// 10. এরপর integer হওয়ায় / এবং % ব্যবহার করে সহজে coin বের করা যায়。
// 11. % (modulus) operator শুধুমাত্র integer (int, long, etc.)-এর জন্য।
// 12. float বা double-এর সাথে % ব্যবহার করা যায় না।
//     যেমন:
//     10 % 3      // সঠিক
//     10.5 % 3    // ভুল
//     0.73 % 0.50 // ভুল
// 13. যদি float-এর remainder বের করতে হয়, তাহলে math.h-এর fmod() function ব্যবহার করতে হয়।
//     যেমন: fmod(0.73, 0.50)
