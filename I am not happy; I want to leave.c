#include <stdio.h>
int main()
{
   int a[100], position, i, n;

   printf("Enter number of elements in array\n");
   scanf("%d", &n);

   printf("Enter the elements\n");

   for (i = 0; i < n; i++)
      scanf("%d", &a[i]);

   printf("Enter the position of element to delete\n");
   scanf("%d", &position);
   {
      for (i = position - 1; i <n - 1; i++)
         a[i] = a[i+1];

      for (i = 0; i < n - 1; i++)
         printf("%d\t", a[i]);
   }

   return 0;
}

