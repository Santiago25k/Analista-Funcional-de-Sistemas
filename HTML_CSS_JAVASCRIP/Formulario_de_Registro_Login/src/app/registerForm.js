const registerForm = document.querySelector('#register-form');
//console.log(registerForm);
registerForm.addEventListener('submit', (e) => {
    e.preventDefault();


    //Guardo en constantes los datos capturados de registro
    const email = registerForm['register-email'].value
    const password = registerForm['register-password'].value
    //console.log(email, password);
})