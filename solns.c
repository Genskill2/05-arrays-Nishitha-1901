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

float average (int a[] , int n)
{
  int sum=0;
  for (int i=0;i<n;i++)
  {
    sum+=a[i];
  }
  return (sum/n);
}


int mode (int a[], int n)
{
  int mv=0,mc=0,c=0;
  for (int i=0;i<n;i++)
  {
    c=0;
    for (int j=0;j<n;j++)
    {
      if (a[i]==a[j])
      {
        c++;
      }
    }
    if (c>mc)
    {
      mc=c;
      mv=a[i];
    }
  }
  return mv;
}


int factors (int num, int b[])
{
  int c=0;int count=0;
  while (num%2==0)
  {
    b[c]=0;c++;num/=2;
    count++;
  }
  for (int i=0;i<num/2 ;i+=2)
  {
    while (num%i==0)
    {
      b[c]=i;c++;num/=i;
      count++;
    }
  }
  return count;
}

  



