function procesarEntradaUsuario(callback){
    var nombre = prompt("Por favor, ingrese su nombre");
    callback(nombre);
}

function saludarUsuario(nombre){
    alert("Hola, " + nombre);
}

procesarEntradaUsuario(saludarUsuario);