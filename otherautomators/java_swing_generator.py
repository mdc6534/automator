#imports

import sqlite3 as sql 
import os,sys,subprocess 

#class

class basicJavaSwingGenerator():

    def __init__():
        pass 
    
    def jlabel(name):
        return "JLabel " + name + "label = new JLabel(\"" + name.title() +"\");\n"

    def jtextfield(name,size):
        return "JTextField " + name + "textfield = new JTextField(" + size + ");\n"

    def jtextarea(name,editable_boolean):
        return "JTextArea " + name + "textarea = new JTextArea();\n" + name + "textarea.setEditable(\"" + editable_boolean + "\");\n" 
    
    def jscrollpane(name):
        return "JScrollPane " + name + "scrollpane = new JScrollPane();\n"

    def jmenubar():
        return "JMenuBar menubar = new JMenuBar();\n setJMenuBar(menubar);\n menubar.add(filemenu);\n" 

    def filemenu():
        return "JMenu filemenu = new JMenu(\"File\");\n" 

    def quit_item():
        return "JMenuItem quititem = new JMenuItem(\"Quit\");\n filemenu.add(quititem);\n" 
    
    def about_item():
        return "JMenuItem aboutitem = new JMenuItem(\"About\");\nfilemenu.add(aboutitem);\n filemenu.addSeparator();\n" 

    def jpanel():
        return "JPanel panel = new JPanel();"

    def jdialog(name):
        return "import java.awt.*;\n import javax.swing.*;\n\n public class " + name.title + "Dialog extends JDialog{\n public " + name.title + "Dialog(){\n \n} "+"\n}"

#class menu

class menu():
    def __init__():
        pass

    def elementsmenu():
        pass

    def menu():
        print("1. Generate Elements")
        choice = int(input("Enter choice of selection: "))

#main procedure

def main():
    menu.menu()

main()