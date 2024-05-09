
const botonRedireccionarLogin = document.getElementById('botonRedireccionarRegistro');

botonRedireccionarLogin.addEventListener('click', (e) => {
    e.preventDefault();
    window.location.href = './index_registro.html';
});