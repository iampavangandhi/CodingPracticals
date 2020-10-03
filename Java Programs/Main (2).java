import demo.File1;
import demo.File2;
public class Main
{
    public static void main(String[] args)
    {
        File1 file1 = new File1();
        File2 file2 = new File2();
        int o = file1.input();
        int result = file2.fibonnaci(o);
        
        
    }
}