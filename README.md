[⬅️ Volver a "Recopilación de proyectos con Qt"](https://github.com/SantiagoBaeza/Recopilacion-proyectos-Qt)

# 🚀 Ejercicio 6: Mini calculadora en Qt

Este proyecto implementa una calculadora sencilla en Qt, aplicando **señales y slots** para manejar la lógica de operaciones básicas.  
Además, se utilizaron **layouts** para que la interfaz se adapte automáticamente al tamaño de la ventana, manteniendo la disposición de los elementos al agrandar o achicar la calculadora.

---

## Contexto

En mis primeros pasos con el uso de Qt, desarrollé ejercicios complementarios orientados a reforzar conocimientos fundamentales del framework.  
Este proyecto corresponde a una práctica básica de señales y slots, aplicada en una calculadora sencilla. El objetivo principal fue afianzar el manejo de widgets, la interacción entre elementos gráficos y la lógica de operaciones, incorporando además layouts para garantizar una interfaz adaptable y funcional.

---

## Capturas

- **Captura 01**: Compilación exitosa de la aplicación.  
  ![Compilacion](pegar_enlace_a_captura_01)

- **Captura 02**: Mensaje de error al intentar dividir por cero.  
  ![Error](pegar_enlace_a_captura_02)

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

Este ejercicio tiene como objetivo practicar la integración de lógica básica con interfaz gráfica en Qt, reforzando el concepto de **señales y slots** y la importancia de diseñar interfaces **responsivas** mediante layouts.

---

> 🧩 Estos espacios están en construcción y se actualizan de forma frecuente.
