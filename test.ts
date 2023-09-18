// Объявление переменных разных типов данных
let myNumber: number = 42;
let myString: string = "Hello, world!";
let myBoolean: boolean = true;
let myArray: string[] = ["apple", "banana", "orange"];
let myTuple: [number, string] = [1, "Hello"];

// Функция, возвращающая строку
function sayHello(name: string): string {
    return `Hello, ${name}!`;
}

// Класс с конструктором и методом
class Person {
    constructor(public name: string, private age: number) { }

    sayHello(): void {
        console.log(`Hello, my name is ${this.name} and I am ${this.age} years old.`);
    }
}

// Создание экземпляра класса и вызов его метода
const person = new Person("John", 30);
person.sayHello();

// Этот фрагмент кода содержит примеры следующих типов лексем:

// Ключевые слова: let, number, string, boolean, function, return, class, constructor, public, private, void, new, const
// Идентификаторы: myNumber, myString, myBoolean, myArray, myTuple, sayHello, Person, name, age, person
// Знаки препинания: ,, =, :, ;, (), {}, [], . $
// Литералы: 42, "Hello, world!", true, "apple", "banana", "orange", [1, "Hello"]
// Строки: "Hello, ${name}!", `Hello, my name is ${this.name} and I am ${this.age} years old.`
// Комментарии: // Объявление переменных разных типов данных, // Функция, возвращающая строку, // Класс с конструктором и методом, // Создание экземпляра класса и вызов его метода.