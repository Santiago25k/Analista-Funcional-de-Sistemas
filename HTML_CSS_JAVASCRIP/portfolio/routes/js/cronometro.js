// Establecemos la duración de 2 semanas (336 horas)
const duracionEnMilisegundos = 14 * 24 * 60 * 60 * 1000; // 14 días en milisegundos

// Verificamos si ya existe una fecha final en localStorage
let fechaFinal = localStorage.getItem("fechaFinal");

// Si no existe, la calculamos y la almacenamos
if (!fechaFinal) {
    fechaFinal = Date.now() + duracionEnMilisegundos;
    localStorage.setItem("fechaFinal", fechaFinal);
} else {
    fechaFinal = parseInt(fechaFinal); // Convertimos el string almacenado a número
}

// Función que actualiza el cronómetro
function actualizarCronometro() {
    const ahora = Date.now();
    const tiempoRestante = fechaFinal - ahora;

    if (tiempoRestante <= 0) {
        document.getElementById("cronometro").innerHTML = "¡El sitio ha sido actualizado!";
        clearInterval(intervalo);
        return;
    }

    const dias = Math.floor(tiempoRestante / (1000 * 60 * 60 * 24));
    const horas = Math.floor((tiempoRestante % (1000 * 60 * 60 * 24)) / (1000 * 60 * 60));
    const minutos = Math.floor((tiempoRestante % (1000 * 60 * 60)) / (1000 * 60));
    const segundos = Math.floor((tiempoRestante % (1000 * 60)) / 1000);

    document.getElementById("dias").textContent = dias;
    document.getElementById("horas").textContent = horas;
    document.getElementById("minutos").textContent = minutos;
    document.getElementById("segundos").textContent = segundos;
}

// Actualizamos el cronómetro cada segundo
const intervalo = setInterval(actualizarCronometro, 1000);

// Inicializamos el cronómetro cuando se carga la página
actualizarCronometro();
