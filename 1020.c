 #include <stdio.h>
 int main()
 {
     int x;
     scanf ("%d",&x);
     
     int m=x/365;
     int n=x%365;
     int p=n/30;
     int a=n%30;
     
     printf ("%d ano(s)\n%d mes(es)\n%d dia(s)\n",m,p,a);
     
     return 0;
 }
