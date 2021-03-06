//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////           Authored and Copyrighted by Wilfido Castaneda    /////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#pragma once
#ifndef LINKEDLIST_H
#define LINKEDLIST_H


struct Node;

class LinkedList
{
public:
	//The big four
	LinkedList();
	LinkedList( const LinkedList &linkedList );
	LinkedList & LinkedList :: operator = ( const LinkedList &linkedList );
	~LinkedList();

	//supplemental methods
	/*

		These methods are the C++ implementations
		of most of the methods outlined for the Java interface 
		for LinkedLists provided at https://docs.oracle.com/javase/7/docs/api/java/util/LinkedList.html
	
	
	*/

	//adding elements
	Node* add( int index, int data );
	Node* add( int data );
	Node* addFirst( int data );
	Node* addLast( int data );

	//removing elements
	void removeData( int data );
	int removeIndex( int index );
	int remove();
	int removeFirst();
	int removeLast();
	void removeAllInstances( int data ); //original method
	void clear();

	//query
	bool contains( int data );
	void get( int index );
	int peek();
	int peekFirst();
	int peekLast();
	int indexOf( int data );
	int lastIndexOf(int data); 
	int sizeOf();
	void printList();

	//rearranging
	Node* toArray();



private:
	//data
	Node *first;
	Node *last;
	int size;
	int pad0;

};



#endif // !

