import java.io.*;
import java.util.*;

class Node
{
    int data;
    Node left, right;

    public Node(int val)
    {
        data = val;
        left = right = null;
    }
}

class day002
{
    public static Boolean countSingleRec(Node node, int[] c)  
    { 
        if (node == null) 
            return true; 
           
        Boolean left = countSingleRec(node.left, c); 
        Boolean right = countSingleRec(node.right, c); 
   
        if (left == false || right == false) 
            return false; 

        if (node.left != null && node.data != node.left.data) 
            return false; 
   
        if (node.right != null && node.data != node.right.data) 
            return false; 
   
        c[0]++; // c++ better
        return true; 
    } 

    public static Integer countSingle(Node root)
    {
        int count[] = {0};
        countSingleRec(root, count);
        return count[0];
    }
    
    public static void main(String args[]) 
    {
        /* Testing out tree:
              0  
            /   \  
          1      0  
                / \  
               1   0
              / \     
             1   1         */

        Node root = new Node(0);
        root.left = new Node(1);
        root.right = new Node(0);
        root.right.left = new Node(1);
        root.right.right = new Node(0);
        root.right.left.left = new Node(1);
        root.right.left.right = new Node(1);

        System.out.println("Number of unival trees: " + countSingle(root)); 
    } 
} 