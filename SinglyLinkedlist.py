class Node:
    def __init__(self, data=None):
        self.data = data
        self.next = None

head = 0

def list_create():
    a=int(input("Enter value: "))
    newnode=Node(a)
    return newnode


def list_insert(head):
    choice = 1
    while choice == 1:
        newnode=list_create()
        if head==0:
            head=temp=newnode
        else:
            temp.next=newnode
            temp=newnode
        choice=int(input("Do you want to continue: "))
    return head
def list_insertBegining(head):
    newnode=list_create()
    newnode.next=head
    head=newnode
    return head

def list_display(head):
    temp=head
    while temp!=None:
        print(temp.data)
        temp=temp.next
def list_insertEnd(head):
    temp=head
    newnode=list_create()
    while temp.next!=None:
        temp=temp.next
    temp.next=newnode
    temp=newnode

def list_insertPos(head):
    temp=head
    newnode = list_create()
    pos=int(input("Enter number before which to enter: "))
    while temp.data!=pos:
        temp=temp.next
    newval=temp.next

    temp.next=newnode
    newnode=newval

def list_deleteBegin(head):
    head=head.next
    return head

def list_deleteEnd(head):
    temp=head
    while temp.next.next!=None:
        temp=temp.next
    temp.next=None

def list_deletepos(head):
    temp=head
    pos=int(input('Enter value: '))
    while temp.next.data!=pos:
        temp=temp.next
    temp.next=temp.next.next

def reverseList(head):
        prevPointer=None
        currentPointer=head
        nextPointer=head
        while currentPointer.next!=None:
            nextPointer=nextPointer.next
            currentPointer.next=prevPointer
            prevPointer=currentPointer
            currentPointer=nextPointer
        currentPointer.next=prevPointer
        head=currentPointer
        return head
header=list_insert(head)
list_display(header)
#header=list_insertBegining(header)
#list_display(header)
#list_insertEnd(header)
#list_display(header)
#print('Deletion from begining')
#header=list_deleteBegin(header)
#list_display(header)
#list_deleteEnd(header)
#list_display(header)
#list_deletepos(header)
#list_display(header)
header=reverseList(header)
print('Display')
list_display(header)
