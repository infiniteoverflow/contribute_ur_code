#Insertion at front
def insertafter(head,data):
    new_node=node(data)
    new_node.next=head
    new_node.prev=None
    if head is not None:
        head.prev=new_node
    head=new_node
    
#Add a node after a given node
def insertafter(prev_node,data):
    if prev_node is None:
        return
    #Allocate new node
    new_node=node(data)
    #Make ne xt of new_node as next of prev_node
    new_node.next=prev_node.next
    #Make next of prev_node as next of new_node
    prev_node.next=new_node.next
    #Make prev_node as previous of new_node
    new_node.prev=prev_node
    if (new_node.next is not None):
        new_node.next.prev=new_node
#Add a Node at end
def insertend(head,data):
    new_node=Node(data)
    last=head
    #This new node is going to be last node,so make it as NULL
    new_node.next=None
    if head is not None:
        new_node.prev=None
        head=new_node
        return
    while (last.next is not none):
        last=last.next
    #Change next of last node
    last.next=new_node
    #Make last node as previous of new node
    new_node.prev=last
    return
    
