import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        while (scanner.hasNextLine()) {
            String ch = scanner.nextLine();
            StringBuilder result = new StringBuilder();
            int j = 0;
            int l = ch.length();
            for (int i = 0; i < l; i++) {
                if (ch.charAt(i) != ' ') {
                    j++;
                    if (ch.charAt(i) > 96 && j % 2 == 1)
                        result.append((char) (ch.charAt(i) - 32));
                    else if (ch.charAt(i) < 96 && j % 2 == 0)
                        result.append((char) (ch.charAt(i) + 32));
                    else
                        result.append(ch.charAt(i));
                } else {
                    result.append(' ');
                }
            }
            System.out.println(result);
        }
    }
}
