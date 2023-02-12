//21.	Read a number. Do half of number after last odd digit of that number. Then result is multiplied by 3 as output.  Input 61389426 output 184167639 (61389213*3). Input 87 output 261. Input 78 output 222 (74*3).
# include<stdio.h>
# include<math.h>
void main()
{
   int a,r=0,s=0,c=0;
   scanf("%d",&a);
    while(a>0)
    {
        r=a%10;
      if(r%2==0)
        s=r*pow(10,c++)+s;
      else
        break;
        a=a/10;
    }
double g=(double) a*pow(10,c);
    printf("%d",(s));

}