#!/bin/bash

# Muestra las direcciones MAC de todas las interfaces de red
ifconfig | grep ether | awk '{print $2}'
