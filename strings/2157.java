import java.util.InputMismatchException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int C = 0;
        try {
            C = scan.nextInt();
            if (C <= 0) {
                throw new IllegalArgumentException("ERRO... valor invalido");
            }
        } catch (InputMismatchException e) {
            System.out.println("ERRO... input invalido");
        } catch (Exception e) {
            System.out.println("ERRO...");
        }
        int i = 0, B = 0, E = 0, ultimoIndex = 0;
        do {
            try {
                B = scan.nextInt();
                if (B <= 0) {
                    throw new IllegalArgumentException("ERRO... valor invalido");
                }
                E = scan.nextInt();
                if (E <= 0 || E < B) {
                    throw new IllegalArgumentException("ERRO... valor invalido");
                }
            } catch (InputMismatchException e) {
                System.out.println("ERRO... input invalido");
            } catch (Exception e) {
                System.out.println("ERRO...");
            }
            StringBuilder resultado = new StringBuilder();
            for (int index = B; index <= E; index++) {
                resultado.append(index);
            }
            int indexUsado = resultado.length();
            while (indexUsado != 0) {
                indexUsado--;
                resultado.append(resultado.charAt(indexUsado));
            }
            System.out.println(resultado.toString());
            i++;
        } while (i < C);
    }
}
