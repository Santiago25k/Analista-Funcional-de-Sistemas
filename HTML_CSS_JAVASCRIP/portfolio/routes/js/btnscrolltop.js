// Mostrar el botón cuando el usuario haga scroll hacia abajo
window.onscroll = function() {
    var scrollToTopBtn = document.getElementById("scrollToTopBtn");
    if (document.body.scrollTop > 100 || document.documentElement.scrollTop > 100) {
      scrollToTopBtn.style.display = "block";
    } else {
      scrollToTopBtn.style.display = "none";
    }
  };
  
  // Función para hacer scroll hasta el top
  function scrollToTop() {
    window.scrollTo({
      top: 0,
      behavior: 'smooth' // Hacer que el scroll sea suave
    });
  }
  