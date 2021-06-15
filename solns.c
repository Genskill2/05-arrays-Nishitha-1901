/* Enter your solutions in this file */
#include <stdio.h>

int max (int a[], int n)
{
  int maxn=a[0];
  for (int i=1;i<n;i++)
  {
      if(a[i]>maxn)
      {
        maxn=a[i];
      }
  }
  return maxn;
}

int min (int a[],int n)
{
  int minn=a[0];
  for (int i=1;i<n;i++)
  {
      if(a[i]<minn)
      {
        minn=a[i];
      }
  }
  return minn;
}


