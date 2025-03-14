import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {

        Scanner scan = new Scanner(System.in);
        int testCases = scan.nextInt();
        scan.nextLine();

        for (int t = 0; t < testCases; t++) {
            String teste = scan.nextLine();
            StringBuilder sb = new StringBuilder();
            boolean primeiraLetra = true; 

            for (char c : teste.toCharArray()) {
                if (primeiraLetra && c != ' ') {
                    sb.append(c);
                    primeiraLetra = false;
                }
                if (c == ' ') {
                    primeiraLetra = true;
                }
            }
            System.out.println(sb.toString());
        }
    }
}
