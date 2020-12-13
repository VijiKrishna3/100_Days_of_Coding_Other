var readlineSync = require('readline-sync');

class Node 
{ 
    constructor(data) 
    { 
        this.data = data; 
        this.left = null; 
        this.right = null; 
    } 
}

function countUnivalRec(root, c) {
    if (root == null) return true;

    left = countUnivalRec(root.left, c);
    right = countUnivalRec(root.right, c);

    if (left == false || right == false) return false;
    if (root.left != null && root.data != root.left.data) return false;
    if (root.right != null && root.data != root.right.data) return false;

    c[0]++;
    return true;
}


/* Testing out tree:
              0  
            /   \  
          1      0  
                / \  
               1   0
              / \     
             1   1         */
root = new Node(0);
root.left = new Node(1);
root.right = new Node(0);
root.right.left = new Node(1);
root.right.right = new Node(0);
root.right.left.left = new Node(1);
root.right.left.right = new Node(1);

count = [0];
countUnivalRec(root, count);

console.log(`Unival tree count is ${count[0]}.`);
