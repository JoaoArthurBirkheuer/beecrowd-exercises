import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.nextLine();
        
        for (int i = 0; i < n; i++) {
            int cont = 0;
            String num1 = scanner.next();
            String num2 = scanner.next();

            for (int j = num2.length() - 1, k = num1.length() - 1; j >= 0; j--, k--) {
                if (num1.charAt(k) == num2.charAt(j)) {
                    cont++;
                } else {
                    break;
                }
            }
            
            if (cont == num2.length()) {
                System.out.println("encaixa");
            } else {
                System.out.println("nao encaixa");
            }
        }
        scanner.close();
    }
}
