import java.util.*;
import java.io.*;

/**
 *
 * @author Akshay
 */
class chcube {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        try {
            int test_cases;
            BufferedReader inv = new BufferedReader(new InputStreamReader(System.in));
            test_cases = Integer.parseInt(inv.readLine());
            
            for (int i = 0; i < test_cases; i++) {
                String sa = inv.readLine();
                String[] df = sa.split("\\s+");
                int blue,black,green,yellow,red,orange,mxcount;
                blue=black=green=yellow=red=orange=mxcount=0;
                /*for(int j=0;j<6;j++)
                {
                    System.out.println(df[j]);
                }*/
                for(int j=0;j<6;j++)
                {
                    if (df[j].equals("blue"))
                    {
                        blue++;
                        if(blue>mxcount)
                            mxcount++;
                    }
                    else if (df[j].equals("black"))
                    {
                        black++;
                        if(black>mxcount)
                            mxcount++;
                    }
                    else if (df[j].equals("red"))
                    {
                        red++;
                        if(red>mxcount)
                            mxcount++;
                    }
                    else if (df[j].equals("yellow"))
                    {
                        yellow++;
                        if(yellow>mxcount)
                            mxcount++;
                    }
                    else if (df[j].equals("green"))
                    {
                        green++;
                        if(green>mxcount)
                            mxcount++;
                    }
                    else{
                        orange++;
                        if(orange>mxcount)
                            mxcount++;
                    }
                }
                if(mxcount<3)
                    System.out.println("NO");
                else if(mxcount==3)
                {
                    if(df[0].equals(df[1])||df[2].equals(df[3])||df[4].equals(df[5]))
                        System.out.println("NO");
                    else
                        System.out.println("YES");
                }
                else if(mxcount==4)
                {
                    boolean one=(df[0].equals(df[1])&&df[1].equals(df[2])&&df[2].equals(df[3]));
                    boolean two=(df[0].equals(df[1])&&df[1].equals(df[4])&&df[4].equals(df[5]));
                    boolean three=(df[4].equals(df[5])&&df[4].equals(df[2])&&df[2].equals(df[3]));
                    if(one||two||three)
                    {
                        System.out.println("NO");
                    }
                    else
                    {
                        System.out.println("YES");
                    }    
                }
                else
                {
                    System.out.println("YES");
                }
            }
        } catch (Exception e) {
            return;
        }
    }

}
