import java.io.*;
import java.util.*;

class day055
{ 
    public static void main(String args[]) 
    {
        Scanner s = new Scanner(System.in); 
        
        System.out.print("Enter number of elements: ");
        int n = s.nextInt();

        ArrayList<Long> nums = new ArrayList<Long>();

        for (int i = 0; i < n; ++i)
        {
            System.out.printf("Enter number %d: ", i + 1);
            nums.add((long)Math.pow(s.nextInt(), 2));
        }
        s.close();
        nums.sort(null);

        System.out.print("Modified array: ");
        System.out.print(nums);
    } 
} 