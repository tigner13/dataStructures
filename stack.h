template <typename E>
class Stack {
  enum {CAPACITY = 100}
public:
  Stack(int cap =CAPACITY);
  int size() const;
  bool empty() const;
  const E& top() const throw(StackEmpty);
  void push(const E& e) throw(StackFull);
  void pop() throw(StackEmpty)
private:
  E* s;
  int capacity;
  int t;
}
