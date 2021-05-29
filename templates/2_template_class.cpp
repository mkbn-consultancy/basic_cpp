template <class T>
class Vector
{
private:
	T* 	 m_pArray;
	int	 m_iSize;
public:
	//...
	void Add(const T& element){/*...*/};
	//...
};

int main()
{
	Vector<int> v1;
	v1.Add(3);
	//...
    Vector<double> v2;
    v2.Add(5.6);
    //...
}

