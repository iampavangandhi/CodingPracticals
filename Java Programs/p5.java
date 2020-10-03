import java.util.Scanner;
import java.lang.Math;
class p5
{
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		System.out.print("Enter the number to convert to binary :- \n");		
		int k = in.nextInt();
		int s=0;
		for(int y=0; y<15; y++)
		{
			if(k<java.lang.Math.pow(2, y))
			{
				s = y;
				break;
			}
		}
			
		int m[] = new int[s];
		for(int i=0; i<s; i++)
		{
			m[s-i-1] = k%2;
			k=k/2;
		}

		for(int j=0; j<m.length; j++)
		{
			System.out.print(m[j]);
		}		
	}
}

