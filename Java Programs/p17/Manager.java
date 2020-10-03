package person.employee;
import person.employee.Employee;
public final class Manager extends Employee implements Cloneable
{
    private int bonus;
    public Manager()
    {
        super();
        //this(0);
    }
    public Manager(String name, int age, double height, double weight, int salary, int id, int year, int bonus)
    {
        super(name,age,height,weight,salary,id,year);
        this.bonus = bonus;
    }
    public void setBonus(int bonus)
    {
        this.bonus = bonus;
    }
    public int getBonus()
    {
        return bonus;
    }
    public int getSalary()
    {
        int baseSalary = super.getSalary();
        return baseSalary+bonus;
    }
    public boolean equals(Object o)
    {
        if(!super.equals(o)) return false;
        Manager m = (Manager) o;
        return bonus==m.bonus;
    }
    public String toString()
    {
        return String.format(super.toString() + "Bonus: " + bonus + "\n");
    }
    public Manager clone() throws CloneNotSupportedException
    {
        Manager m = (Manager)super.clone();
        m.bonus = this.bonus;
        return m;
    }
    
}