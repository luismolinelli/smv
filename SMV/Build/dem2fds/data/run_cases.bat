@echo off
set fds=fds
::set fds=..\..\..\..\FDS_Compilation\intel_win_64_db\fds_win_64_db
::set fds=..\..\..\..\FDS_Compilation\mpi_intel_win_64\fds_mpi_win_64

echo.
echo blodget
%fds% blodget.fds 

echo.
echo demtest
%fds% demtest1.fds 
%fds% demtest2.fds 

echo.
echo NIST
%fds% nist.fds 

echo.
echo sugarloaf
%fds% sugarloaf.fds 

echo.
echo tower
%fds% tower.fds 


echo.
echo trails
%fds% trails.fds 
echo.
echo trails2
%fds% trails2.fds 
