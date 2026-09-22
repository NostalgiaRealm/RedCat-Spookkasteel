@echo off
cd /d "%~dp0"
if exist "dist\win-unpacked\RedCat Spookkasteel.exe" (
  start "" "dist\win-unpacked\RedCat Spookkasteel.exe"
  exit /b
)
where npm >nul 2>nul
if errorlevel 1 (
  echo Build not found. Install Node.js 22+ and run npm ci first.
  pause
  exit /b 1
)
call npm start
