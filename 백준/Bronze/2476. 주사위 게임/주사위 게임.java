import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int maxPrize = 0;

        for (int i = 0; i < n; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();

            int prize = 0;

            if (a == b && b == c) {
                // 세 개의 주사위 숫자가 모두 같은 경우
                prize = 10000 + a * 1000;
            } else if (a == b || a == c) {
                // 두 개의 주사위 숫자가 같은 경우 (a가 중복)
                prize = 1000 + a * 100;
            } else if (b == c) {
                // 두 개의 주사위 숫자가 같은 경우 (b와 c가 중복)
                prize = 1000 + b * 100;
            } else {
                // 세 개의 주사위 숫자가 모두 다른 경우
                prize = Math.max(a, Math.max(b, c)) * 100;
            }

            if (prize > maxPrize) {
                maxPrize = prize;
            }
        }

        System.out.println(maxPrize);
        sc.close();
    }
}
