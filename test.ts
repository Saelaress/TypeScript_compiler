/* Объявление переменных разных типов данных */
// Числа
letletlet;
let myDec: number = 7777753;
let myMinusDec: number = -7777753;
let myBin: number = 0b1011;
let myMinusBin: number = -0b1011;
let myOctal: number = 0o2343;
let myMinusOctal: number = -0o2343;
let myHex: number = 0x234abcd;
let myMinusHex: number = -0x234abcd;
let myFloat: number = 0.2345;
let myMinusFloat: number = -0.2345;
let myFloatWithPlusE: number = 3e+5;
let myFloatWithMinusE: number = 3e-5;
// Строки
let myDQString: string = "Это строка\nс \'одинарными кавычками\', а также шестнадцатеричным числом: ${0x1A }(оно не должно преобразоваться).";
let mySQString: string = 'Это строка\nс \"двойными кавычками\", а также шестнадцатеричным числом: ${0x1A }(оно не должно преобразоваться).';
let myBQString = `Это строка\nсо слешем \\\\ и \"двойными кавычками\", а также шестнадцатеричным числом: ${0x1A}(преобразовано).`;
// Другие типы
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

/* Этот фрагмент кода содержит примеры следующих типов лексем:
Ключевые слова: let, number, string, boolean, function, return, class, constructor, public, private, void, new, const
Идентификаторы: myNumber, myString, myBoolean, myArray, myTuple, sayHello, Person, name, age, person
Знаки препинания: ,, =, :, ;, (), {}, [], . $
Литералы: 42, "Hello, world!", true, "apple", "banana", "orange", [1, "Hello"]
Строки: "Hello, ${name}!", `Hello, my name is ${this.name} and I am ${this.age} years old.`
Комментарии: // Объявление переменных разных типов данных, // Функция, возвращающая строку, // Класс с конструктором и методом, // Создание экземпляра класса и вызов его метода.
*/