import java.util.Scanner;
class p3
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        int m = in.nextInt();
        int array[] = new int[m];
        
        for(int f=0; f<array.length; f++)
        {
            int k = in.nextInt();
            array[f] = k;
        }
        System.out.println("Your array contains ");
        for(int g=0; g<array.length; g++)
        {
            System.out.println("array[" + g + "] is :" + array[g]);
        }
    }
}