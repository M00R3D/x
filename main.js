const sectionSelect = document.getElementById('sectionSelect');
const sections = document.querySelectorAll('section');

sectionSelect.addEventListener('change', () => {
    const selectedSection = sectionSelect.value;

    sections.forEach(section => {
        section.style.display = 'none';
    });

    document.querySelector(`#${selectedSection}`).style.display = 'block';
});






// let elementos = ['fuego', 'agua'];
// elementos.push('tierra');
// console.log(elementos); // Agrega 'tierra' al final del arreglo elementos y muestra el arreglo resultante

// let ultimoElemento = elementos.pop();
// console.log(ultimoElemento); // Elimina y muestra el último elemento del arreglo elementos

// console.log(elementos); // Muestra el arreglo elementos actual después de la operación pop

// let numeros = [1, 2, 3];
// numeros.forEach(function(numero) {
//     console.log(numero);
// });
// // Itera sobre el arreglo numeros y muestra cada elemento

// let numeros2 = [10, 20, 30, 40, 50];
// let resultado = numeros2.find(function(numero) {
//     return numero > 25;
// });
// console.log(resultado); // Encuentra y muestra el primer elemento mayor que 25 en el arreglo numeros2

// let indice = numeros2.findIndex(function(numero) {
//     return numero > 25;
 // });
// console.log(indice); // Encuentra y muestra el índice del primer elemento mayor que 25 en el arreglo numeros2

// let mayoresA25 = numeros2.filter(function(numero) {
//     return numero > 25;
// });
// console.log(mayoresA25); // Crea y muestra un nuevo arreglo con elementos mayores que 25

// let cuadrados = numeros.map(function(numero) {
//     return numero * numero;
// });
// console.log(cuadrados); // Crea y muestra un nuevo arreglo con los cuadrados de los elementos de numeros

// let suma = numeros.reduce(function(acumulador, numero) {
//     return acumulador + numero;
// }, 0); // Realiza una suma acumulativa de los elementos del arreglo numeros y muestra el resultado

// console.log(suma); // Muestra la suma de los elementos del arreglo numeros

// let elementos2 = ['fuego', 'agua', 'tierra'];
// elementos2.sort();
// console.log(elementos2); // Ordena y muestra el arreglo elementos2 en orden alfabético

// let elementos3 = ['fuego', 'agua', 'tierra', 'aire', 'roca'];
// let seleccion = elementos3.slice(1, 4);
// console.log(seleccion); // Crea y muestra un nuevo arreglo con elementos desde el índice 1 hasta el 4 (no incluido)
