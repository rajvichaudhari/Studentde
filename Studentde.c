package studentde;


public class Studentde 
{
    public static void main(String[] args) 
    {
        Student1 students[]=new Student1[4];
        students[0]=new Student1("rajvi",21);
        students[1]=new Student1("rajvi1",20);
        students[2]=new Student1("rajvi2",23);
        students[3]=new Student1("rajvi3",23);
        
        for(int i=0;i<students.length;i++)
        {
            System.out.println("name: "+students[i].name +" , age:"+students[i].age);
        }
    }
    
}
class Student1
{
    String name;
    int age;
    
    public Student1 ( String name , int age )
    {
        this.name=name;
        this.age=age;
    }
            
}
