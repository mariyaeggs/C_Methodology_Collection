//----- Queue.cpp -----
#include <iostream>
#include <queue>
using namespace std;

#include "Queue.h"
/**
 * Title: Homework 2 Submission : Stacks and Queues
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2 on 1/22/2017
 *
 * This file implements Queue member functions.
 *
 * @author Mariya Eggensperger
*/
//--- Definition of Queue constructor
Queue::Queue()
        : myFront(0), myBack(0)
{}

//--- Definition of empty()
bool Queue::empty() const
{
   return (myFront == myBack);
}

//--- Definition of enqueue()
void Queue::enqueue(const QueueElement & value)
{
   int newBack = (myBack + 1) % QUEUE_CAPACITY;
   if (newBack != myFront)     // queue isn't full
   {
      myArray[myBack] = value;
      myBack = newBack;
   }
   else
   {
      cerr << "*** Queue full -- can't add new value ***\n"
              "Must increase value of QUEUE_CAPACITY in Queue.h\n";
      exit(1);
   }
}

//--- Definition of display()
void Queue::display(ostream & out) const
{
   for (int i = myFront; i != myBack; i = (i + 1)%QUEUE_CAPACITY)
      out << myArray[i] << endl;

}

//--- Definition of front()
QueueElement Queue::front() const
{
   if ( !empty() )
      return (myArray[myFront]);
   else
   {
      cerr << "*** Queue is empty -- returning garbage value ***\n";
      QueueElement garbage = 9999;
      return garbage;
   }
}

//--- Definition of dequeue()
void Queue::dequeue()
{
   if ( !empty() )
      myFront = (myFront + 1) % QUEUE_CAPACITY;
   else
   {
      cerr << "*** Queue is empty -- "
              "can't remove a value ***\n";
      exit(1);
   }
}


void push(int)
{
   int value;
   q1.enqueue(value); // Enqueue a value into q1
}

int pop()
{
   if(q1.empty() && q2.empty) // If q1 and q2 stacks are empty
   {
      throw StackException("StackException: stack empty on pop"); // Throw an empty stack error exception
   }
   if(!q1.empty()) // If not q1 is empty
   {
      // Then, while the size of q1 is greater than 1
      while(q1.size()>1)
      {
         // Do the following to swap
         (q2.enqueue(q1.dequeue)); // Add the dequeued value from q1 to q2
         return q1.dequeue; // Return the dequeued value of q1
      }
      while (q2.size()>1) // While the size of q2 is greater than 1
      {
         // Do the following to swap
         q1.enqueue(q2.dequeque()); // Add the dequeued value from q2 to q1
         return q2.dequeue(); // Returned the dequeued value of q2
      }
   }
}





