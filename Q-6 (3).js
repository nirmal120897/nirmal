const fs = require('fs')
const loaddata = () => {

    const buffer = fs.readFileSync("note.json")
    const data = buffer.toString()
     return JSON.parse(data)
}
const Addnote = (name) => {
    const data2 = loaddata()
    data2.push({ name: name })

    savenote(data2)
    console.log(data2)
}

const savenote = (data) => {
    const savedata = JSON.stringify(data)
    fs.writeFileSync('note.json', savedata)

}

const removedata = (name)=>
{
const notes = loaddata()
const keepnote = notes.filter((note)=>note.name != name)
if(keepnote.lenght<notes.lenght){
    savenote(keepnote)
    console.log('user remove succesfully....')
}
else{
    console.log("The data is not exist.....")
}

}

module.exports = {
    Addnote,removedata
}

