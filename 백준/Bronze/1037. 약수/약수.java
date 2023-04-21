import java.io.*;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		int []x = new int[n];
		for(int i = 0; i < n; i++) {
			int y = input.nextInt();
			x[i] = y;
		}
		int max = x[0]; 
		for(int i=1; i<x.length; i++) { 
			if(max < x[i]) max = x[i]; 
		}
		
		int min = x[0]; // 첫 번째 배열의 값을 변수에 대입
		for(int i=1; i<x.length; i++) { // 두 번째부터 마지막 배열의 값까지 반복
			if(min > x[i]) min = x[i]; // 각 배열의 값을 차례대로 min의 값과 비교하여 더 작은 값을 min에 대입
		}
		System.out.println(max*min);
	}

}