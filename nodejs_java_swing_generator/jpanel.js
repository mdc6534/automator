const sql = require("sqlite3").verbose();

//sqlite connection stuff

function createsqlitedb(){
    let db = new sql.Database("jpanel.sqlite");
    db.run('CREATE TABLE IF NOT EXISTS jpanel(jpanelname text)');
    db.close();
}

//insert the names of the jpanels

function insertjpanelnames(name){

    let db = new sql.Database("jpanel.sqlite");
    db.run('INSERT INTO jpanel(jpanelname) VALUES(?)', [name], function(err){
        if(err){
            return console.log(err.message);
        }
        console.log(`Row ID is ${this.lastID}`);
    });
    db.close();
}

//write to files

//delete the jpanels from the database

function deletejpanelnames(){

}
//main runtime

function main(){

}

main();