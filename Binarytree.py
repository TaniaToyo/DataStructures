
class Node:
    def __init__(self,val):
        self.data=val
        self.left=None
        self.right=None

def createNode():
    val=int(input('Enter value: '))
    newnode=Node(val)
    return newnode

def create():
    newnode=createNode()
    if newnode.data==-1:
        return 0
    print('Enter left child of',newnode.data)
    newnode.left=create()
    print('Enter right child of' ,newnode.data)
    newnode.right=create()
    return newnode

def search(root,n,temp):

    if(root):
        if root.data==n:
            print(root.data)
            return 1
        if temp!=1:
            print(root.data)
            temp=search(root.left,n,temp)
            temp=search(root.right,n,temp)
    return 0
root=create()
n=int(input('Enter value to be searched: '))
temp=0
val=search(root,n,temp)
if val==1:
    print('Element found')
else:
    print('Not found')
