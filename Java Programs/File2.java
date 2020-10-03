package demo;
import demo.File1;

public class File2
{
    private int t1,t2;
    public File2()
    {
        this.t1=0;
        this.t2=1;
    }
    public void fibonnaci(int m)
    {
        
 for (int i = 1; i <= m; ++i)
        {
            System.out.print(t1 + " + ");

            int sum = t1 + t2;
            t1 = t2;
            t2 = sum;
        }
        //return sum;
    }
    
    
}