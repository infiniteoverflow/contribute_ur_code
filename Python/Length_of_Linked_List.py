#Python Program to find the length of the given linked list



class Node:
    #Initializing the linked list
    def __init__(self, data):
        self.data = data
        self.next = None
        
        
#calculating length of Linked List
def length(head):
    count=0
 
    while head is not None:
        head=head.next
        count=count+1
    
    return count

# Creating a Linked list
def ll(arr):
    if len(arr)==0:
        return None
    head = Node(arr[0])
    last = head
    for data in arr[1:]:
        last.next = Node(data)
        last = last.next
    return head

# Main
# Reading the link list elements including -1 (-1 to terminate)
arr=list(int(i) for i in input().strip().split(' '))
# Creating a Linked list after removing -1 from list
l = ll(arr[:-1])
len=length(l)
print(len)
