#!/bin/bash

find . -type f -name "*.sh" | rev | cut -d "/" -f 1 | cut -d "." -f 2 | rev
#find . -name "*.sh" | rev | cut -d "/" -f 1 | cut -d "." -f 2 | rev
#find . -name "*.sh" -exec basename {} + | sed 's/...$//'
#find . -name "*.sh" | sed 's/...$//'
