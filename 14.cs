using System;
class PLadder {
  static void Main() 
  {
    long[] f = new long[10000];
    long[] a = new long[10000];
    int n,i;
    n = int.Parse(Console.ReadLine());
    string input = Console.ReadLine();
    char[] c = { ' ' };
    string[] arstr = input.Split(c, StringSplitOptions.RemoveEmptyEntries);
    for (i = 1; i <= n; i++)
    {
        a[i] = int.Parse(arstr[i-1]);
    }
    f[1]=a[1];f[2]=a[2];
    for (i=3;i<=n;i++)
    {
        f[i]=Math.Min(f[i-1],f[i-2])+a[i];
    }
    Console.Write(f[n]);
  }
}
