using System;
namespace Sorting_algo
{
    class Program
    {
        static long caculate(long i,long[] a)
        {
            if(a[i]!=0) 
            {return(a[i]);}
            else 
            if(i%2==0) 
            {a[i]=caculate(i/2,a)+1;}
            else 
            {a[i]=caculate(i+1,a) + caculate((i-1)/2,a);}
            return(a[i]);
        }
        static void Main(string[] args)
        {
            long n,i;
            n = long.Parse(Console.ReadLine());
            long[]a = new long[200000];
            a[0] = 1;a[1]=1;
            Console.WriteLine(caculate(n,a));
        }
    }
}
