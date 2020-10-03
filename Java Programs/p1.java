import java.lang.Integer;
class p1
{
    public static void main(String[] args)
    {
        int num=0;
        for(int i=0; i<args.length; i++)
        {
            num+=Integer.parseInt(args[i]);
        }
        System.out.print("sum of numbers entered as command line arguments is :       "  + num );
        System.out.println("");
    }
    
}