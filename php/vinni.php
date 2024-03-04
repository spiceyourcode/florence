<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php
    $servername="localhost";
    $username="root";
    $password="";

    //creating a connection with the server 
    $conn=mysqli_connect($servername,$username,$password);
    

    //cheking the connection 
    if(!$conn){
        die("Connection was unsucessful:".mysqli_connect_error());
    }
    
    //creating the database 

    $sql="CREATE DATABASE Chuka_students";
    if(mysqli_query($conn, $sql)){
        echo"Database Created Successfully";
    }
    else{
        echo"Error creating the Database".mysqli_error($conn);
    }

    //creating a table 
    $sql= "CREATE TABLE auth(
        Reg_No VARCHAR (50),
        Password VARCHAR (50),
        PRIMARY KEY (Reg_No),     
        )";
    if(mysqli_query($conn, $sql)){
        echo"Table Created Successfully";
    }
    else{
        echo"Error creating the Table".mysqli_error($conn);
    }   
    
    //retrieving and insering data in the database from the form 
    $regno=$_POST["txtregno"];
    $pass=$_POST["txtpassword"];

    $sql= "INSERT INTO auth (Reg_No,Password)
            VALUES('$regno','$pass')";
    if(mysqli_multi_query($conn,$sql)){
        echo"Record Entered Sucessfully";
    }
    else{
        echo"Error Insering Records".mysqli_error($conn);

    }    
    //closing the connection
    mysqli_close($conn);
            


    ?>
</body>
</html>