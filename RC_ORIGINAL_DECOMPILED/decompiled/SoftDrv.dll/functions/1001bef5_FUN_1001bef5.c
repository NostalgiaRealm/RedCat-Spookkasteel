/*
 * FUN_1001bef5 at 1001bef5
 * undefined FUN_1001bef5(void)
 * Address ranges: 1001bef5-1001c047
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001bef5(DWORD param_1)

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
  pDVar2 = &DAT_10023ad8;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x10023b68);
  if (param_1 == (&DAT_10023ad8)[iVar5 * 2]) {
    if ((DAT_10025ca0 == 1) || ((DAT_10025ca0 == 0 && (DAT_10025ca4 == 1)))) {
      lpNumberOfBytesWritten = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x10023adc);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      puStackY_1c4 = (undefined *)0x1001c03e;
      hFile = GetStdHandle(0xfffffff4);
      puStackY_1c4 = (undefined *)0x1001c045;
      WriteFile(hFile,lpBuffer,sVar4,lpNumberOfBytesWritten,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_1001d6d0();
      }
      sVar4 = _strlen(local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen(local_1a8);
        puStackY_1c4 = (undefined *)0x1001bfbf;
        _strncpy(acStackY_1e3 + sVar4,"...",3);
      }
      FUN_1001d6d0();
      puStackY_1c4 = (undefined *)0x1001bfe0;
      FUN_1001d6e0();
      puStackY_1c8 = local_a4;
      puStackY_1c4 = &DAT_1002058c;
      uStackY_1cc = 0x1001bff1;
      FUN_1001d6e0();
      uStackY_1cc = *(undefined4 *)(iVar5 * 8 + 0x10023adc);
      puStackY_1d0 = local_a4;
      uStackY_1d4 = 0x1001c003;
      FUN_1001d6e0();
      uStackY_1d4 = 0x12010;
      puStackY_1dc = local_a4;
      pcStackY_1d8 = "Microsoft Visual C++ Runtime Library";
      acStackY_1e3[3] = '\x19';
      acStackY_1e3[4] = -0x40;
      acStackY_1e3[5] = '\x01';
      acStackY_1e3[6] = '\x10';
      FUN_1001dcfa();
    }
  }
  return;
}

