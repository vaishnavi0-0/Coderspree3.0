import sys

def get(datatype):
    if datatype == "Integer":
        return sys.getsizeof(int())
    elif datatype == "Long":
        return sys.getsizeof(int())
    elif datatype == "Float":
        return sys.getsizeof(float())
    elif datatype == "Double":
        return sys.getsizeof(float())
    elif datatype == "Character":
        return sys.getsizeof(str())
    else:
        return "Unknown data type"

datatype = input("Enter data type: ")
size = get(datatype)
print(f"Size of {datatype} in bytes: {size}")