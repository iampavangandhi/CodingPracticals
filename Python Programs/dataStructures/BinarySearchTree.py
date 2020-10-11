"""
A binary tree is a data structure with two child nodes
refer : https://en.wikipedia.org/wiki/Binary_tree
"""

class BinaryTree:
    """
    Class object for binary tree
    """

    def __init__(self):
        """
        Creates a new empty tree

        >>>tree1 = BinaryTree()
        >>>tree2 = BinaryTree()
        """
        self.data = None
        self.isEmpty = True
        self.numberOfNodes = 0
        self.leftTree = None
        self.rightTree = None

    def add(self, element :int) -> None:
        """
        Adds element to the tree

        >>>tree.add(4)
        >>>tree.add(5)
        """
        self.numberOfNodes += 1

        if self.isEmpty:
            self.data = element
            self.isEmpty = False
        elif element < self.data:
            # insert at left child
            if self.leftTree is None:
                self.leftTree = BinaryTree()
            self.leftTree.add(element)
        else:
            #insert at right
            if self.rightTree is None:
                self.rightTree = BinaryTree()
            self.rightTree.add(element)

    def max(self) -> int:
        """
        Finds the maximum element from the tree.
        Raises ValueError if tree is empty

        >>>element = tree.max()
        >>>print(tree.max())

        """
        if self.isEmpty:
            raise ValueError("Tree is empty!")
        elif self.rightTree is not None:
            return self.rightTree.max()
        else:
            return self.data

    def min(self) -> int:
        """
        Finds the minimum element from the tree

        >>>element = tree.min()
        >>>print(tree.min())

        """
        if self.isEmpty:
            raise ValueError("Tree is empty!")
        elif self.leftTree is not None:
            return self.leftTree.min()
        else:
            return self.data

    def remove(self, element : int):
        """
        Removes element from the tree if found.
        Returns tuple of updated tree and status.

        >>> tree1,status = tree1.remove(4)
        >>> if status:
                print("removed")
            else:
                print("not removed")
        """
        if self.isEmpty:
            raise ValueError("Tree is empty!")

        if self.data == element:
            #this node has to be removed
            self.data = None
            self.numberOfNodes -= 1

            if self.leftTree is None and self.rightTree is None:
                self.isEmpty = True
                return self,True
            elif self.leftTree is None:
                return self.rightTree,True
            elif self.rightTree is None:
                return self.leftTree,True
            else:
                rightSmallest = self.rightTree.min()
                self.data = rightSmallest
                self.rightTree,status = self.rightTree.remove(rightSmallest)
                if self.rightTree.isEmpty:
                    self.right = None
                return self,True

        elif element < self.data and self.leftTree is not None:
            self.leftTree,status = self.leftTree.remove(element)
            if status:
                self.numberOfNodes -= 1
                if self.leftTree.isEmpty:
                    self.leftTree = None
            return self,status

        elif self.rightTree is not None:
            self.rightTree,status = self.rightTree.remove(element)
            if status:
                self.numberOfNodes -= 1
                if self.rightTree.isEmpty:
                    self.rightTree = None
            return self,status
        else:
            return self,False

    def search(self, element : int) -> bool:
        """
        Returns true if element is found in tree
        Returns false if element is not found in tree
        Raises ValueError if tree is empty

        >>>if tree.search(4):
               print("4 found!")
        """
        if self.isEmpty:
            raise ValueError("Tree is empty!")

        if self.data == element:
            return True
        elif element < self.data:
            if self.leftTree is not None:
                return self.leftTree.search(element)
            else:
                return False
        else:
            if self.rightTree is not None:
                return self.rightTree.search(element)
            else:
                return False

    def inOrder(self) -> None:
        """
        InOrder traversal : left -> current -> right

        >>>tree.inOrder()
        1 2 3
        """
        if self.leftTree is not None:
            self.leftTree.inOrder()
        if not self.isEmpty:
            print(f"{self.data} ", end=" ")
        if self.rightTree is not None:
            self.rightTree.inOrder()

    def preOrder(self) -> None:
        """
        PreOrder traversal : current -> left -> right

        >>>tree.preOrder()
        2 1 3
        """
        if not self.isEmpty:
            print(f"{self.data} ", end=" ")
        if self.leftTree is not None:
            self.leftTree.inOrder()
        if self.rightTree is not None:
            self.rightTree.inOrder()

    def postOrder(self) -> None:
        """
        PostOrder traversal : left -> right -> current

        >>>tree.postOrder()
        1 3 2
        """
        if self.leftTree is not None:
            self.leftTree.inOrder()
        if self.rightTree is not None:
            self.rightTree.inOrder()
        if not self.isEmpty:
            print(f"{self.data} ", end=" ")

    def __str__(self) -> str:
        """
        Returns the string representation of tree
        "Binary tree of {numberOfNodes} nodes"

        >>>print(tree1)
        Binary tree of 4 nodes
        >>>print(tree2)
        Binary tree of 0 nodes
        """
        return f"Binary tree of {self.numberOfNodes} nodes"


if __name__ == "__main__":
    """
    Sample operation on binary tree
    """

    BST = BinaryTree()
    print(f"Root node details before adding elements : {BST}")

    values = [5,8,2,7,1,9,3,4,6]
    for element in values:
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
    BST,status = BST.remove(element)
    if status:
        print(f"Element {element} is removed")
    else:
        print(f"Element {element} is not found!")
