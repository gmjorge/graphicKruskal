#ifndef NODE_H
#define NODE_H

#include<iostream>

using namespace std;

class Node {
	friend istream &operator>>(istream &input, Node &node);
	private:
		int number;
		int x;
		int y;
		void setNode(int number, int x, int y);
	public:
		Node();
		Node(int number, int x=-1, int y=-1);
		~Node();
		void setX(int x);
		void setY(int y);
		int getNumber();
		int getX();
		int getY();
		void render();
};
#endif

