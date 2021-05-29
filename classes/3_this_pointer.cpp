class MyClass
{
public:
	int getMultBy(int y) { return _x*y; } //==> The compiler provides:
							//	int getByMult(this,int){
							//		return this->_x * y;
							//	}
	int _x;
};

int main()
{
	MyClass m;
	m._x = 3;
	m.getMultBy(6); // ==> The compiler provides: getMultBy(&m,6);
}