using System;
class ATM {
  static void Main() 
  {
    int[] f = new int[1000002];
    int[] t = new int[1000002];
    int[] a = new int[200];
    int n,i,j,s;
    n = int.Parse(Console.ReadLine());
    string input = Console.ReadLine();
    char[] c = { ' ' };
    string[] arstr = input.Split(c, StringSplitOptions.RemoveEmptyEntries);
    for (i = 1; i <= n; i++)
    {
        a[i] = int.Parse(arstr[i-1]);
    }
    s = int.Parse(Console.ReadLine());
    a[0]=0;
    for (i=1;i<=s;i++)
    {f[i]=1000000000;}
    for (i=1;i<=s;i++)
    {
        for (j=1;j<=n;j++)
        if (i-a[j]>=0) 
        if (f[i]>f[i-a[j]]+1)
        {
            f[i]=f[i-a[j]]+1;
            t[i]=a[j];
        }
    }
    if(f[s]<1000000000)
    {
    Console.WriteLine(f[s]);
    while(s>0)
    {
        Console.Write(t[s]+" ");
        s=s-t[s];
    }
    } else Console.Write(-1);
    
  }
}
