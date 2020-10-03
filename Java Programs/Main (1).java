import person.employee.Manager;
import person.employee.Employee;
import java.util.ArrayList;
import java.util.Scanner;
public class Main 
{
    public static void main(String args[]) throws CloneNotSupportedException
    {
        Manager shanu = new Manager("Shanu",18,5.11,55.0,80000,1,2018,4000);
        System.out.println(shanu);
        Manager Sh = shanu.clone();
        System.out.println(Sh);
        
        
        ArrayList<Employee> staff = new ArrayList<>();
        
        staff.add(new Employee("himanshu",19,6.0,87.5,10000,2,2017));
        staff.add(new Employee("Sanchit ",19,6.0,60.0,20000,3,2017));
        staff.add(new Employee("Siddhant ",18,5.10,65.0,30000,4,2018));
        String s;
        double h,w;
        int sal,i,a,y;
        Scanner in = new Scanner(System.in);
        Employee hn = new Employee("hn",23,6.0,87.5,34567,2,2344);
        Employee bn = (Employee)hn.clone();
        System.out.println(bn);
        System.out.println("Enter The Employee Details :-");
        for(Employee e : staff)
        {
        System.out.println(e);
        }







    }
}