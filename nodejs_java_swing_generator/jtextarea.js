const sql = require("sqlite3").verbose();

//sqlite connection stuff

function createsqlitedb(){
    let db = new sql.Database("jtextarea.sqlite");
    db.run('CREATE TABLE IF NOT EXISTS jtextarea(jtextareaname text)');
    db.close();
}

//insert the names of the jpanels

function insertjtextareanames(name){

    let db = new sql.Database("jtextarea.sqlite");
    db.run('INSERT INTO jtextarea(jtextareaname) VALUES(?)', [name], function(err){
        if(err){
            return console.log(err.message);
        }
        console.log(`Row ID is ${this.lastID}`);
    });
    db.close();
}

//write to files

//delete the jpanels from the database

function deletejtextareanames(){

}
//main runtime

function main(){

}

main();