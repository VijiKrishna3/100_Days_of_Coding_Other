import java.util.Vector;

import java.io.*;
import java.util.*;

class day001
{ 
    public static void main(String args[]) 
    {
        Scanner s = new Scanner(System.in); 
        
        System.out.print("Enter number of elements: ");
        int n = s.nextInt();

        ArrayList<Integer> nums = new ArrayList<Integer>();

        for (int i = 0; i < n; ++i)
        {
            System.out.printf("Enter number %d: ", i + 1);
            nums.add(s.nextInt());
        }

        System.out.print("Enter k: ");
        int k = s.nextInt();

        System.out.println(twoElemSum(nums, k));
        s.close();
    } 

    public static Boolean twoElemSum(ArrayList arr, int k)
    {
        for(int i = 0; i < arr.size(); ++i)
        {
            var res = k - (int)arr.get(i);
            if (arr.contains(res))
                if (arr.indexOf(res) != i || Collections.frequency(arr, res) > 1)
                    return true;
        }
        return false;
    }
} 