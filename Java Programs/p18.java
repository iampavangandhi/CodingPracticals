import java.util.Scanner;
public class p18
{
    public static void main(String[] args)
    {
        int a,b;
        System.out.println("Input a and b ");
        Scanner in = new Scanner(System.in);
        a = in.nextInt();
        b = in.nextInt();
        int result;
        
        try
        {
            result = a/b;
            System.out.println("Result is "+ result);
        }
        catch(ArithmeticException e)
        {
            System.out.println("Division by zero occured : ");
        }
    }
}