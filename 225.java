//225. Implement Stack using Queues

import java.util.LinkedList; 
import java.util.Queue; 
class MyStack {
    private Queue<Integer> q1;
    private Queue<Integer> q2;
    private Queue<Integer> temp;
    private int s1;
    private int s2;
    private int q;
    private int t;
    private int last;
    /** Initialize your data structure here. */
    public MyStack() {
        q1 = new LinkedList<>();
        q2 = new LinkedList<>();
        temp = new LinkedList<>();
    }
    
    /** Push element x onto stack. */
    public void push(int x) {
        q1.add(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    public int pop() {
        while (q1.size()>1){
            t = q1.remove();
            q2.add(t);
        }
        temp = q2;
        q2 = q1;
        q1 = temp;
        last = q2.remove(); 
        return last;
    }
    
    /** Get the top element. */
    public int top() {
        while (q1.size()>1){
            t = q1.remove();
            q2.add(t);
        }
        return q1.peek();
    }
    
    /** Returns whether the stack is empty. */
    public boolean empty() {
        return (q1.size()==0 && q2.size()==0);
    }
}
