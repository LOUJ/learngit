#include <stdio.h >
void main()
{
  printf("please enter the command\n ");
  char c[10];
  scanf ("%s",c);
  int i,sign=1;
  char a[10],d[10];int b;
  for(i=0;i<=10;i++)
{
    if(sign==1)
    {
         a[i]=c[i];
    }

   if (c[i]==' ')
    {
       sign++;

    }

     if (sign==2)
         {
            b=c[i];

         }
  if (sign==3)
  {
      d[i]=c[i];
  }
  }



  printf("%s,%d,%s",a,d,b);
}
  /*
  char str1="LED 1 ON";

  char str2="LED1 OFF";
  char str3="LED2 ON";
  char str4="LED2 OFF";
  if (strcmp (c, str1)==0)
  {LPLD_GPIO_Output_b(PTE,26,1);
   printf("LED1 is on");
  }
  if (strcmp (c, str2)==0)
  {
    LPLD_GPIO_Output_b(PTE,26,0);
    printf("LED1 is off");
  }
  if (strcmp (c, str3)==0)
  { LPLD_GPIO_Output_b(PTE,27,1);
    printf("LED2 is on");
  }
  if (strcmp (c, str3)==1)
  {LPLD_GPIO_Output_b(PTE,27,0);
   printf("LED2 is off");
  }
    */


