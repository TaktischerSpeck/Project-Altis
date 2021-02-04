COLOR 0A
set dirServer=C:\A3Server\Server

set exe=arma3server_x64.exe
set exehc=arma3server_x64.exe
set mod=
set smod=@extDB3;@life_server;
set hcmod=@extDB3;@life_hc;
set port=2402
set mem=8096
set C=6
set T=7
set profiles=Server_Logs
set config=C:\A3Server\Server\config\server.cfg
set cfg=C:\A3Server\Server\config\basic.cfg
set bepath=C:\A3Server\Server\battleye

cd %dirServer%
powershell -C "Get-Process | Where-Object { $_.MainWindowTitle -like 'Arma 3*port 2402*' } | Stop-Process"
powershell -C "Get-Process | Where-Object { $_.MainWindowTitle -like 'Arma 3' } | Stop-Process"
timeout 1
powershell -C "Get-Process | Where-Object { $_.MainWindowTitle -like 'Arma 3*port 2402*' } | Stop-Process"
powershell -C "Get-Process | Where-Object { $_.MainWindowTitle -like 'Arma 3' } | Stop-Process"

start "" "%dirServer%\%exe%" /realtime -f -name=Mountain-Valley-RPG -enableHT -exThreads=7 -autoInit -mod="%mod%" -serverMod="%smod%" -port=%port% -maxmem=%mem% -profiles=%profiles% -config=%config% -cfg=%cfg% -bepath=%bepath% -loadMissionToMemory -limitFPS=75
start "" "%dirServer%/%exehc%" -client -name=Mountain-Valley-RPG-HC -profiles=Server_HC_Logs -nosound -enableHT -exThreads=7 -maxmem=%mem% -mod="%hcmod%" -connect=127.0.0.1 -port=%port% -mod="%mod%"

exit
