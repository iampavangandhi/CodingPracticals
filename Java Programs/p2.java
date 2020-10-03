import java.util.Scanner;
class p2
{
   
     public int factorial(int m)
        {
            if(m==1)
                return 1;
            else
                return (m*factorial(m-1));
        }
   
    public static void main(String args[])
    {
        
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        p2 s1 = new p2();
       int fac = s1.factorial(n);
        System.out.println("Factorial of " + n + " is " + fac );
        
    }
}