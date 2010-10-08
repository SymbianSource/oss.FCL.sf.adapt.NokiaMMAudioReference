@if not %SDTOOLS% == "" GOTO OK

@echo You need to set SDTOOLS variable to be the location of the sysdeftools - e.g. \sf\os\buildtools\bldsystemtools\sysdeftools

@goto EXIT

:OK
perl %SDTOOLS%\joinsysdef.pl -exclude-meta Api -output filtered_package_definition.xml -config %~d0\epoc32\include\feature_settings.hrh -I%~d0\epoc32\include -path ./package_definition.xml package_definition.xml
:EXIT
