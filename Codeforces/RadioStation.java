package ejercicios;

import java.util.ArrayList;
import java.util.Scanner;

public class RadioStation {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		ArrayList<String> servers = new ArrayList<>();  
		ArrayList<String> conFileLines = new ArrayList<>();
		
		Integer n, m;
		
		n = sc.nextInt();
		m = sc.nextInt();
		sc.nextLine();
		
		for (int i = 1; i <= n; i++) {
			String serverLine = sc.nextLine();
			servers.add(serverLine);
		}
		
		for (int i = 1; i <= m; i++) {
			String conFileLine = sc.nextLine();
			conFileLines.add(conFileLine);
		}
		
		for (int i = 0; i < m; i++) {
			String command = conFileLines.get(i).split(" ")[0];
			String ipConFile = conFileLines.get(i).split(" ")[1];
			for (int j = 0; j < n; j++) {
				String nameServer = servers.get(j).split(" ")[0];
				String ipServer = servers.get(j).split(" ")[1];
				if (ipConFile.equals(ipServer + ";")) {
					System.out.printf("%s %s #%s\n",command, ipConFile, nameServer);	
				}				
			}

		}		
		sc.close();
		
	}
}
