/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws IOException
	{
		try
		{
			int T,i;
			char ch;
			BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
			T=Integer.parseInt(in.readLine());
			//String str=in.readLine();
			for(i=0;i<T;i++)
			{
				int fl=0;
				String str=in.readLine();
				for(int j=0;j<str.length()-2;j++)
				{
					if(str.substring(j,j+3).equals("010")||str.substring(j,j+3).equals("101"))
					{
						System.out.println("Good");
						fl=1;
						break;
					}
				}
				if(fl==0)
					System.out.println("Bad");
			}
		}
		catch(Exception e)
		{
			return;
		}
	}
}