# Node class
class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def countSingleRec(root, c):
    if root is None:
        return True

    left = countSingleRec(root.left, c)
    right = countSingleRec(root.right, c)

    if left == False or right == False:
        return False
    
    if root.left and root.data != root.left.data:
        return False

    if root.right and root.data != root.right.data:
        return False
    
    c[0] += 1
    return True

# countSingle function
def countSingle(root):
    count = [0]
    countSingleRec(root, count)
    return count[0]

# Driver Code
if __name__ == "__main__":
    """ Testing out tree:
              0  
            /   \  
          1      0  
                / \  
               1   0
              / \     
             1   1         """

    root = Node(0)
    root.left = Node(1)
    root.right = Node(0)
    root.right.left = Node(1)
    root.right.right = Node(0)
    root.right.left.left = Node(1)
    root.right.left.right = Node(1)

    print("Unival tree count: " , countSingle(root))

