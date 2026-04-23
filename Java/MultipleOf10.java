import java.util.Scanner;

public class MultipleOf10 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num = sc.nextInt();

        if (num % 10 == 0) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}