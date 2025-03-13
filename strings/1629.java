import java.io.BufferedReader;
import java.io.BufferedOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;
 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        OutputStream out = new BufferedOutputStream(System.out);
        int n;
        char[] input;
        while ((n = Integer.parseInt(br.readLine())) != 0) {
            while (n-- > 0) {
                int length_one = 0;
                int length_zero = 0;
                input = br.readLine().toCharArray();
                int i = 0;
                for (char c : input) {
                    int length = c - '0';
                    if (i++ % 2 == 0) {
                        length_zero += length;
                    } else {
                        length_one += length;
                    }
                }
                int checksum = calculate(length_zero) + calculate(length_one);
                out.write((checksum + "\n").getBytes());
            }
        }
        out.flush();
 
    }
    
    static int calculate(int n) {
        int result = 0;
        while (n >= 1) {
            result += n % 10;
            n /= 10;
        }
        return result;
    }
 
}