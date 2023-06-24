package Codeforces;

import java.util.Scanner;

public class SuborArray {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int t = sc.nextInt(), n;

		while (t > 0) {
			n = sc.nextInt();
			for (int i = 1; i <= n; i++) {
				System.out.printf("%d ", i);
			}
			System.out.printf("\n");
			t--;
		}
		sc.close();
	}

}
