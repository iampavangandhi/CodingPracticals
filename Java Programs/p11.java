class p11
{
    void sum_one(int n, int m)
    {
        System.out.print("Sum of Numbers are " + (n+m));
    }
    void sum_one(double i)
    {
        System.out.println("Double  : " + i);
    }
    public static void main(String[] args)
    {
        p11 test = new p11();
        int i=10;
        System.out.println("int implicitly got converted to double and funtion with double type parameter was called");
        test.sum_one(i);

        test.sum_one(20,30);
        System.out.println();
}
}