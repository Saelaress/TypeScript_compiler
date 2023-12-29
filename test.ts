const asciiChar: string = "\x41";
const asciiChar1: string = '\43';

/* Объявление переменных разных типов данных */
// Числа
const letletlet = "let";
let myDecWithUnderline = 7687_656;
let myDec: number = 7777753;
let myMinusDec: number = -7777753;
let myBin: number = 0b1011;
let myBinWithUnderline = 0b01_10;
let myMinusBin: number = -0b1011;
let myOctal: number = 0o2343;
let myMinusOctal: number = -0o2343;
let myOctalWithUnderline = 0o1342_452;
let myHex: number = 0x234abcd;
let myMinusHex: number = -0x234abcd;
let myHexWithUnderline = 0x2541_6561ab;
let myFloat: number = 0.2345;
let myMinusFloat: number = -0.2345;
let myFloatWithPlusE: number = 3e+5;
let myFloatWithMinusE: number = 3e-5;
let myFlotWithUnderline = 0.e78_98;
// Строки
let myDQString: string = "Это строка\nс \'одинарными кавычками\', а также шестнадцатеричным числом: ${0x1A}.";
let mySQString: string = 'Это строка\nс \"двойными кавычками\", а также шестнадцатеричным числом: ${0x1A}.';
let myBQString = `q\`qq
${0x1A}.`;
// Другие типы
let myBoolean: boolean = true;
let myArray: string[] = ["apple", "banana", "orange"];
let myTuple: [number, string] = [1, "Hello"];

// Функция, возвращающая строку
function sayHello(name: string, age?: number): string {
    if (age !== undefined) {
        console.log(`Age: ${age}`);
    }
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