#!/bin/bash

# Busca en el directorio actual (.) y en todos sus subdirectorios
find . -type f -name "*.sh" -exec basename {} .sh \;

# Filtra solo archivos (excluye directorios)    (-type f) 
# Busca archivos cuyo nombre termine en .sh     (-name *.sh)
# Extrae solo el nombre del archivo sin la ruta y elimina la extensión .sh  (-exec basename {} .sh)
