template<typename T>
concept Addable = requires (T a, T b) {
	a + b;
};

int main() { }
