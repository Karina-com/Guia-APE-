<a name="inicio"></a>

<h1 align="center">Guía APE 4 · Programación Orientada a Objetos</h1>

<p align="center">
  <strong>🐦 BITÁCORA DE ROBIN · EL PETIRROJO DE GOTHAM</strong><br>
  <em>Batman tiene el plan. Robin lo pone en marcha.</em>
</p>

<div align="center">

<img src="https://capsule-render.vercel.app/api?type=venom&amp;color=0:7F1D1D,40:DC2626,75:15803D,100:166534&amp;height=230&amp;section=header&amp;text=GU%C3%8DA%20APE%204&amp;fontSize=66&amp;fontColor=FDE047&amp;stroke=7F1D1D&amp;strokeWidth=1&amp;animation=fadeIn&amp;fontAlignY=40&amp;desc=LA%20BIT%C3%81CORA%20DE%20ROBIN%20%C2%B7%20JAVA%20Y%20C%2B%2B&amp;descSize=17&amp;descAlignY=64" width="100%" alt="Banner animado rojo y verde: Guía APE 4, la bitácora de Robin en Java y C++">

<h2>🐦 EL PETIRROJO ENTRA EN ESCENA</h2>

<img src="https://readme-typing-svg.demolab.com?font=Fira+Code&amp;weight=700&amp;size=21&amp;duration=3000&amp;pause=1400&amp;color=FDE047&amp;background=7F1D1D&amp;center=true&amp;vCenter=true&amp;width=860&amp;height=64&amp;lines=%C2%A1Santos+objetos%2C+Batman%21;%C2%A1Santo+constructor%21+Cada+objeto+nace+listo.;Un+m%C3%A9todo+hace+el+trabajo+por+m%C3%AD.;m4+%3D+m1+%E2%80%BA+%C2%A1santas+referencias%21;Cinco+misiones.+Java+y+C%2B%2B.+Vamos." width="100%" alt="Frases animadas: Santos objetos, Batman; santo constructor, cada objeto nace listo; un método hace el trabajo por mí; santas referencias">

**Robin no espera órdenes: escribe métodos.**

<img src="https://img.shields.io/badge/COMPA%C3%91ERA-PAOLA_SANCHEZ-DC2626?style=for-the-badge&amp;labelColor=14532D" alt="Compañera: Paola Sanchez">
<img src="https://img.shields.io/badge/MISIONES-5-DC2626?style=for-the-badge&amp;labelColor=14532D" alt="Cinco misiones">
<img src="https://img.shields.io/badge/ESTILO-CONSTRUCTORES_%2B_M%C3%89TODOS-DC2626?style=for-the-badge&amp;labelColor=14532D" alt="Estilo: constructores y métodos">

<br>

<img src="https://img.shields.io/badge/Java-17%2B-FACC15?style=flat-square&amp;logo=openjdk&amp;logoColor=black&amp;labelColor=15803D" alt="Java">
<img src="https://img.shields.io/badge/C%2B%2B-11%2B-FACC15?style=flat-square&amp;logo=cplusplus&amp;logoColor=black&amp;labelColor=15803D" alt="C++">
<img src="https://img.shields.io/badge/R-LISTA_PARA_PATRULLAR-FACC15?style=flat-square&amp;labelColor=15803D" alt="Lista para patrullar">

<br><br>

[📓 Bitácora](#-la-bitácora--qué-hay-en-este-repositorio) ·
[🎯 Misiones](#-las-5-misiones-de-robin) ·
[🗺️ Guarida](#️-la-guarida-de-robin) ·
[▶️ Ejecutar](#️-cómo-ejecutar) ·
[📡 Reportes](#-reportes-de-misión) ·
[🎒 Mochila](#-la-mochila-de-robin) ·
[🐙 Git](#-subir-a-github) ·
[🎭 Extras](#-entre-misiones)

</div>

---

## 📓 La bitácora · ¿Qué hay en este repositorio?

Aquí está resuelta la **Guía APE 4**: cinco ejercicios de clases, objetos y atributos, cada uno en **Java** y en **C++**.

La forma de trabajar de Robin es directa: cada clase tiene su **constructor**, así los objetos nacen con sus datos completos en una sola línea, y las acciones importantes viven en **métodos** como `vender()`, `depositar()` o `prestar()`. Menos líneas sueltas en `main`, más objetos que saben hacer su trabajo.

> [!TIP]
> **Lema de Robin:** «Si el objeto puede hacerlo solo, que lo haga».

## 🎯 Las 5 misiones de Robin

| # | Misión | Clase(s) | Métodos clave | Objetivo |
| :---: | :--- | :--- | :--- | :--- |
| **1** | 🎓 **Notas del curso** | `Estudiante` | `calcularPromedio()`, `estado()` | Promediar a 5 estudiantes y contar a los aprobados. |
| **2** | 🛒 **Inventario de una tienda** | `Producto` | `vender()`, `valorEnStock()` | Vender 3 unidades de dos productos y marcar los que hay que reponer. |
| **3** | 🐾 **Veterinaria** | `Mascota` | `mostrar()` | Alertar pesos sobre 20 kg y resolver el enigma de `m4 = m1`. |
| **4** | 💰 **Cuenta de ahorro** | `Cuenta` | `depositar()` | Ahorrar 50 por mes con `while` hasta llegar a 500 (6 y 3 meses). |
| **5** | 📚 **Biblioteca** | `Libro`, `Socio` | `prestar()` | Registrar préstamos y contar los libros disponibles. |

> [!IMPORTANT]
> **¡Santas referencias!** En la misión 3, `Mascota m4 = m1;` no fabrica una mascota nueva, porque no hay `new`. `m4` recibe la misma referencia que `m1`, así que los dos apuntan al mismo objeto y el cambio de edad se ve desde ambos. En C++ se logró lo mismo con punteros: `Mascota* m4 = m1;`.

## 🗺️ La guarida de Robin

```text
📦 Paola_Sanchez_GuiaApe4
 ┣ 📂 Ejercicio_1
 ┃ ┣ ☕ NotasCurso.java
 ┃ ┗ ⚙️ notas_curso.cpp
 ┣ 📂 Ejercicio_2
 ┃ ┣ ☕ InventarioTienda.java
 ┃ ┗ ⚙️ inventario_tienda.cpp
 ┣ 📂 Ejercicio_3
 ┃ ┣ ☕ Veterinaria.java
 ┃ ┗ ⚙️ veterinaria.cpp
 ┣ 📂 Ejercicio_4
 ┃ ┣ ☕ CuentaAhorro.java
 ┃ ┗ ⚙️ cuenta_ahorro.cpp
 ┣ 📂 Ejercicio_5
 ┃ ┣ ☕ Biblioteca.java
 ┃ ┗ ⚙️ biblioteca.cpp
 ┣ 📜 .gitignore
 ┗ 📜 README.md
```

## ▶️ Cómo ejecutar

| Misión | Java | C++ |
| :---: | :--- | :--- |
| 1 | `javac NotasCurso.java && java NotasCurso` | `g++ notas_curso.cpp -o notas_curso && ./notas_curso` |
| 2 | `javac InventarioTienda.java && java InventarioTienda` | `g++ inventario_tienda.cpp -o inventario_tienda && ./inventario_tienda` |
| 3 | `javac Veterinaria.java && java Veterinaria` | `g++ veterinaria.cpp -o veterinaria && ./veterinaria` |
| 4 | `javac CuentaAhorro.java && java CuentaAhorro` | `g++ cuenta_ahorro.cpp -o cuenta_ahorro && ./cuenta_ahorro` |
| 5 | `javac Biblioteca.java && java Biblioteca` | `g++ biblioteca.cpp -o biblioteca && ./biblioteca` |

Cada comando se ejecuta dentro de su carpeta (`cd Ejercicio_1`, etc.). En Windows, el ejecutable de C++ se abre con su `.exe`.

## 📡 Reportes de misión

Salida de la versión en Java. La de C++ es igual, solo que muestra los decimales con dos cifras (`7.00`, `2.50`).

<details>
<summary><b>🎓 Misión 1 · Notas del curso</b></summary>

```text
Valeria Castro : 8.83 Aprobado
Javier Yanez : 5.17 Supletorio
Gabriela Nunez : 4.17 Reprobado
Kevin Moreta : 7.0 Aprobado
Lucia Haro : 7.17 Aprobado
==============================
Total de aprobados: 3
```

</details>

<details>
<summary><b>🛒 Misión 2 · Inventario de una tienda</b></summary>

```text
>> Lista de productos
Cuaderno : 2.5
Esfero : 0.6
Borrador : 0.35
Carpeta : 1.75

Venta: 3 unidades de Esfero
Venta: 3 unidades de Borrador

>> Estado del stock
Cuaderno : 2.5 (quedan 12)
Esfero : 0.6 (quedan 27)
Borrador : 0.35 (quedan 3) -> Reponer
Carpeta : 1.75 (quedan 4) -> Reponer

Valor total del inventario: $54.25
```

</details>

<details>
<summary><b>🐾 Misión 3 · Veterinaria</b></summary>

```text
Registro de mascotas (peso en kg)
Toby : Perro : 22.3   <-- Revisar peso
Nala : Gato : 3.8
Coco : Conejo : 1.9

m1.edad al inicio = 4
m1.edad luego de modificar m4 = 5
```

</details>

<details>
<summary><b>💰 Misión 4 · Cuenta de ahorro</b></summary>

```text
Ahorro de Sofia Guaman (inicia con 200.0)
  Mes 1 -> Sofia Guaman : 250.0
  Mes 2 -> Sofia Guaman : 300.0
  Mes 3 -> Sofia Guaman : 350.0
  Mes 4 -> Sofia Guaman : 400.0
  Mes 5 -> Sofia Guaman : 450.0
  Mes 6 -> Sofia Guaman : 500.0
Ahorro de Mateo Lema (inicia con 350.0)
  Mes 1 -> Mateo Lema : 400.0
  Mes 2 -> Mateo Lema : 450.0
  Mes 3 -> Mateo Lema : 500.0

Resumen:
Sofia Guaman llego a la meta en 6 meses
Mateo Lema llego a la meta en 3 meses
```

</details>

<details>
<summary><b>📚 Misión 5 · Biblioteca</b></summary>

```text
*** Estado de los libros ***
El Alquimista : Prestado
Rayuela : Prestado
Ficciones : Prestado
Pedro Paramo : Disponible
*** Socios ***
Camila Ortiz : 2
Diego Pilco : 1
Quedan 1 libro(s) disponible(s)
```

</details>

## 🎒 La mochila de Robin

Robin viaja ligero: solo lleva lo que usa en cada misión.

| Herramienta | Concepto | Para qué le sirve a Robin |
| :--- | :--- | :--- |
| 🧬 **Constructor** | `Estudiante(String nombre, …)` | Que cada objeto nazca con todos sus datos en una sola línea. |
| 👉 **`this`** | `this.nombre = nombre;` | Distinguir el atributo del parámetro cuando se llaman igual. |
| 🦾 **Métodos** | `vender()`, `depositar()`, `prestar()` | Que el objeto haga su propio trabajo en vez de hacerlo todo en `main`. |
| 🗃️ **Arreglo de objetos** | `Producto[] productos = { new … }` | Tener a todo el equipo en un solo lugar y recorrerlo con un `for`. |
| 🔒 **Constantes** | `final double META = 500;` | Que la meta no cambie a mitad de la misión. |
| 🎯 **Punteros (C++)** | `Mascota* m4 = m1;` | Imitar en C++ cómo funcionan las referencias de Java. |

## 🐙 Subir a GitHub

```bash
git init
git add .
git commit -m "feat: resuelve la Guía APE 4 en Java y C++"
git branch -M main
git remote add origin https://github.com/USUARIO/REPOSITORIO.git
git push -u origin main
```

> [!NOTE]
> El `.gitignore` deja fuera los `.class` y los ejecutables de C++. Al repositorio solo sube el código fuente.

## 🎭 Entre misiones

<details>
<summary><b>🐦 ¿Por qué Robin usa constructores?</b></summary>

<br>

—Batman, ¿por qué escribes cuatro líneas para crear un estudiante?

—Porque así se asignan los atributos, Robin.

—Yo lo hago en una: `new Estudiante("Valeria Castro", 9.5, 8, 9)`.

**Batman lo anotó en su bitácora. En silencio.**

</details>

<details>
<summary><b>🦇 ¡Santa referencia!</b></summary>

<br>

—Batman, ¡le sumé un año a `m4` y Toby también envejeció!

—Es la misma mascota, Robin. `m4` solo es otro nombre.

—¡Santo alias, Batman!

</details>

<details>
<summary><b>🃏 El Joker ataca la tienda</b></summary>

<br>

—¡Voy a vender 50 borradores!

—Solo quedan 6.

`No hay suficiente stock de Borrador`

**El método `vender()` salvó el inventario.**

</details>

---

<div align="center">

<img src="https://readme-typing-svg.demolab.com?font=Fira+Code&amp;weight=600&amp;size=19&amp;duration=2600&amp;pause=1500&amp;color=FDE047&amp;background=14532D&amp;center=true&amp;vCenter=true&amp;width=860&amp;height=56&amp;lines=Misi%C3%B3n+cumplida%2C+Batman.;Cada+objeto+sabe+hacer+su+trabajo.;Robin+fuera.+Hasta+la+pr%C3%B3xima+gu%C3%ADa." width="100%" alt="Frases animadas de cierre: misión cumplida, Batman; cada objeto sabe hacer su trabajo; Robin fuera">

🐦

*Robin no es el que sigue a Batman.*<br>
*Es la que termina la misión.*

<sub>Guía APE 4 · Paola Sanchez</sub>

<br>

[⬆️ Volver a la guarida](#inicio)

<img src="https://capsule-render.vercel.app/api?type=waving&amp;color=0:15803D,50:DC2626,100:FACC15&amp;height=130&amp;section=footer" width="100%" alt="Ondas animadas verdes, rojas y amarillas de cierre">

</div>
