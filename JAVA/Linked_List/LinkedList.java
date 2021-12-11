package Linked_List;

public class LinkedList {
	//intitializing head to null
		Node head = null;
		//declaring a runner pointer variable
		Node runner;
		//declaring size variable
		int size = 0;
		
		public void add(int data) {
			Node n = new Node();
			n.data = data;
			if(head == null) {
				head = n;
			}
			else {
				runner = head;
				//traverse to end
				while(runner.next != null) {
					runner = runner.next;
				}
				runner.next = n;
			}
			size++;
		}
		public void insertAtBegin(int data) {
			Node n = new Node();
			n.data = data;
			n.next = head;
			head = n;
			size++;
		}
		public void inserAt(int data, int pos) {
			Node n = new Node();
			n.data = data;
			if(pos < 0 || pos > size) {
				throw new IllegalArgumentException();
			}
			else {
				runner = head;
				//traverse at 1 before pos
				for(int i=0; i<pos-1; i++) {
					runner = runner.next;
				}
				n.next = runner.next;
				runner.next = n;
			}
			size++;
		}
		
		public void deleteAt(int pos) {
			if(pos == 0) {
				head = head.next;
			}
			else {
				runner = head;
				//traverse to 1 before pos
				for(int i=0; i<pos-1; i++) {
					runner = runner.next;
				}
				runner.next = runner.next.next;
			}
			size--;
		}
		
		public int get(int pos) {
			runner = head;
			for(int i=0; i<=pos; i++) {
				if(i == pos) {
					return runner.data;
				}
				runner = runner.next;
			}
			return -1;
		}
		
		public void print() {
			runner = head;
			while(runner != null) {
				System.out.println(runner.data);
				runner = runner.next;
			}
		}
		public boolean contains(int data) {
			if(head == null) {
				return false;
			}
			runner = head;
			while(runner != null) {
				if(runner.data == data) {
					return true;
				}
				runner = runner.next;
			}
			return false;
		}
		public void clear() {
			head = null;
			size = 0;
		}
		public int size() {
			return size;
		}
		public boolean isEmpty() {
			if(head == null) {
				return true;
			}
			else {
				return false;
			}
		}

}
