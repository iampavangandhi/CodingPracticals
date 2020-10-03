package person;

public abstract class Person implements Cloneable
{
    protected String name;
    protected int age;
    protected double height;
    protected double weight;

    public Person()
    {
        this("",0,0,0);
    }
    public Person(String name, int age, double height, double weight)
    {
        this.name = name;
        this.age = age;
        this.height = height;
        this.weight = weight;
    }
    public Object clone() throws CloneNotSupportedException
    {
        return (Object)super.clone();
    }

    public String getName()
    {
        return name;
    }
    public int getAge()
    {
        return age;
    }
    public double getHeight()
    {
        return height;
    }
    public double getWeight()
    {
        return weight;
    }
    public void setName(String name)
    {
        this.name = name;
    }
    public void setAge(int age)
    {
        this.age = age;
    }
    public void setWeight(double weight)
    {
        this.weight = weight;
    }
    public void setHeight(double height)
    {
        this.height = height;
    }
    public abstract boolean equals(Object o);
    public String toString()
    {
        return String.format("Name : " + name + "\n" + "Age: " + age + "\n" + "Weight :  " + weight + "\n" + "Height:  " + height + "\n");
    }
    


}