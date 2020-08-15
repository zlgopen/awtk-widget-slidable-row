import os
import scripts.app_helper as app

helper = app.Helper(ARGUMENTS);
helper.set_dll_def('src/slidable_row.def').set_libs(['slidable_row']).call(DefaultEnvironment)

CustomWidgetSConscriptFiles = []
SConscriptFiles = CustomWidgetSConscriptFiles + ['src/SConscript', 'demos/SConscript', 'tests/SConscript']
SConscript(SConscriptFiles)
