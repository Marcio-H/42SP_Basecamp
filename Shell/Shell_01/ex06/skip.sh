#!/bin/bash
ls -l | mawk '{if(FNR % 2) print $0}'
