#Josef Los
#1/31/19
#Homework 1
#A simple program that deals with OOP concepts

class Shape:
	def __init__(self, name, sides=-1):
		self.name = name
		self.sides = sides
	
	def display(self):
		print "Hello! My name is " + self.name + ". I am a " + self.__class__.__name__ + " and I have " + str(self.sides) + " sides!"
	
	def getname(self):
		return self.name

	def setname(self, newname):
		self.name = newname

	def getsides(self):
		return self.sides

	def __cmp__(self, other):
		return self.name != other


class Circle(Shape):
	def __init__(self, name):
		self.name = name
		self.sides = 0

class Rectangle(Shape):
	def __init__(self, name):
		self.name = name
		self.sides = 4

class Triangle(Shape):
	def __init__(self, name):
		self.name = name
		self.sides = 3

class ShapeDatabase:
	def __init__(self, shapes):
		self.shapes = shapes
	
	def add(self, shape):
		self.shapes.append(shape)
	
	def remove(self, shape):
		self.shapes.remove(shape)

	def listshapes(self):
		for i in self.shapes:
			i.display()

	def sortbysides(self):
		self.shapes.sort(key=lambda shape: shape.sides)

	def sortbyname(self):
		self.shapes.sort(key=lambda shape: shape.name)

	def getsize(self):
		return len(self.shapes)
	
			
#initialize the shapes and the database
mycircle = Circle("Terry")	
mytriangle = Triangle("Lisa")
myrectangle = Rectangle("Bob")
myshapes = [mycircle, mytriangle, myrectangle]
mydatabase = ShapeDatabase(myshapes)

#print the size of database and have each shape display itself
print mydatabase.getsize()
mydatabase.listshapes()
