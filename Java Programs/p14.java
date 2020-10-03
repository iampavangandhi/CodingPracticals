import java.io.*;
class p14
{
    public static void main(String[] args)
    {
        Integer i = new Integer(10);

        int i1 = i                  // unboxing converting from object of wraper class to its primitive type
        System.out.println(" i is " + i);
        System.out.println("i1 is " + i1);

        char a = 's';
        Character sh = a;    / / autoboxing converting form priitive type to object of corresponding wrapper class
        System.out.println(" a is " + a);
        System.out.println("sh is " + sh);

         //
    }
}