/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class lckyst
{
	public static void main (String[] args) throws java.lang.Exception
	{
		try{
			BufferedReader input=new BufferedReader(new InputStreamReader(System.in));
			int t=Integer.parseInt(input.readLine());
			String line=input.readLine();
			String[] sarr=line.split("\\s+");
	
			for(int i=0;i<t;i++)
			{
				long ele=Integer.parseInt(sarr[i]);
				long fcount=0,tcount=0,temp=ele;
				while((temp%5)==0)
				{
					fcount++;
					temp/=5;
				}
				while((temp%2)==0)
				{
					tcount++;
					temp/=2;
				}
				if(fcount==0 || (fcount<=tcount))
				{
					System.out.println(ele);
				}
				else
				{
					fcount-=tcount-1;
					fcount/=2;
					long ans=ele*(long)(Math.pow(4,fcount));
					System.out.println(ans);
				}
				
				
			}
		}
		catch(Exception e)
		{
			return;
		}
	}
}