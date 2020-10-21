import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

// https://www.hackerrank.com/challenges/2d-array/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays

public class Solution {

    // Complete the hourglassSum function below.
    static int hourglassSum(int[][] arr) {
        int max = 0, row = 4, col = 4;
        int temp = 0, cc = 0;
        int[] ar = new int[16];
        
        // calculate first
        while(row != 0){
            col = 4;
            while(col !=0){
                System.out.println("Row: " + row + " Col: " + col);
                for(int i = row - 1; i < row + 2; i++){
                    for(int j = col - 1; j < col + 2; j++){
                        if(i == row && ((j == col - 1) || (j == col + 1))){
                            continue;
                        }
                        temp+=arr[i][j];
                    }
                }
                ar[cc] = temp;
                cc++;
                temp = 0;
                col--;
            }
            row--;
        } 
        Arrays.sort(ar);

        return ar[15];
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int[][] arr = new int[6][6];

        for (int i = 0; i < 6; i++) {
            String[] arrRowItems = scanner.nextLine().split(" ");
            scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

            for (int j = 0; j < 6; j++) {
                int arrItem = Integer.parseInt(arrRowItems[j]);
                arr[i][j] = arrItem;
            }
        }

        int result = hourglassSum(arr);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
