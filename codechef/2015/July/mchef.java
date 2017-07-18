import java.io.*;
import java.util.*;

class balance implements Comparable<balance>
{
	int rating_neg;
	int pos;
	int val;

	balance(int rat, int p)
	{
		rating_neg = rat;
		pos = p;
		val = 0;
	}
	public int compareTo(balance o) {
		int compval=((balance)o).val;
        /* For Ascending order*/
        return this.val-compval;
    }
}

class mchef {
	
	static long max(long a,long b)
	{
		if(a>b)
			return a;
		else
			return b;
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		try
		{
			MyScanner sc=new MyScanner();
			int t=sc.nextInt();
			int i,n,k,m;
			for(i=0;i<t;i++)
			{
				n=sc.nextInt();
				k=sc.nextInt();
				m=sc.nextInt();
				int j,h,ele;
				long sum = 0;
				ArrayList<balance> bal_arr=new ArrayList<balance>();
				for(j=0;j<n;j++)
				{
					ele=sc.nextInt();
					sum+=ele;
					if(ele<0)
					{
						balance obj=new balance((-1*ele),j);
						bal_arr.add(obj);					
					}
				}
				int judge_dem[]=new int[100000];
				Arrays.fill(judge_dem, 0);//need this shit gone for good
				int l,r,val;
				balance ob;
				for(j=0;j<m;j++)
				{
					l=sc.nextInt();
					r=sc.nextInt();
					l--;
					r--;
					val=sc.nextInt();
					for(h=l;h<=r;h++)
					{
						if(judge_dem[h]==0)
							judge_dem[h]=val;
						else if(judge_dem[h]>val)
							judge_dem[h]=val;
					}
				}
				//now begins the real game
				//spoiler, you'll make a lot of bugs from here.
				
				
				
				
				
				
				for(j=0;j<bal_arr.size();j++)
				{
					ob=bal_arr.get(j);
					ob.val=judge_dem[ob.pos];
					// need out of range neg_rating objects to simply fuck off
					if(ob.val==0 || ob.val>k)
					{
						bal_arr.remove(j);
						j--;
						continue;
					}					
					//System.out.println("pos: "+ob.pos+" || rating_neg: "+ob.rating_neg+" || val: "+ob.val);
				}
				//Collections.sort(bal_arr);
				// Work it out, maestro Akshay!
				long [][] knap=new long[bal_arr.size()+1][k+1];
				
			
				for (j = 0; j <=bal_arr.size(); j++)
				{
       				for (h=0;h<=k;h++)
       				{
						if (j==0 || h==0)
               			knap[j][h] = 0;
           				else if (bal_arr.get(j-1).val<=h)
                 		knap[j][h] = max(bal_arr.get(j-1).rating_neg + knap[j-1][h-bal_arr.get(j-1).val],  knap[j-1][h]);
           				else
                 		knap[j][h] = knap[j-1][h];
       				}
   				}
				
				//debug this shit
				/*
				for(j=0;j<=bal_arr.size();j++)
				{
					for(h=0;h<=k;h++)
					{
						System.out.print(knap[j][h]+" ");
					}
					System.out.println();
				}*/
				
				sum+=knap[bal_arr.size()][k];
				System.out.println(sum);
			}
		}
		catch(Exception e)
		{
			return;
		}
	}
	public static PrintWriter out;

	public static class MyScanner {
		BufferedReader br;
		StringTokenizer st;

		public MyScanner() {
			br = new BufferedReader(new InputStreamReader(System.in));
		}

		String next() {
			while (st == null || !st.hasMoreElements()) {
				try {
					st = new StringTokenizer(br.readLine());
				} catch (IOException e) {
					e.printStackTrace();
				}
			}
			return st.nextToken();
		}

		int nextInt() {
			return Integer.parseInt(next());
		}

		long nextLong() {
			return Long.parseLong(next());
		}

		double nextDouble() {
			return Double.parseDouble(next());
		}

		String nextLine() {
			String str = "";
			try {
				str = br.readLine();
			} catch (IOException e) {
				e.printStackTrace();
			}
			return str;
		}
	}

}
