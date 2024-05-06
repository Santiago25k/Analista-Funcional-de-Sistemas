// Obtener referencia al formulario
const formulario = document.getElementById('formulario');

// Escuchar el evento submit del formulario
formulario.addEventListener('submit', function(event) {
    event.preventDefault(); // Prevenir el envío del formulario por defecto

    // Obtener los valores de los campos del formulario
    const nombre = document.getElementById('nombre').value;
    const email = document.getElementById('email').value;
    const mensaje = document.getElementById('mensaje').value;

    // Crear objeto con los datos del formulario
    const datos = {
        nombre: nombre,
        email: email,
        mensaje: mensaje
    };

    // Enviar datos a la API de envío de correo electrónico (a través de una solicitud POST)
    fetch('http://localhost:3000/enviar-correo', {
        method: 'POST',
        headers: {
            'Content-Type': 'application/json'
        },
        body: JSON.stringify(datos),
    })
   .then(response => {
        if (response.ok) {
            alert('¡Correo enviado con éxito!');
            formulario.reset(); // Reiniciar el formulario después de enviar el correo
        } else {
            throw new Error('¡Error al enviar el correo!');
        }
    })
   .catch(error => {
        console.error('Error:', error);
        alert('¡Error al enviar el correo!');
    });
});