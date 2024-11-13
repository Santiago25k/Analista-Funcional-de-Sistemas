CREATE TABLE proveedor (
    id_proveedor INT AUTO_INCREMENT PRIMARY KEY,
    nombre VARCHAR(50) NOT NULL,
    telefono INT NOT NULL,
    documento INT NOT NULL,
    localidad VARCHAR(20) NOT NULL
);

CREATE TABLE compras (
    id_compras INT AUTO_INCREMENT PRIMARY KEY,
    fecha_compra DATE NOT NULL,
    id_proveedor INT,
    FOREIGN KEY (id_proveedor) REFERENCES proveedor(id_proveedor)
);

ALTER TABLE proveedor ADD razon_social VARCHAR(50);

select id_proveedor, razon_social, telefono from proveedor;

select p.id_proveedor, p.razon_social, p.telefono, c.fecha_compra, c.monto FROM proveedor p LEFT JOIN compras c on p.id_proveedor = c.id_proveedor;

update proveedor SET localidad = 'wilde' WHERE localidad = 'cordoba';


CREATE TABLE empleados (
    id_empleado INT AUTO_INCREMENT PRIMARY KEY,
    nombre VARCHAR(50) NOT NULL,
    telefono INT NOT NULL,
    localidad VARCHAR(20) NOT NULL
);
CREATE TABLE clientes (
    id_cliente INT AUTO_INCREMENT PRIMARY KEY,
    apellido varchar(50),
    documento int not null,
    id_empleado int,
    FOREIGN KEY (id_empleado) REFERENCES empleados (id_empleado)
);


INSERT INTO clientes (apellido, documento, id_empleado) VALUES ('Gonzalez', '12345678', 1),
('Lopez', '87654321', 1), ('Martinez', '23456789', 1);

select apellido, documento FROM clientes where id_empleado = 1;