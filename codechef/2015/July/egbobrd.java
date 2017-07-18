/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		try
		{
			int t;
			BufferedReader inp=new BufferedReader(new InputStreamReader(System.in));
			t=Integer.parseInt(inp.readLine());
			int i,j,n;
			long k;
			for(j=0;j<t;j++)
			{
				String fline=inp.readLine();
				String[] fl=fline.split("\\s+");
				n=Integer.parseInt(fl[0]);
				k=Integer.parseInt(fl[1]);
				String sline=inp.readLine();
				String[] ai=sline.split("\\s+");
				int pack=1;
				long bal=k;
				for(i=0;i<n-1;i++)
				{
					int ele=Integer.parseInt(ai[i]);
					if(ele>bal)
					{
						ele-=bal;
						pack++;
						pack+=ele/k;
						
						bal=k-(ele%k);
						if((ele%k)!=0)
						bal--;
					}
					else if(ele==bal)
					{
						pack++;
						bal=k;
					}
					else if(ele==(bal-1))
					{
						pack++;
						bal=k;
					}
					else
					{
						bal-=ele+1;
					}
				}
				int el=Integer.parseInt(ai[n-1]);
				if(el>bal)
				{
					//System.out.println("pack hai abhi "+pack+" bal hai "+bal); //Bhenchod, Debugging :p
					if(bal!=k)
					{
						el-=bal;
						pack+=(el/k);
					}
					else pack+=(el/k)-1;
					if(el%k!=0)
					pack++;
					//System.out.println(el+"\t"+k);
				}
				System.out.println(pack);
			}
		}
		catch (Exception e)
		{
			return;
		}
	}
}