# Temperature Converter

A simple command-line C program that converts temperatures between **Celsius (°C)** and **Fahrenheit (°F)**.

## Features

- Convert Celsius to Fahrenheit
- Convert Fahrenheit to Celsius
- Results rounded to one decimal place

## Formulas

| Direction | Formula |
| --- | --- |
| °C → °F | `F = C × 1.8 + 32` |
| °F → °C | `C = (F − 32) / 1.8` |

## Requirements

- A C compiler (e.g. [GCC](https://gcc.gnu.org/) or Clang)

## Build and Run

```bash
gcc Temperature_Converter.c -o temperature_converter
./temperature_converter
```

On Windows (MinGW):

```bash
gcc Temperature_Converter.c -o temperature_converter.exe
temperature_converter.exe
```

## Usage

1. Run the program.
2. Type `c` to convert Celsius to Fahrenheit, or `f` to convert Fahrenheit to Celsius.
3. Enter the temperature value.
4. The program prints the converted result.

### Examples

**Celsius → Fahrenheit**

```
Choose to convert Celsius into Fahrenheit, type c
Choose to convert Fahrenheit into Celsius, type f
c
Celsius degree: 100
Fahrenheit degree: 212.0
```

**Fahrenheit → Celsius**

```
Choose to convert Celsius into Fahrenheit, type c
Choose to convert Fahrenheit into Celsius, type f
f
Fahrenheit degree: 98.6
Celsius degree: 37.0
```

## Known Limitations

- Only the character `c` is checked. Any other input (including typos) is treated as `f`.
- Input is not validated (e.g. entering letters instead of a number).

## Possible Improvements

- [ ] Validate the menu choice and prompt again on invalid input
- [ ] Allow multiple conversions without restarting the program
- [ ] Add Kelvin support
- [ ] Validate that the entered temperature is a valid number

## Project Structure

```
.
├── Temperature_Converter.c
├── README.md
└── README.vi.md
```
