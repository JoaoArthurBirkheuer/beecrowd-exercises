import java.io.IOException;
import java.util.Scanner;
import java.util.InputMismatchException;

public class Main {
    public static void main(String[] args) throws IOException {
        int N = 0, anterior = 0, atual = 0;
        boolean paisagem = true, vale = true, pico = true;
        Scanner scan = new Scanner(System.in);

        try {
            N = scan.nextInt();
            if (N <= 1 || N > 100) {
                throw new IllegalArgumentException("ERRO... verificar intervalo");
            }
        } catch (InputMismatchException e) {
            System.out.println("ERRO... input incorreto");
            return;
        } catch (Exception e) {
            System.out.println("ERRO...");
            return;
        }

        int[] alturas = new int[N];
        for (int i = 0; i < N; i++) {
            try {
                alturas[i] = scan.nextInt();
                if (alturas[i] < -10000 || alturas[i] > 10000) {
                    throw new IllegalArgumentException("ERRO... verificar intervalo");
                }
            } catch (InputMismatchException e) {
                System.out.println("ERRO... input incorreto");
                return;
            } catch (Exception e) {
                System.out.println("ERRO...");
                return;
            }
        }

        for (int i = 1; i < N; i++) {
            if (alturas[i] == alturas[i - 1]) {
                System.out.println(0);
                return;
            } else if (alturas[i] > alturas[i - 1] && pico) {
                pico = false;
                vale = true;
            } else if (alturas[i] < alturas[i - 1] && vale) {
                vale = false;
                pico = true;
            } else {
                System.out.println(0);
                return;
            }
        }
        System.out.println(1);
    }
}
