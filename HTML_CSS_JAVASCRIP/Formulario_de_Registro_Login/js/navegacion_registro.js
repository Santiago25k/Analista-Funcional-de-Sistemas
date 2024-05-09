// Selecciona el botón con el id 'botonRedireccionarLogin' y lo guarda en la variable botonRedireccionar
const botonRedireccionar = document.getElementById('botonRedireccionarLogin');

// Agrega un event listener al botón para el evento 'click'
botonRedireccionar.addEventListener('click', (e) => {
    // Previene el comportamiento predeterminado del evento (en este caso, prevenir el envío de un formulario)
    e.preventDefault();
    // Redirige al usuario a la página 'index_login.html' cuando se hace clic en el botón
    window.location.href = './index_login.html';
});