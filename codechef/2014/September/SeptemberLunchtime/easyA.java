/* package whatever; // don't place package name! */

import java.util.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args)
	{
		try
		{
		int T;
		Scanner in=new Scanner(System.in);
		T=in.nextInt();
		for(int i=0;i<T;i++)
		{
			long[] arr= new long[100000];
			int n,j;
			long sum=0;
			n=in.nextInt();
			for(j=99999;j>99999-n;j--)
			{
				arr[j]=in.nextInt();
				//System.out.println(arr[j]);
			}
			Arrays.sort(arr);
			for(j=99999;j>=99999-n;j-=2)
			sum+=arr[j];
			System.out.println(sum);
		}
	}
	catch(Exception e)
	{
		return;
	}
	}
}