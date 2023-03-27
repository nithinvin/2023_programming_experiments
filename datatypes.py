import sys

int_data = 62
float_data = 3.45
bool_data = True
list_data = ["Hello", "world"]
dict_data = {"name":"nithin", "age":24}

print("Size of int = ", sys.getsizeof(int_data))
print("Size of float = ", sys.getsizeof(float_data))
print("Size of bool = ", sys.getsizeof(bool_data))
print("Size of list = ", sys.getsizeof(list_data))
print("Size of dict = ", sys.getsizeof(dict_data)) 
