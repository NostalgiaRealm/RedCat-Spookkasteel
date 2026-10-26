/*
 * FUN_1002efb0 at 1002efb0
 * undefined FUN_1002efb0(void)
 * Address ranges: 1002efb0-1002f102
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002efb0(DWORD param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  size_t sVar4;
  HANDLE hFile;
  int iVar5;
  char acStackY_1e3 [7];
  undefined1 *puStackY_1dc;
  char *pcStackY_1d8;
  undefined4 uStackY_1d4;
  undefined1 *puStackY_1d0;
  undefined4 uStackY_1cc;
  undefined1 *puStackY_1c8;
  undefined *puStackY_1c4;
  LPCVOID lpBuffer;
  LPDWORD lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  CHAR local_1a8 [260];
  undefined1 local_a4 [160];
  
  iVar5 = 0;
  pDVar2 = &DAT_1003f440;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x1003f4d0);
  if (param_1 == (&DAT_1003f440)[iVar5 * 2]) {
    if ((DAT_1052a3e4 == 1) || ((DAT_1052a3e4 == 0 && (DAT_1052a3e8 == 1)))) {
      lpNumberOfBytesWritten = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x1003f444);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      puStackY_1c4 = (undefined *)0x1002f0f9;
      hFile = GetStdHandle(0xfffffff4);
      puStackY_1c4 = (undefined *)0x1002f100;
      WriteFile(hFile,lpBuffer,sVar4,lpNumberOfBytesWritten,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10030dc0();
      }
      sVar4 = _strlen(local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen(local_1a8);
        puStackY_1c4 = (undefined *)0x1002f07a;
        _strncpy(acStackY_1e3 + sVar4,"...",3);
      }
      FUN_10030dc0();
      puStackY_1c4 = (undefined *)0x1002f09b;
      FUN_10030dd0();
      puStackY_1c8 = local_a4;
      puStackY_1c4 = &DAT_10034e84;
      uStackY_1cc = 0x1002f0ac;
      FUN_10030dd0();
      uStackY_1cc = *(undefined4 *)(iVar5 * 8 + 0x1003f444);
      puStackY_1d0 = local_a4;
      uStackY_1d4 = 0x1002f0be;
      FUN_10030dd0();
      uStackY_1d4 = 0x12010;
      puStackY_1dc = local_a4;
      pcStackY_1d8 = "Microsoft Visual C++ Runtime Library";
      acStackY_1e3[3] = -0x2c;
      acStackY_1e3[4] = -0x10;
      acStackY_1e3[5] = '\x02';
      acStackY_1e3[6] = '\x10';
      FUN_100324a9();
    }
  }
  return;
}

