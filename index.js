const express = require('express');
const fileUpload = require('express-fileupload');
const fs = require('fs')
const cors = require('cors')
const app = express();

app.use(express.static('public')); 
app.use(cors()); 
app.use(fileUpload());

app.post('/upload', (req, res) => {
    if (!req.files) {
        return res.status(500).send({ msg: "file is not found" })
    }

    const myFile = req.files.file;
 
    myFile.mv(`${__dirname}/public/${myFile.name}`, function (err) {
        if (err) {
            return res.status(500).send({ msg: "Error occured" });
        }
        return res.send({name: myFile.name, path: `/${myFile.name}`});
    });
})
app.get('/upload/:filename',(req,res)=>{
    var data =fs.readFileSync(`./public/${req.params.filename}`);
    res.contentType("application/pdf");
    res.send(data);
})

app.listen(8000, () => {
    console.log('server is running at port 8000');
})