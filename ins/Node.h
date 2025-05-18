
template<class T>
class Node{
public:
    T x;
    T y;
public:
    virtual T distance(const Node<T>& _n) = 0;
    virtual ~Node() = default;
};

class G2D_Node : public Node<int>{
private:
    int x=0;
    int y=0;
public:
    int distance(const Node<int>& _n) override;
};
class NG2D_Node : public Node<float>{
private:
    int x=0;
    int y=0;
public:
    float distance(const Node<float>& _n) override;
};