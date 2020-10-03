import java.lang.Integer;
import java.util.Scanner;
class p7
{
    public static void main(String args[])
    {
        int k = Integer.parseInt(args[0]);
        Scanner in = new Scanner(System.in);
        int array[] = new int[k];
        for(int i=0; i<k; i++)
        {
            int j = in.nextInt();
            array[i]=k;
        }
        int sum=0;
        for(int y=0; y<k; y++)
        {
            sum+=array[y];
        }
        
        System.out.println("Sum of number is " + sum );
    }
}