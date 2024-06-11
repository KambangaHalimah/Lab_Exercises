class Student {
public:
  std::string name;
  int id;

  Student(const std::string& n, int i) : name(n), id(i) {}

  // Overloaded equality operator for Student comparison
  bool operator==(const Student& other) const {
    return (name == other.name && id == other.id);
  }
};