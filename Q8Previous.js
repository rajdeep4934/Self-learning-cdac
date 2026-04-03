const express = require('express');
const app = express();
const path = require('path');

app.set("view engine", "ejs");
app.set("views", path.join(__dirname, "views"));

app.get("/", (req, res) => {
    res.render('home');
});

app.get("/aboutUs", (req, res) => {
    res.render('aboutus');
});

app.get("/contactUs", (req, res) => {
    res.render('contactus');
});

app.get("/login", (req, res) => {
    res.render('login');
});

app.get("/signup", (req, res) => {
    res.render('signup');
});

app.listen(3000, () => {
    console.log("Server is running on Port 3000");
});