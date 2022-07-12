import java.util.HashMap;

public class Solution {

    public static int lenOfLongSubarr(int arr[], int n, int k) {
        HashMap<Integer, Integer> map = new HashMap<>();
        int max = 0;
        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum += arr[i];
            if (sum == k) {
                max = Math.max(i + 1, max);
            } else if (map.containsKey(sum - k)) {
                max = Math.max(i - map.get(sum - k), max);
            }
            if (!(map.containsKey(sum))) {
                map.put(sum, i);

            }
        }
        return max;
    }

    public static void main(String[] args) {
        int arr[] = { 4, 1, 1, 1, 2,3, 5 };
        System.out.println(lenOfLongSubarr(arr,7,5));
    }
}