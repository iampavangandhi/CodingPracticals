import java.util.Scanner;
class Distance
{
        int length;
     Distance(){
         this.length=0;
     }
     Distance(int len){
         this.length = len;
     }
     void lengthCalculate(Distance a){

         int feet,inch;
         double len = 3.28084*a.length;
          feet = (int)len;
          inch = (int)((len-feet)*100)/12;
         System.out.print("Distance is " + feet + " feet and " + inch + " inches");
         System.out.println();
     }

     void inputLength(){
         Scanner in = new Scanner(System.in);
         System.out.println("Enter the length in meter to convert it into feet and inches : ");
         this.length = in.nextInt();

     }


     public static void main(String[] args){
         Distance a = new Distance();
         a.inputLength();
        a.lengthCalculate(a);
     }
}

