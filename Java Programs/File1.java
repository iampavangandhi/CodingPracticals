package demo;
import java.util.Scanner;
public class File1
{
    private int n;
    public File1()
    {
        n =0;
    }
    public File1(int a)
    {
        this.n = a;
    }
    public int input()
    {
        Scanner in = new Scanner(System.in);
        System.out.println("Please input n: \n");
        n = in.nextInt();
        return n;
    }
    
}