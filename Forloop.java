import java.util.Scanner;
public class Forloop {
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);

        int N=scan.nextInt();
        double average=0.0;
        int highestscore=Integer.MIN_VALUE;
        int passed=0;
        int failed=0;
        double totalscore=0.0;
        

        for(int i=0;i<N;i++){
            String studentname=scan.next();
            int score=scan.nextInt();
            String grade="";
            

            if(score>=85){
                grade="A";
            }
            else if(score>=70){
                grade="B";
            }
            else if(score>=60){
                grade="C";
            }
            else if(score>=50){
                grade="D";
            }
            else if(score>=0){
                grade="F";
            }

            String status="";
            if(score>=60){
                status="Pass";
            }
            else if(score<60){
                status="Fail";
            }
            
            if(status.equals("Pass")){
                passed++;
            }
            else{
                failed++;
            }


            totalscore+=score;
            highestscore=Math.max(highestscore,score);

            System.out.println("Studentname:"+studentname);
            System.out.println("Score:"+score);
            System.out.println("Grade:"+grade);
            System.out.println("Status:"+status);

        }

        average=totalscore/N;
        System.out.println("Totalstudents:"+N);
        System.out.println("Classaverage:"+average);
        System.out.println("Highestscore:"+highestscore);
        System.out.println("Studentspassed:"+passed);
        System.out.println("Studentsfailed:"+failed);
        System.out.println();


        scan.close();
    }
}
