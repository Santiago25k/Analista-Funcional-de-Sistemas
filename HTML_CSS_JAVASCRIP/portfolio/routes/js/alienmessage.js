// Mostrar el mensaje con el alien, luego ocultarlo después de unos segundos
window.onload = function() {
    const alienMessage = document.getElementById('alienMessage');
    
    // Añade la clase 'visible' para mostrar el mensaje
    alienMessage.classList.add('visible');
    
    // Después de 5 segundos, oculta el mensaje
    setTimeout(function() {
      alienMessage.classList.remove('visible');
      alienMessage.classList.add('hidden');
    }, 5000); // 5000ms = 5 segundos
  };