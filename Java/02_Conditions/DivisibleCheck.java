import java.util.Scanner;

public class DivisibleCheck {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num = sc.nextInt();

        if (num % 2 == 0 && num % 3 == 0) {
            System.out.println("Divisible by 2 and 3");
        } else {
            System.out.println("Not divisible by both");
        }

        sc.close();
    }
}
