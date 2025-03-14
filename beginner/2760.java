import java.io.IOException;
import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) throws IOException {
        
        Scanner sc = new Scanner(System.in);
        String s1 = sc.nextLine();
        String s2 = sc.nextLine();
        String s3 = sc.nextLine();
        
        // steps 5, 6 and 7
        System.out.println(s1 + s2 + s3);
        System.out.println(s2 + s3 + s1);
        System.out.println(s3 + s1 + s2);
        
        // step 8
        if(s1.length() <= 10)
            System.out.print(s1);
        else
            System.out.print(s1.substring(0,10));
        if(s2.length() <= 10)
            System.out.print(s2);
        else
            System.out.print(s2.substring(0,10));
        if(s3.length() <= 10)
            System.out.print(s3);
        else
            System.out.print(s3.substring(0,10));
        System.out.println();
    }
 
}