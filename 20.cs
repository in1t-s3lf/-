using System;
class HelloWorld {
  static void Main() 
  {
    int[,] a = new int[1000,1000];
    int[,] f = new int[1000,1000];
    int n,m,i,j;
    string input;
    char[] c = { ' ' };
    input = Console.ReadLine();
    string[] arstr = input.Split(c, StringSplitOptions.RemoveEmptyEntries);
    n = int.Parse(arstr[0]);
    m = int.Parse(arstr[1]);
    for(i=1;i<=n;i++)
    {
        input = Console.ReadLine();
        arstr = input.Split(c, StringSplitOptions.RemoveEmptyEntries);
        for(j=1;j<=m;j++) a[i,j]=int.Parse(arstr[j-1]);
    }
    for(i=1;i<=n;i++)
    for(j=1;j<=m;j++) f[i,j]=Math.Max(f[i-1,j],f[i,j-1])+a[i,j];
    Console.WriteLine(f[n,m]);
  }
}
