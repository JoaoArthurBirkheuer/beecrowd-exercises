import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        scanner.nextLine();

        for (int i = 1; i <= n; i++) {
            String sheldon = scanner.next();
            String raj = scanner.next();

            if (sheldon.equals(raj)) {
                System.out.println("Caso #" + i + ": De novo!");
            } else if (
                (sheldon.equals("Spock") && raj.equals("pedra")) ||
                (sheldon.equals("lagarto") && raj.equals("Spock")) ||
                (sheldon.equals("tesoura") && raj.equals("lagarto")) ||
                (sheldon.equals("papel") && raj.equals("Spock")) ||
                (sheldon.equals("tesoura") && raj.equals("papel")) ||
                (sheldon.equals("papel") && raj.equals("pedra")) ||
                (sheldon.equals("lagarto") && raj.equals("papel")) ||
                (sheldon.equals("pedra") && raj.equals("lagarto")) ||
                (sheldon.equals("Spock") && raj.equals("tesoura")) ||
                (sheldon.equals("pedra") && raj.equals("tesoura"))
            ) {
                System.out.println("Caso #" + i + ": Bazinga!");
            } else {
                System.out.println("Caso #" + i + ": Raj trapaceou!");
            }
        }

        scanner.close();
    }
}
