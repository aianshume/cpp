print("Hello World")

#this is single line comment
"""
this is multi line comment 
how to create variables
"""

name = "Anshu"
age = 17
password = str("Akane@@7850")
carname = "volvo"

print(name, age, password)

# glboal variables
papa = "Hero"

def whoIsPapa():
    global papaName
    papaName = "atar"
    print(papa)

whoIsPapa()

print(papaName)

# varables types
x = "Anshu Meena" # str
x = 20 #number
x = 20.5 #float
x = 1100111111j #complax
x = ["apple", "banana", "charry"] #list
x = ("aman", "atar", "chinki") #tuple
x = range(5) #range
x = {
    "name": "anshu",
    "age": 18
}
x = {"apple", "banana", "charry"} #set
x = frozenset({"apple", "banana", "charry"}) #frozenset
x = True #boolen
x = b"Anshu" #bytearray
x = memoryview(bytes(5))
x = bytearray(5)
print(x)