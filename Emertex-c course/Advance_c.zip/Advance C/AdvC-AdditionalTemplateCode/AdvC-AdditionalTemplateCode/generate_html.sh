#!/bin/bash

# FILE: generate_html.sh
# Description: This script will regenerate the index.html file,
# which contains the list of directories and files in the current
# directory.


TITLE="Advanced C Programming - Templates"
OUTPUT_FILE="index.html"

tree --dirsfirst -a -T "${TITLE}"  -I "files|tasks" -C  -H . --charset UTF-8  -o ${OUTPUT_FILE}
