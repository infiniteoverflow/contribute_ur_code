
class Node:
    #constructor to create a new node
    def __init__(self,data):
        self.data=data
        self.next=None
        self.prev=None
class dll:
    #constructor for empty doublylinkedlist
    def __init__(self):
        self.head=None
    #function for reverse a doubly linked list
    def reverse():
    temp=None
    curr=head
    #swap next and prev for all nodes of doubly linked list
        while temp is not None:
            temp=curr.prev
            curr.prev=curr.next
            curr.next=prev
            curr=curr.prev
    #before changing cases check for cases
        if temp is not None:
            head=temp.prev
    def push(data):
        new_node=Node(data)
        new_node.next=head
        if head is not None:
            head.prev=new_node
        head=new_node
    def printlist(node):
        while(node is not None):
            print node.data
            node=node.next
#Driver program tot test the above function
    dll=DoublylinkedList()
    dll.push(2)
    dll.push(5)
    dll.push(7)
    dll.push(11)
    dll.push(6)
    print "\n Linked lsit"
    dll.printList(dll.head)
    #reverse doubly linked list
    dll.reverse()
    print "\n Reversed Linked list"
    dll.printList(dll.head)
    ss
