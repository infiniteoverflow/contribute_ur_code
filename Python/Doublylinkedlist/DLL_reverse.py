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
    
