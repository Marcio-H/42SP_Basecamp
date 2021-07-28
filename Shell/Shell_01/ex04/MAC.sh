#!/bin/bash
ifconfig -a | grep ether | mawk '{print $2}'
