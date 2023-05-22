const sql = require("sqlite3").verbose();

//sqlite connection stuff

function createsqlitedb(){
    let db = new sql.Database("jframe.sqlite");
    db.run('CREATE TABLE IF NOT EXISTS jframe(jframename text)');
    db.close();
}

//insert the names of the jpanels

function insertjframenames(name){

    let db = new sql.Database("jframe.sqlite");
    db.run('INSERT INTO jframe(jframename) VALUES(?)', [name], function(err){
        if(err){
            return console.log(err.message);
        }
        console.log(`Row ID is ${this.lastID}`);
    });
    db.close();
}

//write to files

//delete the jpanels from the database

function deletejframenames(){

}
//main runtime

function main(){

}

main();