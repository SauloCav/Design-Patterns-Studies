## Singleton


Singleton is a creational design pattern that lets you ensure that a class has only one instance, while providing a global access point to this instance.
The singleton design pattern is one of the twenty-three well-known "Gang of Four" design patterns that describe how to solve recurring design problems to design flexible and reusable object-oriented software with the aim of making it easier to implement, change, test, and reuse objects.

Critics consider the singleton to be an anti-pattern as it introduces global state into an application, often unnecessarily. This in turn can place restrictions on any abstraction that uses the singleton, for example by preventing concurrent use of multiple instances. Furthermore, because it is often exposed as a globally visible accessor, its presence complicates dependency analysis by introducing a potential dependency on the singleton in all code it is visible to, thus requiring analysis of implementation details to determine if a dependency actually exists.

All implementations of the Singleton have these two steps in common:

Make the default constructor private, to prevent other objects from using the new operator with the Singleton class.
Create a static creation method that acts as a constructor. Under the hood, this method calls the private constructor to create an object and saves it in a static field. All following calls to this method return the cached object.
If your code has access to the Singleton class, then it’s able to call the Singleton’s static method. So whenever that method is called, the same object is always returned.
