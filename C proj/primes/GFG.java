import java.util.Scanner;

class GFG {

    static void solve(int n) {
        int ans = 0;

        for (int y = n + 1; y <= n * n + n; y++) {
            if ((n * n) % (y - n) == 0) {
                ans += 1;
            }
        }

        System.out.print(ans);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.close();

        solve(n);
    }
}
