import java.util.Scanner;
import java.util.InputMismatchException;

public class Main {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        float[] A = new float[100];
        int i = 0;

        while (i < 100) {
            try {
                A[i] = scan.nextFloat();
                if (A[i] <= 10) {
                    System.out.printf("A[%d] = %.1f\n", i, A[i]);
                }
                i++; 
            } catch (InputMismatchException e) {
                System.err.println("ERRO... insira valor real");
                scan.next(); 
            } catch (Exception e1) {
                System.err.println("ERRO...");
                break; 
            }
        }
    }
}
