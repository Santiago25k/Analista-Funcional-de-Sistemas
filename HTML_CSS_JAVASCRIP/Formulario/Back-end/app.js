// Importar los paquetes necesarios
const express = require('express'); // Importar express
const nodemailer = require('nodemailer'); // Importar nodemailer
const cors = require('cors'); // Importar el paquete cors
const app = express(); // Crear una instancia de Express
const PORT = process.env.PORT || 3000; // Obtener el puerto del entorno o usar el puerto 3000 por defecto
require('dotenv').config(); // Cargar variables de entorno desde .env
const correo = process.env.CORREO; // Obtener el correo electrónico desde las variables de entorno
const contrasena = process.env.CONTRASENA; // Obtener la contraseña desde las variables de entorno

// Verificar que las variables de entorno estén definidas
if (!correo || !contrasena) {
    console.error('Error: Las variables de entorno CORREO y/o CONTRASENA no están definidas en el archivo .env');
    process.exit(1); // Salir del proceso con código de error
}

// Habilitar CORS para todas las solicitudes
app.use(cors());

// Middleware para analizar JSON
app.use(express.json());

// Ruta para manejar las solicitudes POST a /enviar-correo
app.post('/enviar-correo', (req, res) => {
    const { nombre, email, mensaje } = req.body; // Extraer datos del cuerpo de la solicitud

    // Validación de datos del formulario
    if (!nombre || !email || !mensaje) {
        return res.status(400).send('Error: Todos los campos son obligatorios');
    }

    // Configurar el transporter para enviar correo electrónico usando nodemailer
    const transporter = nodemailer.createTransport({
        service: 'gmail',
        auth: {
            user: correo,
            pass: contrasena
        }
    });

    // Configurar el correo electrónico a enviar
    const mailOptions = {
        from: correo,
        to: correo, // Envía el correo a ti mismo por ahora
        subject: 'Mensaje desde el formulario de contacto',
        text: `Nombre: ${nombre}\nEmail: ${email}\nMensaje: ${mensaje}`
    };

    // Enviar el correo electrónico
    transporter.sendMail(mailOptions, (error, info) => {
        if (error) {
            console.error('Error al enviar el correo:', error);
            return res.status(500).send('Error al enviar el correo');
        } else {
            console.log('Correo enviado:', info.response);
            return res.status(200).send('Correo enviado con éxito');
        }
    });
});

// Iniciar el servidor
app.listen(PORT, () => {
    console.log(`Servidor corriendo en el puerto ${PORT}`);
});