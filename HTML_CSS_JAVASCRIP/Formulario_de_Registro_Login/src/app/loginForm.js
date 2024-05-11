const loginForm = document.querySelector('#login-form');
//console.log(loginForm);
loginForm.addEventListener('submit', (e) => {
    e.preventDefault();

    //Guardo en constantes los datos capturados de login
    const email = loginForm['login-email']
    const password = loginForm['login-password']
    //console.log(email, password);
})