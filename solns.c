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


int factors (int n, int a[])
{
  int c=0;
  while (n%2==0)
  {
    a[c]=0;c++;
  }
  for (int i=0;i<n/2 ;i+=2)
  {
    while (n%i==0)
    {
      a[c]=i;c++;
    }
  }
  return a;
}

  

void main ()
{
  max ( a,  n);
  min ( a,  n);
  average ( a,  n);
  mode ( a,  n);
  factors (n , a);
}


