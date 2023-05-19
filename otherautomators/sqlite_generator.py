tablename = input("Enter table name: ")
numfields = int(input("Enter number of fields you want to add: "))
fields = [] #a placeholder to add the fields to write to a file
i = 0 #start a basic integer to have a starting point and to know when we have hit the limit of fields
j = 0 #another integer to help us know when we hit the limit of the fields dict/list when writing to the file

while i < numfields:
    fieldname = input("Enter field name: ")
    fieldtype = input("Enter field type (real,blob,integer,text): ")
    field = fieldname + " " + fieldtype
    fields.append(field)
    i += 1

file = open("data.sqlite","w+")
file.write("CREATE TABLE IF NOT EXISTS " + tablename + "(")
for j in fields:
    file.write(fields[j] + ",")
    j += 1
file.write(");")
file.close()
