class Node:
    def __init__(self,a):
        self.data=a
        self.prev=None
        self.next=None
head=0
def create():
    a=int(input('Enter value: '))
    newnode=Node(a)
    return newnode
def list_insert(head):
    choice=1
    while choice==1:
        newnode=create()
        if head==0:
            head=temp=newnode
        else:
            temp.next=newnode
            newnode.prev=temp
            temp=newnode
        choice=int(input("Do you want to continue:"))
    return head
def list_insertBegin(head):
    newnode=create()
    newnode.next=head
    head.prev=newnode
    head=newnode
    return head
def list_insertEnd(head):
    newnode=create()
    temp=head
    while temp.next!=None:
        temp=temp.next
    temp.next=newnode
    newnode.prev=temp
    temp=newnode

def list_insertPos(head):
    temp=head
    newnode=create()
    pos=int(input('Enter position: '))
    while temp.data!=pos:
        temp=temp.next
    newnode.prev=temp
    newnode.next=temp.next
    temp.next=newnode

def delBegin(head):
    head=head.next
    head.prev=0
    return head

def delEnd(head):
    temp=head
    while temp.next!=None:
        temp=temp.next
    temp=temp.prev
    temp.next=0

def delPos(head):
    pos=int(input('Enter position:'))
    temp=head
    while temp.next.data!=pos:
        temp=temp.next
    temp.next=temp.next.next
    temp.next.prev=temp
def display(head):
    temp=head
    while temp!=None:
        print(temp.data)
        temp=temp.next
header=list_insert(head)
display(header)
#header=list_insertBegin(header)
#display(header)
#list_insertEnd(header)
#display(header)
#list_insertPos(header)
#display(header)
print("Deletion")
#header=delBegin(header)
#display(header)
#delEnd(header)
#display(header)
delPos(header)
display(header)