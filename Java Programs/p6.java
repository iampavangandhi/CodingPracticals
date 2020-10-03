import java.util.Scanner;
class p6
{
    public static void main(String args[])
{
        Scanner in = new Scanner(System.in);
        System.out.println("This program reads a number n and checks whether it is a prime number or not\n");

        System.out.println("Enter an intger !");

        int n = in.nextInt();  
        if(n==1)
    
            System.out.println("1 is neither a prime nor a composite number");
    
        if(n<=0)
        {
            System.out.println("Enter a positive number ");
        }
    
    
        if(n==2||n==3||n==5||n==7||n==11)

        {
            System.out.println(" Is a prime number\n");
        }

        else if(n%2==0||n%3==0||n%5==0||n%7==0||n%11==0)
        {
            System.out.println(" Is  not  prime number\n");
        }
        else
            System.out.println(" Is a prime number\n");
	
    }
}
