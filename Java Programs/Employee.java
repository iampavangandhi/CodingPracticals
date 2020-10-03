package person.employee;
import person.Person;
public class Employee extends Person implements Cloneable 
{
    private int salary,id,year;

    public Employee()
    {
        super();
        //this(0,0,0);
    }
    public Employee(String name, int age, double height, double weight, int salary, int id, int year)
    {
        super(name,age,height,weight);
        this.salary = salary;
        this.id = id;
        this.year = year;
    }
    public void setSalary(int salary)
    {
        this.salary = salary;
    }
    public void setId(int id)
    {
        this.id = id;
    }
    public void setYear(int year)
    {
        this.year = year;
    }
    public int getSalary()
    {
        return salary;
    }
    public int getId()
    {
        return id;
    }
    public int getYear()
    {
        return year;
    }
    public void raseSalary(double percent)
    {
        double raise = salary*percent/100;
        salary += raise;
    }
    public boolean equals(Object o)
    {
        if(this == o) return true;
        if(o == null) return false;
        if(getClass() != o.getClass()) return false;
        Employee e = (Employee) o;
        return name.equals(e.name) && age == e.age && height ==e.height && weight == e.weight &&salary == e.salary && id ==e.id && year == e.year;

    }
    public String toString()
    {
        return String.format(super.toString() + "Salary : " + salary + "\n" + "Employee Id :  " + id + "\n" + "Year of Join :  " + year + "\n");
    }
    public Employee clone() throws CloneNotSupportedException
    {
        Employee e1 = (Employee)super.clone();
        e1.name = this.name;
        e1.salary = this.salary;
        e1.id = this.id;
        e1.year = this. year;
        return e1;
    }
}