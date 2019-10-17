import gc
def delete(dele):
    #If node to be deleted is head node
    if head==dele:
      head=dele.next
    #if node to be deleted is not the last node
    if dele.next is not None:
        dele.next.prev=dele.prev
    #if node to be deleted is not the first node
    if dele.prev is not None:
        dele.prev.next=del.next
    #free memory
    gc.collect()
