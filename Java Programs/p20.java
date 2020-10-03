class Shanu extends Exception
{
    private int ab;
    public Shanu(int a)
    {
     ab = a;   
    }
    public String toString()
    {
        return "Shanu Exception [" + ab + "]";
    }
}
public class p20
{
    static void call(int a ) throws Shanu
    {
       System.out.println(" called funtion call with value " + a);
         if(a>10) throw new Shanu(a);
        System.out.println("Exited Normally");
    }
    public static void main(String[] args)
    {
        try {
            call(1);
            call(20);
            
        } catch(Shanu e) {
            System.out.println("Caught " + e);
        }

        
    }
}