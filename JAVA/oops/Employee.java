public class Employee {
    int id;
    String firstName;
    String lastName;
    int salary;
    int Annualsalary;
    float raiseSalary;
    public Employee(int id, String firstName, String lastName, int salary) {
        this.id = id;
        this.firstName = firstName;
        this.lastName = lastName;
        this.salary = salary;
    }
    public int getID() {
        return id;
    }
    public String getFirstName() {
        return firstName;
    }
    public String getLastName() {
        return lastName;
    }      
    public int getSalary() {
        return salary;
    }
    public void setSalary(int salary) {
        this.salary = salary;
    }
    public String getName() {
        return  firstName +lastName;
    }
    public int getAnnualSalary() {
        Annualsalary= salary*12;
        return Annualsalary;
    }
    public int raiseSalary(int n){
        int raise = salary *n/100;
        this.salary=salary+raise;
        return this.salary;
        
    }
    public String toString() {
        return "Employee [firstName=" + firstName + ", id=" + id + ", lastName=" + lastName + ", salary=" + salary + "]";
    }
 
  
}    
    