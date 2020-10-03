import demo.DemoPackage;
public class Main
{
    public static void main(String[] args)
    {
        DemoPackage demo =  new DemoPackage();
        
        System.out.println("This string is from another file : " + demo.input());
    }
}