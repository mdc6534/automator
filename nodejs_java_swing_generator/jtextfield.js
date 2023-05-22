const sql = require("sqlite3").verbose();

//sqlite connection stuff

function createsqlitedb(){
    let db = new sql.Database("jtextfield.sqlite");
    db.run('CREATE TABLE IF NOT EXISTS jtextfield(jtextfieldname text)');
    db.close();
}

//insert the names of the jpanels

function insertjtextfieldnames(name){

    let db = new sql.Database("jtextfield.sqlite");
    db.run('INSERT INTO jpanel(jtextfieldname) VALUES(?)', [name], function(err){
        if(err){
            return console.log(err.message);
        }
        console.log(`Row ID is ${this.lastID}`);
    });
    db.close();
}

//write to files

//delete the jpanels from the database

function deletejtextfieldnames(){

}
//main runtime

function main(){

}

main();