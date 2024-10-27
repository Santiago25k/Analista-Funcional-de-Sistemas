document.addEventListener('DOMContentLoaded', function() {
    const items = document.querySelectorAll('.content ul li');

    items.forEach(item => {
        item.addEventListener('click', function() {
            const target = item.getAttribute('data-target');
            const modulo = document.querySelector(target);
            if (modulo) {
                modulo.scrollIntoView({ behavior: 'smooth' });
            }
        });
    });
});
