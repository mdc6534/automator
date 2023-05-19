import os,sys
import sqlite3 as sql 

class GodotAutomatorUI():

    def __init__(self):
        pass
    
    def createProject(name):
        createSceneFolder(name)
        file = open(name + "/project.godot","w+")
        file.write("\n")
        file.write("; Engine configuration file.")
        file.write("\n")
        file.write("; It's best edited using the editor UI and not directly,")
        file.write("\n")
        file.write("; since the parameters that go here are not all obvious.")
        file.write("\n")
        file.write(";")
        file.write("\n")
        file.write("; Format:")
        file.write("\n")
        file.write(";   [section] ; section goes between []")
        file.write("\n")
        file.write(";   param=value ; assign values to parameters")
        file.write("\n")
        file.write("config_version=5")
        file.write("\n")
        file.write("[application]")
        file.write("\n")
        file.write("config/name=\"" + name + "\"")
        file.write("\n")
        file.write("run/mains_scene=\"\"")
        file.write("\n")
        file.write("config/features=PackedStringArray(\"4.0\", \"C#\", \"GL Compatibility\")")
        file.write("\n")
        file.write("config/icon=\"\"")
        file.write("\n")
        file.write("[dotnet]")
        file.write("\n")
        file.write("project/assembly_name=\"" + name + "\"")
        file.write("\n")
        file.write("[rendering]")
        file.write("\n")
        file.write("renderer/rendering_method=\"gl_compatibility\"")
        file.write("\n")
        file.write("renderer/rendering_method.mobile=\"gl_compatibility\"")
        file.close()

    def createScene(name):
        file = open(name + ".tscn", "w+")
        file.write("[gd_scene format=3 uid=\"uid://\"]\n")
        file.write("[node name=\"Control\" type=\"Control\"]\n")
        file.write("layout_mode=3\n")
        file.write("anchors_preset = 15\n")
        file.write("anchor_right = 1.0\n")
        file.write("anchor_bottom = 1.0\n")
        file.write("grow_horizontal = 2\n")
        file.close()

    def createButton():
        numButtons = int(input("Enter number of buttons: "))
        i = 0 
        while i < numButtons:
            buttonname = input("Enter button name: ")
            offsetleft = input("Enter left offset: ")
            offsettop = input("Enter top offset: ")
            offsetright = input("Enter right offset: ")
            offsetbottom = input("Enter bottom offset: ")
            text = input("Enter text: ")
            file = open(buttonname + "_godot_buttons.txt","w+")
            file.write("[node name=\"" + buttonname + "\"]\n")
            file.write("layout_mode=0\n")
            file.write("offset_left = " + offsetleft)
            file.write("\n offset_top = " + offsettop)
            file.write("\n offset_right = " + offsetright)
            file.write("\n offset_bottom = " + offsetbottom)
            file.write("\n text = " + text)
            file.close()
            i += 1

    def createSceneFolder(name):
        os.system('mkdir ' + name) 

def menu():
    print("1. Create Project")
    print("2. Create Scene")
    print("3. Create Scene Folder")
    print("4. Create Button")
    print("0 to exit")
    choice = int(input("Enter number of selection: "))
    while choice != 0:
        if choice == 1:
            nameOfProject = input("Enter project name: ")
            GodotAutomatorUI.createProject(nameOfProject)
        elif choice == 2:
            numScenes = int(input("Enter number of scenes to create: "))
            i = 0
            while i < numScenes:
                nameScene = input("Enter name of scene: ")
                GodotAutomatorUI.createScene(name)
                i += 1 
        elif choice == 3:
            GodotAutomatorUI.createButton() 
        elif choice == 4:
            fol = input("Enter folder name: ")
            GodotAutomatorUI.createSceneFolder(name)
        else:
            print("Invalid selection") 

def main():
    menu()

main()