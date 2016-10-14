# Programming objects & concepts

## Data processing primitives
* counter
* comparator
* ALU
* arbiter
* object attribute
* flag/gate allowing or not an operation
* computed field
* pointer/iterator/index
* data structure, ADT
* creation/destruction
* garbage collection/references

## Control flow primitives
* Function/procedure
* Recursion/iteration
* Selection
* Continuations/jumps/exceptions/coroutines/generators
* Promises

## Language concepts
* variable
* concurrency/multitasking - (concurrency is used to increase throughput when several CPUs are present, or responsiveness)
* parallel computation
* closure
* lexical & syntax grammar
* lexical/dynamic scoping
* early/late name binding
* name resolution
* static/dynamic typing
* object lifetime
* namespaces

# General programming principles
* Main goal of architecture is flexibility, maintainability, and scalability
* Real code is maintainable code!
* DRY - Don't Repeat Yourself
* YAGNI - part of XP. You ain't gonna need it
* KISS - keep it simple stupid
* Locality
* Encapsulation (info hiding)
* Cohesion
* Coupling & Dependency management (avoiding cyclic/non-DAG dependencies)
* Polymorphism
* Abstraction
* (Levels of) indirection
* Patterns
* Smells
* Refactoring
* Design by contract (Bertrand Meyer)

Quote by Robert C. Martin - OO is just a set of tools and techniques for Dependency Management

# OO design principles
See <http://butunclebob.com/ArticleS.UncleBob.PrinciplesOfOod>

## Class design principles (formulated by Robert C. Martin in 2000)

* S = SRP = Single Responsibility Principle  
  "A class should have one, and only one, reason to change."
* O = OCP = Open/Closed Principle  
  "You should be able to extend a classes behavior, without modifying it."
* L = LSP = Liskov Substitution Principle   
  "Derived classes must be substitutable for their base classes."
* I = ISP = Interface Segregation Principle  
  "Make fine grained interfaces that are client specific."
* D = DIP = Dependency Inversion Principles  
  "Depend on abstractions, not on concretions."
  
## Package design principles

### Cohesion principles
* REP = Reuse Release Equivalence Principle   
  "The granule of reuse is the granule of release."
* CRP = Common Reuse principle  
  "Classes that are used together are packaged together."
* CCP = Common Closure principle  
  "Classes that change together are packaged together."

### Coupling
* ADP = Acyclic Dependency Principle  
  "The dependency graph of packages must have no cycles."
* SDP = Stable Dependencies Principle  
  "Depend in the direction of stability."
* SAP = Stable-abstractions Principles  
  "Abstractness increases with stability."
  
# OO patterns

## Analysis patterns (Larman)

General responsibility assignment software patterns (or principles), abbreviated GRASP
* Controller
* Creator
* High cohesion
* Indirection
* Information expert
* Low coupling
* Polymorphism
* Protected variations
* Pure fabrication

## GoF Design Patterns
### Creational
* Abstract factory pattern groups object factories that have a common theme.
* Builder pattern constructs complex objects by separating construction and representation.
* Factory method pattern creates objects without specifying the exact class to create.
* Prototype pattern creates objects by cloning an existing object.
* Singleton pattern restricts object creation for a class to only one instance.

### Structural
* Adapter allows classes with incompatible interfaces to work together by wrapping its own interface around that of an already existing class.
* Bridge decouples an abstraction from its implementation so that the two can vary independently.
* Composite composes zero-or-more similar objects so that they can be manipulated as one object.
* Decorator dynamically adds/overrides behaviour in an existing method of an object.
* Facade provides a simplified interface to a large body of code.
* Flyweight reduces the cost of creating and manipulating a large number of similar objects.
* Proxy provides a placeholder for another object to control access, reduce cost, and reduce complexity.

### Behavioral
* Chain of responsibility delegates commands to a chain of processing objects.
* Command creates objects which encapsulate actions and parameters.
* Interpreter implements a specialized language.
* Iterator accesses the elements of an object sequentially without exposing its underlying representation.
* Mediator allows loose coupling between classes by being the only class that has detailed knowledge of their methods.
* Memento provides the ability to restore an object to its previous state (undo).
* Observer is a publish/subscribe pattern which allows a number of observer objects to see an event.
* State allows an object to alter its behavior when its internal state changes.
* Strategy allows one of a family of algorithms to be selected on-the-fly at runtime.
* Template method defines the skeleton of an algorithm as an abstract class, allowing its subclasses to provide concrete behavior.
* Visitor separates an algorithm from an object structure by moving the hierarchy of methods into one object.


