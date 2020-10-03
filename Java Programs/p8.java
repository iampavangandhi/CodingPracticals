import java.util.Scanner;
import java.lang.StringBuffer;
class p8
{
    public static void main(String args[])
    {
        StringBuffer str1 = new StringBuffer();
        Scanner in = new Scanner(System.in);
        str1.append(in.nextLine());
        StringBuffer str2 = new StringBuffer();
        str2.append(in.nextLine());
        System.out.println("First string is : " + str1);
        System.out.println("Second string is : " + str2);
        System.out.println("Afte append() is called for str1 new str1 is   :    " + str1.append(str2));
        StringBuffer str3 = new StringBuffer();
        System.out.println("After conat() is Caller For Str3 :      " + str3.append(str1).append(str2));
        int len1 = str1.length();
        int len2 = str2.length();
        int len3 = str3.length();
        System.out.println("Enter the  position and character you want to insert at str 1 :\n");
        char inst = in.next().charAt(0);
        int pos = in.nextInt();
        System.out.println("New Str1 is :" + str1.insert(pos-1,inst));
        
    }
}