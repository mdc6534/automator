arrayX = []

def file_to_python_array():
    f = input("Enter file: ")
    file = open(f,"r")
    for line in file:
        arrayX.append(line)
    file.close()

def python_array_to_c_array():
    file = open("array.txt","w")
    quotes = '\"'
    filestring = ""
    for i in arrayX:
        #file.write(quotes + i.strip() + quotes + "\n")
        filestring += quotes + i.strip() + quotes + ","
    file.write(filestring)
    file.close()

file_to_python_array()
python_array_to_c_array()
