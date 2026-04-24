import java.util.Scanner;

public class SumN {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int sum = 0;

        for(int i = 1; i <= n; i++) {
            sum += i;
        }

        System.out.println(sum);
        sc.close();
    }
}

// sum of numbers from 1 to n