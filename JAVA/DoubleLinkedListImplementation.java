package com.list.doublelinkedlist;

public class DoubleLLImplementation {

	Node head;
	Node tail;
	int size = 0;

	public class Node {
		private int node_value;
		private Node previous;
		private Node next;

//		Method Constructor function to create node
		public Node(int node_value) {
			this.node_value = node_value;
		}
	}

//      Method add node in front of linked list 
	private void addFront(int node_value) {
		Node node = new Node(node_value);
		if (isEmpty()) {
			head = tail = node;
			size++;
		} else {
			node.next = head;
			node.next.previous = node;
			node.previous = null;
			head = node;
			size++;
		}
	}
	
//	Method add node in last of linked list 
	private void addLast(int node_value) {
		Node node = new Node(node_value);
		if (isEmpty()) {
			head = tail = node;
			size++;
		} else {
			node.previous = tail;
			node.previous.next = node;
			node.next = null;
			tail = node;
			size++;
		}
	}

	
// Method add node in desired place 
	private void addMiddle(int node_value, int pre_value) {
		Node cur = head;
		Node node = new Node(node_value);
		while (cur != null) {
			if (cur.node_value == pre_value) {
				node.next = cur.next;
				node.previous = cur;
				cur.next.previous = node;
				cur.next = node;
				size++;
				break;
			}
			cur = cur.next;
		}
	}


	private void printList() {
		Node cur = head;
		while (cur != null) {
			System.out.print(cur.node_value + " ");
			cur = cur.next;
		}
		System.out.println();
	}

	
// Method Check whether linked list is full or not 
	private boolean isEmpty() {
		return head == null;
	}

	private int size() {
		return size;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		DoubleLLImplementation doubleLL = new DoubleLLImplementation();
		doubleLL.addFront(1);
		doubleLL.addFront(2);
		doubleLL.addFront(3);
		doubleLL.addLast(5);
		doubleLL.printList();
		doubleLL.addMiddle(6, 1);
		doubleLL.printList();
		System.out.println(doubleLL.size());
	}
}
