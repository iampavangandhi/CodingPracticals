import java.util.Scanner;
class p4
{
	public static void main(String[] args)
	{
		int matr[][] = new int[3][3];
		Scanner in = new Scanner(System.in);
		System.out.println("Please Enter The elements of a matrix :-\n");
		for(int i=0; i<3; i++)
		{
			for(int j=0; j<3; j++)
				{
					System.out.print("a[" + i + "]" + "[" + j + "] ");
					int k = in.nextInt();
					matr[i][j]=k;
				}
		}
		System.out.println("The Matrix You Have entered is :-\n");
		for(int i=0; i<3; i++)
		{
			for(int j=0; j<3; j++)
				{
					System.out.print(matr[i][j] + " ");
				}
		System.out.println(" ");
		}
	}
}
					
