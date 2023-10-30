def dataTypes(data_type: str):
    if data_type == "Integer":
        return 4
    elif data_type == "Long":
        return 8
    elif data_type == "Double":
        return 8
    elif data_type == "Float":
        return 4
    elif data_type == "Character":
        return 1
    else:
        print("Unknown data type")