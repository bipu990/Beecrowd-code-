 #include <stdio.h>
 int main()
 {
     int x,a;
     float b;
     scanf ("%d %d %f",&x,&a,&b);
     int y,c;
     float d;
     scanf ("%d %d %f",&y,&c,&d);
     
     float m=(a*b)+(c*d);
     
     printf ("VALOR A PAGAR: R$ %.2f\n",m);
     
     return 0;
 }
