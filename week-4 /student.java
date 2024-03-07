double semPercentage;
    String collegeName;
    int collegeCode;
    Student65()
    {
      System.out.println("Student class is created successfully!!\nIam a student\n");
    }
    protected void finalize() throws Throwable
    {
      System.out.println("The class is finalized\n");
    }
}

public class Student
{
  public static void main(String[] args)
  {
    Student65 sanjana=new Student65();;
    Scanner input=new Scanner(System.in);
    System.out.print("Enter your name : ");
    sanjana.fullName=input.nextLine();
    System.out.print("Enter your rollNumber : ");
    sanjana.rollNum=input.nextInt();
    System.out.print("Enter your semPercentage : ");
    sanjana.semPercentage=input.nextDouble();
    input.nextLine();
    System.out.print("Enter your collegeName : ");
    sanjana.collegeName=input.nextLine();
    System.out.print("Enter your collegeCode : ");
    sanjana.collegeCode=input.nextInt();
    System.out.print("Name : "+sanjana.fullName+"\n");
    System.out.print("RollNumber : "+sanjana.rollNum+"\n");
    System.out.print("SemPercentage : "+sanjana.semPercentage+"\n");
    System.out.print("CollegeName : "+sanjana.collegeName+"\n");
    System.out.print("CollegeCode : "+sanjana.collegeCode+"\n");
    input.close();
  }
}
