# This .pro file join all the projects involved in one unique project.
TEMPLATE = subdirs

# Subdirectorys where have projects
SUBDIRS = MyLibrary1 MyLibrary2 MainApp

# Indicate than proyects will be compile in the order that was be listed (left/right)
CONFIG += ordered
