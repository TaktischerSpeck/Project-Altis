COLOR 0A
set dirGit=D:\SteamLibrary\steamapps\common\Project-Altis
set dirServer=C:\A3Server\Server
set PBOManager=C:\Program Files\PBO Manager v.1.4 beta
set mpspace=C:\Users\TaktischerSpeck\AppData\Local\Arma 3\MPMissionsCache

cd %dirGit%

del "%dirServer%\config\server.cfg" /f /q
xcopy "%dirGit%\server.cfg" "%dirServer%\config" /y

del "%dirServer%\@life_server\Addons\life_server.pbo" /f /q
"%PBOManager%\PBOConsole.exe" -pack "%dirGit%\life_server" "%dirServer%\@life_server\Addons\life_server.pbo"

del "%dirServer%\@life_hc\Addons\life_hc.pbo" /f /q
"%PBOManager%\PBOConsole.exe" -pack "%dirGit%\life_hc" "%dirServer%\@life_hc\Addons\life_hc.pbo"

del "%dirServer%\mpmissions\Altis_Life.Altis.pbo" /f /q
"%PBOManager%\PBOConsole.exe" -pack "%dirGit%\Altis_Life.Altis" "%dirServer%\mpmissions\Altis_Life.Altis.pbo"

xcopy "%dirServer%\mpmissions\Altis_Life.Altis.pbo" "%mpspace%\" /y

exit
