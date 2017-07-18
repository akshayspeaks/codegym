/* package whatever; // don't place package name! */

import java.util.Scanner;
import java.io.*;


class Ideone
{
	public static Boolean isPrime(int num){
    if(num==2){
      return(true);
    }
    for(int i=2;i<=(int)Math.sqrt(num)+1;i++){ 
      if(num%i==0){ 
        return(false);
      }
    }
    return(true); 
  }
	
	
	
	
	public static void main (String[] args) throws java.lang.Exception
	{
		try
		{
		int t,n,k,j,ele,sum,count;
		Scanner in=new Scanner(System.in);
		t=in.nextInt();
		for(int i=0;i<t;i++)
		{
			int[] arr=new int[100000];
			sum=0;
			n=in.nextInt();
			for(k=0;k<n;k++)
			{
			ele=in.nextInt();
			for(j=2;j<=ele;j++)
			{
				if(isPrime(j))
				{
					count=0;
					while(ele%j==0)
					{
						count++;
						ele=ele/j;
					}
					
					if (arr[j]<count)
					{
						sum+=count-arr[j];
						arr[j]=count;
					}
				}
			}
			
			}
			System.out.println(sum);
		}
	}
	catch(Exception e)
	{
		return;
	}
	}
}