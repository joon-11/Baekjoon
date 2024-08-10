import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.BufferedWriter;
import java.io.OutputStreamWriter;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        int N = Integer.parseInt(br.readLine());
        int[] count = new int[10001]; // 입력 값의 범위가 1부터 10000이므로 크기를 10001로 설정
        
        // 입력받은 숫자 개수를 count 배열에 저장
        for (int i = 0; i < N; i++) {
            count[Integer.parseInt(br.readLine())]++;
        }
        
        // 숫자를 순서대로 출력
        for (int i = 1; i < 10001; i++) {
            while (count[i] > 0) {
                bw.write(i + "\n");
                count[i]--;
            }
        }
        
        bw.flush();
        bw.close();
    }
}
