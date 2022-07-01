#!/bin/sh

    awk -F '"' '/PRETTY_NAME/ { print $2 }' /etc/os-release
