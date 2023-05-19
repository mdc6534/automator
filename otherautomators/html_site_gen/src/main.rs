use std::io;

fn stylesheet(){

    println!("Generating a stylesheet....");

    println!("Enter file name: ");
    let mut filename = String::new();
    io::stdin()
        .read_line(&mut filename)
        .expect("Failed to read input!");

}

fn basichtml(){

    println!("Generating an html page.....");

    println!("Enter file name: ");
    let mut filename = String::new();
    io::stdin()
        .read_line(&mut filename)
        .expect("Failed to read input!");

}

fn blockquote(){

    println!("Generating a blockquote.....");

    println!("Enter file name: ");
    let mut filename = String::new();
    io::stdin()
        .read_line(&mut filename)
        .expect("Failed to read input!");

}

fn table(){

    println!("Generating a table.....");

    println!("Enter file name: ");
    let mut filename = String::new();
    io::stdin()
        .read_line(&mut filename)
        .expect("Failed to read input!");

}

fn form(){

    println!("Generating a form......");

    println!("Enter file name: ");
    let mut filename = String::new();
    io::stdin()
        .read_line(&mut filename)
        .expect("Failed to read input!");
}

fn menu(){

    loop{

        //clear the console before the menu

        //print a very basic menu

        println!("HTML Site Generator!");
        println!("====================");
        println!("1. Generate A Stylesheet");
        println!("2. Generate A Basic Page");
        println!("3. Generate A Blockquote");
        println!("4. Generate A Table");
        println!("5. Generate A Form");
        println!("Enter Number of Choice: ");

        //fetch the input

        let mut choice = String::new();
        io::stdin()
            .read_line(&mut choice)
            .expect("Failed to read input");

        let choice:u32 = choice
            .trim()
            .parse()
            .expect("Please type a number!");

        println!("Your choice: {choice}");

        match choice{
            1 => stylesheet(),
            2 => basichtml(),
            3 => blockquote(),
            4 => table(),
            5 => form(),
        }

    }

}

fn main() {

    menu();
}