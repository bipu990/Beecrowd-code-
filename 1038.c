#include <stdio.h>
int main ()
{
    int x;
    float y;
    scanf ("%d %f",&x,&y);
    
    switch (x)
    {
        case 1:
            float total = y*4.0;
            printf ("Total: R$ %.2f\n",total);
            break ;
        case 2:
            float total = y*4.5;
            printf ("Total: R$ %.2f\n",total);
            break ;
        case 3:
            float total = y*5.0;
            printf ("Total: R$ %.2f\n",total);
            break ;
        case 4:
            float total = y*2.0;
            printf ("Total: R$ %.2f\n",total);
            break ;
        case 5:
            float total = y*1.5;
            printf ("Total: R$ %.2f\n",total);
            break ;
    }
    
    return 0;

    // ================= SWITCH-CASE NOTES =================

// 1. switch(variable) এর variable অনুযায়ী কোন case execute হবে তা নির্ধারণ হয়.
//    উদাহরণ:
//    switch(x)
//    case 1:  -> x == 1 হলে execute হবে
//    case 2:  -> x == 2 হলে execute হবে

// 2. case এর পরে সবসময় constant value দিতে হয়.
//    সঠিক:
//    case 1:
//    case 5:
//    case 'A':
//
//    ভুল:
//    case x > 5:
//    case y == 10:

// 3. প্রতিটি case এর শেষে সাধারণত break; ব্যবহার করতে হয়.
//    break না দিলে পরের case-এও execute হবে (Fall Through).

// 4. case এর ভিতরে শুধু statement থাকলে {} (curly braces) না দিলেও হয়.
//
//    উদাহরণ:
//    case 1:
//        printf("Hello");
//        break;

// 5. কিন্তু case এর ভিতরে নতুন variable declare করলে {} ব্যবহার করা উচিত.
//
//    সঠিক:
//    case 1:
//    {
//        int a = 10;
//        printf("%d", a);
//        break;
//    }

// 6. {} ব্যবহার করার কারণ:
//    switch-এর সব case একই scope-এ থাকে.
//    তাই case-এর ভিতরে নতুন variable declare করলে compiler error দিতে পারে.
//    {} নতুন scope তৈরি করে, তাই error হয় না.

// 7. যদি {} ব্যবহার করতে না চাও,
//    তাহলে variable switch-এর আগে declare করো.
//
//    উদাহরণ:
//
//    int a;
//
//    switch(x)
//    {
//        case 1:
//            a = 10;
//            break;
//    }

// 8. default case optional.
//    কোনো case match না করলে default execute হয়.
//
//    default:
//        printf("Invalid");
//        break;
}
