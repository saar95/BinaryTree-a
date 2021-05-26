#pragma once

#include <stdexcept>
#include <fstream>
#include <string>
#include <sstream>
#include <iostream>


namespace ariel{
	template<typename T>
	class Node{
		private:
			

		public:
			T data;
			Node<T> *left_child;
			Node<T> *right_child;
			void set_data(T data){this->data=data;}
			T get_data(){return this->data;}
			Node(T value):data(value){}

	};

	template<typename T>
	class BinaryTree{

		private:
			Node<T>* root;

		public:
			BinaryTree();

			BinaryTree<T> add_root(const T& value);

			BinaryTree<T> get_root();
			BinaryTree<T> add_left(const T& type,const T left_child);
			BinaryTree<T> add_right(const T& type,const T right_child);
			BinaryTree<T> get_right(T node);
			BinaryTree<T> get_left(T node);



			class Iterator{
				private:
					Node<T>* node_ptr;

				public:
					Iterator(Node<T>* ptr=nullptr):node_ptr(ptr){}
					 Iterator &operator++()
            		{
                		//node_ptr = node_ptr->left_child;
                		return *this;
            		}
					Iterator& operator--();
					bool operator==(const Iterator &it) const
            		{
                		//return node_ptr == it.node_ptr;
						return false;
            		}
            		bool operator!=(const Iterator &it) const
            		{
                		//return node_ptr != it.node_ptr;
						return false;
            		}
					T &operator*() 
					{
						return node_ptr->data;
					}

					T *operator->() 
					{
						return &(node_ptr->data);
					}

					friend std::ostream &operator<<(std::ostream &os, const BinaryTree &b);
					};

		Iterator begin()
        {
            return Iterator(root);
        }

        Iterator end()
        {
            return Iterator(root);
        }

		Iterator begin_preorder(){
			return Iterator(root);
		}

		Iterator end_preorder(){
			return Iterator(root);
		}

		Iterator begin_postorder(){
			return Iterator(root);
		}

		Iterator end_postorder(){
			return Iterator(root);
		}	

		Iterator begin_inorder(){
			return Iterator(root);
		}

		Iterator end_inorder(){
			return Iterator(root);
		}
	};	

	template <typename T>
    BinaryTree<T>::BinaryTree()
    {
        root = nullptr;
    }

	template <typename T>
    BinaryTree<T> BinaryTree<T>::add_left(const T& type,const T left_child)
    {
        return *this;
    }

    template <typename T>
    BinaryTree<T> BinaryTree<T>::add_right(const T& type,const T right_child)
    {
        return *this;
    }

	template <typename T>
    BinaryTree<T> BinaryTree<T>::add_root(const T& value)
    {
        return *this;
    }

	template <typename T>
    BinaryTree<T> BinaryTree<T>::get_root()
    {
        return *this;
    }
		template <typename T>
    BinaryTree<T> BinaryTree<T>::get_left(T node)
    {
        return *this;
    }
		template <typename T>
    BinaryTree<T> BinaryTree<T>::get_right(T node)
    {
        return *this;
    }

    template <typename T>
    std::ostream &operator<<(std::ostream &os, const BinaryTree<T> &bt)
    {
		std::cout<<"My Binary Tree:"<<std::endl;
        return os;
    }
	
}


