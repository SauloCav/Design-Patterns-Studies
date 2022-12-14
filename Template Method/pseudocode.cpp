#include<iostream>

class BaseClass { 
protected:
	virtual void someMethod() = 0;
public:
	void ThisIsTemplateMethod() { someMethod(); }
};

class ExtendedClass_one : public BaseClass {
protected:
	void someMethod() override {
		puts("[ExtendedClass_one] Re-Define method here.");
	}
};
class ExtendedClass_two : public BaseClass {
protected:
	void someMethod() override {
		puts("[ExtendedClass_two] Re-Define method here.");
	}
};

int main() {

	BaseClass* one = new ExtendedClass_one;
	one->ThisIsTemplateMethod();

	BaseClass* two = new ExtendedClass_two;
	two->ThisIsTemplateMethod();

	return 0;
}
