#!/usr/bin/env bash
##
## EPITECH PROJECT, 2022
## build
## File description:
## build library
##

gcc -c *.c
ar rc libmy.a *.o
