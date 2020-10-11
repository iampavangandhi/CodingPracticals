class BinaryTree:
    """
    Class object for binary tree
    """

    def __init__(self, element: int):
        """
        Create a node with element, have no child nodes
        """
        self.data = element
        self.left = None
        self.right = None

    def add(self, element :int) -> None:
        """
        Adds element to the tree
        """
        if element < self.data:
            # insert at left child
            if self.left is None:
                self.left = BinaryTree(element)
            else:
                self.left.add(element)
        else:
            #insert at right
            if self.right is None:
                self.right = BinaryTree(element)
            else:
                self.right.add(element)

    def max(self) -> int:
        """
        Finds the maximum element from the tree
        """
        if self.right is not None:
            return self.right.max()
        else:
            return self.data

    def min(self) -> int:
        """
        Finds the minimum element from the tree
        """
        if self.left is not None:
            return self.left.min()
        else:
            return self.data

    def remove(self, element :int):
        """
        Removes element from the tree if found
        returns new tree
        """
        if self.data == element:
            #this node has to be removed
            if self.left is not None and self.right is not None:
                return None
            elif self.left is None:
                return self.right
            elif self.right is None:
                return self.left
            else:
                rightSmallest = self.right.min()
                self.data = rightSmallest
                self.right = self.right.remove(rightSmallest)
                return self

        if element < self.data:
            self.left = self.left.remove(element)
        else:
            self.right = self.right.remove(element)
        return self

    def search(self, element : int) -> bool:
        """
        Returns true if element is found in tree
        Else returns false
        """
        if self.data == element:
            return True
        elif element < self.data:
            if self.left is not None:
                return self.left.search(element)
            else:
                return False
        else:
            if self.right is not None:
                return self.right.search(element)
            else:
                return False

    def inOrder(self) -> None:
        """
        InOrder traversal : left -> current -> right
        """
        if self.left is not None:
            self.left.inOrder()
        print(f"{self.data} ", end=" ")
        if self.right is not None:
            self.right.inOrder()

    def preOrder(self) -> None:
        """
        PreOrder traversal : current -> left -> right
        """
        print(f"{self.data} ", end=" ")
        if self.left is not None:
            self.left.inOrder()
        if self.right is not None:
            self.right.inOrder()

    def postOrder(self) -> None:
        """
        PostOrder traversal : left -> right -> current
        """
        if self.left is not None:
            self.left.inOrder()
        if self.right is not None:
            self.right.inOrder()
        print(f"{self.data} ", end=" ")

    def __str__(self) -> str:
        """
        Returns the string representation of node
        Node( data, left, right )
        """
        string = f"Node( {self.data}, "
        if self.left is not None:
            string += "left, "
        else:
            string += "None, "
        if self.right is not None:
            string += "right "
        else:
            string += "None "
        string += ")"
        return string


if __name__ == "__main__":
    values = [5,8,2,7,1,9,3,4,6]

    BST = BinaryTree(values[0])
    print(f"Root node details before adding elements : {BST}")
    for element in values[1:]:
        BST.add(element)
    print(f"Root node details after adding elements : {BST}")

    print("Traversal inorder :", end=" ")
    BST.inOrder()

    print("\nTraversal pre-order : ", end=" ")
    BST.preOrder()

    print("\nTraversal post-order : ", end=" ")
    BST.postOrder()

    print(f"\nMinimum value = {BST.min()}")
    print(f"Maximum value = {BST.max()}")

    element = 4
    if BST.search(element):
        print(f"Element {element} is found")
    else:
        print(f"Element {element} is not found")

    print(f"Removing {element}")
    BST.remove(element)

    if BST.search(element):
        print(f"Element {element} is found")
    else:
        print(f"Element {element} is not found")
