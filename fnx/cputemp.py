#!/usr/bin/env python
import psutil

def
sensored=psutil.sensors_temperatures()





print(sensored['coretemp'][0].current)