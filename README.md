[⬅️ Volver a "Proyectos con Qt"](https://github.com/SantiagoBaeza/proyectos-con-Qt/tree/main)

# Mini calculadora en Qt

Este proyecto implementa una calculadora sencilla en Qt, aplicando **señales y slots** para manejar la lógica de operaciones básicas.  
Además, se utilizaron **layouts** para que la interfaz se adapte automáticamente al tamaño de la ventana, manteniendo la disposición de los elementos al agrandar o achicar la calculadora.

---

## Contexto

En mis primeros pasos con el uso de Qt, desarrollé ejercicios complementarios orientados a reforzar conocimientos fundamentales del framework.  
Este proyecto corresponde a una práctica básica de señales y slots, aplicada en una calculadora sencilla. El objetivo principal fue afianzar el manejo de widgets, la interacción entre elementos gráficos y la lógica de operaciones, incorporando además layouts para garantizar una interfaz adaptable y funcional.

---

## Capturas

- **Captura 01**: Compilación exitosa de la aplicación.  
  ![Compilacion](https://github.com/SantiagoBaeza/Mini-calculadora/blob/main/01_captura%20.jpg)

- **Captura 02**: Mensaje de error al intentar dividir por cero.  
  ![Error](https://github.com/SantiagoBaeza/Mini-calculadora/blob/main/02_aviso%20.jpg)

---

## Funcionalidad clave

- Dos **QLineEdit** para ingresar números.  
- Cuatro **QPushButton** para las operaciones: `+`, `-`, `×`, `÷`.  
- Un **QLCDNumber** para mostrar el resultado.  
- **QMessageBox** para avisar del error en caso de división por cero.  
- Uso de **layouts** (QVBoxLayout/QHBoxLayout) para que los botones y campos se reacomoden automáticamente al cambiar el tamaño de la ventana.

---

## Tecnologías utilizadas

- Qt (C++), señales y slots  
- Widgets: QLineEdit, QPushButton, QLCDNumber, QMessageBox  
- Layouts dinámicos para interfaz adaptable

---

## Comentarios finales

Los archivos del proyecto están incluidos en este repositorio para que cualquier persona pueda descargarlos y compilarlos localmente en **Qt**.  
De esta manera, es posible revisar el código, ejecutar la aplicación y comprobar tanto el funcionamiento de la calculadora como el manejo de errores en la división por cero.  

Este ejercicio tiene como objetivo servir de práctica inicial en el uso de **señales y slots**, reforzar el diseño de interfaces con **layouts adaptables**, y dejar registro de mis avances en programación con Qt.

---

> 🧩 Estos espacios están en construcción y se actualizan de forma frecuente.
