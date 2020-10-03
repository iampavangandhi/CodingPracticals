import java.util.Scanner;
class p19
{
    public static void main(String[] args)
    {
        int arr[] = new int[10];
        int a,b;
        Scanner in = new Scanner(System.in);
        System.out.print("Please input a and b");
        a = in.nextInt();
        b = in.nextInt();
        /*double s,y;
        s = in.nextDouble();
        y = in.nextDouble();
        */
        try
        {
            //arr[a]=s;
            //arr[b]=b;
            
            try
            {
                arr[a] = a;
                arr[b] = b;
                int result = arr[a]/arr[b];
                System.out.println(result);
            }
            catch(ArrayIndexOutOfBoundsException e)
            {
                System.out.println("a or b is out of index since the max index is  " + e);
            }

        }
        catch(ArrayStoreException ex)
        {
            System.out.println("Strings cannot be assigned to int arrays " + ex);
        }
        catch(ArithmeticException exc)
        {
            System.out.println("Division by zero occured " + exc);
        }
    }
}