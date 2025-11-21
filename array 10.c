
 //dot with neighbour
 #include <stdio.h>

   int main ()
   {
       int i, n;

       printf ("Enter your array size\n");
       scanf ("%d" , &n);

       int arr1[n], arr2[n];

       printf ("Enter your array\n");
       for (i=0; i<n; i++)
       {
           scanf("%d", &arr1[i]);
       }
       printf ("After creating neighbour dot product array\n\n");
       for (i=0; i<n; i++)
       {
           if (i==0)
            arr2[i]= arr1[i] *arr1[i+1];
           else if (i==n-1)
            arr2[i]= arr1[i] *arr1[i-1];
           else
            arr2[i]= arr1[i-1] *arr1[i+1];
       }
       for (i=0; i<n; i++)
       {
           printf ("%d, ", arr2[i]);
       }
   }
