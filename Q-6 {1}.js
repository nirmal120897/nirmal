const yargs = require('yargs')
const note = require('./note')

yargs.command({
    command: 'add',
    describe: 'This is add command',
    builder: {
        name: {
            describe: 'Enter the name',
            demandOption: true,
            type: 'String'
        },



    },
    handler(args) {

        note.Addnote(args.name)
    } 
    })
yargs.parse()

  yargs.command({
        command: 'remove',
        describe: 'This is remove  command',
        builder: {
            name: {
                describe: 'Enter the name',
                demandOption: true,
                type: 'String'
            },



        },
        handler(args) {

            note.removedata(args.name)
        }
  })
  yargs.parse()