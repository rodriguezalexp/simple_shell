![ejemplo](https://user-images.githubusercontent.com/71143825/114935950-6a451400-9e01-11eb-9ec9-001e231c775e.png)
# simple_shell

## Synopsis

* In this project we want to emulate the Shell command interpreter, which allows the user to communicate with the kernel through instructions, which in turn allows them to be executed, on the other hand it allows access to tools that allow controlling the operation of the computer.

## Table of contents

> * [Title / Repository Name](#title--repository-name)
>   * [About / Synopsis](#about--synopsis)
>   * [Table of contents](#table-of-contents)
>   * [Usage](#usage)
>     * [Screenshots](#screenshots)
>     * [Content](#content)
>     * [Requirements](#requirements)
>   * [Flowchart](#Flowchart)
>   * [Authors](#Authors)



## Usage

### Screenshots
![Image text](https://user-images.githubusercontent.com/71143825/114936017-81840180-9e01-11eb-8989-51f6ed4ebde4.png)


### Content

>   * shell.h
>
>header file that contains the structure and prototypes of the project
>   * shell.c
>
>main
>   * funtions.c
>
>shell function
>
> * PAHT.c
>
> the paths in which the shell should look for the programs to run.


### Requirements

* simple_shell is designed to run in the Ubuntu 14.04 LTS linux environment and to be compiled using the GNU compiler collection v. gcc 4.8.4 with flags-Wall, -Werror, -Wextra, and -pedantic.

### Installacion

* Clone this repository: git clone https://github.com/rodriguezalexp/simple_shell.git
* Change directories into the repository: cd simple_shell
* Compile: gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
* Run the shell in interactive mode: ./hsh
* Or run the shell in non-interactive mode: example echo "pwd" | ./hsh

## Flowchar

![Image text](https://user-images.githubusercontent.com/71143825/114813344-8dc37c80-9d77-11eb-97bf-aad309dcedbd.jpg)


## Authors

Luz Adriana Baza <2459@holbertonschool.com>

Carlos Alexander Rodriguez <2618@holbertonschool.com>
