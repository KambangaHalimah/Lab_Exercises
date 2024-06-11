class Complex {
public:
  int real, imag;

  Complex(int r = 0, int i = 0) : real(r), imag(i) {}

  // Overloaded addition operator for Complex numbers
  Complex operator+(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
  }
};

int main() {
  Complex c1(2, 3), c2(4, 5);
  Complex c3 = c1 + c2; // Uses the overloaded addition operator
  std::cout << c3.real << " + " << c3.imag << "i" << std::endl; // Output: 6 + 8i
}