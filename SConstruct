﻿import os
import app_helper as app

ARGUMENTS['LCD'] = '320_480'
helper = app.Helper(ARGUMENTS);
helper.set_dll_def('src/slidable_row.def').set_libs(['slidable_row']).call(DefaultEnvironment)

CustomWidgetSConscriptFiles = []
SConscriptFiles = CustomWidgetSConscriptFiles + ['src/SConscript', 'demos/SConscript', 'tests/SConscript']
SConscript(SConscriptFiles)
