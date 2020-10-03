class StaticDemo
{
    static int a =50;
    static int b = 60;
    static void display()
    {
        System.out.println("intitially a is "+ a + " and b is " + b);
    }

    static int sum()
    {
        return a+b;
    }

}
class VarArgsDemo
{
    static void fun(int ...a)
    {
        System.out.println("Total number of arguments passed was " + a.length);
        for(int i:a)
        {
            System.out.println(" agruments are " + i);
        }
        System.out.println();
    }
}
class p13
{
        public static void main(String[] args)
    {
        System.out.println();
        StaticDemo.display();
        System.out.println("After the static function sum was called sum of a and b is " + StaticDemo.sum());
        System.out.println("afte function with variable length argument was called ");
        VarArgsDemo.fun(2,5,69,8,7,6,2,5,5,52,58,8,5,4);
    }
}