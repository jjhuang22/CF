import java.io.*;
import java.util.*;

public class c462B {
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        long k = in.nextInt();
        long[] arr = new long[26];

        String s = in.next();
        for (int i = 0; i < n; i++) {
            arr[s.charAt(i) - 'A']++;
        }

        Arrays.sort(arr);
        long answer = 0;
        int curr = 25;
        while (k > 0) {
            if (arr[curr] <= k) answer += arr[curr] * arr[curr];
            else answer += k * k;
            k -= arr[curr];
            curr--;
        }
        
        System.out.println(answer);
    }
}