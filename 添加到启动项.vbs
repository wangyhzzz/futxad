set wshshell = wscript.createobject("wscript.shell")
startpath = wshshell.specialfolders("startup")
path = wshshell.currentdirectory
set link = wshshell.createshortcut( startpath  + "\futx.lnk")
link.targetpath = path + "\futx.exe"
link.workingdirectory  = path
link.save
