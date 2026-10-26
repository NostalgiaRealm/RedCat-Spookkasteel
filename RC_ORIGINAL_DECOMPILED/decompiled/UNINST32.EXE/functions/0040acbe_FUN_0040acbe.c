/*
 * FUN_0040acbe at 0040acbe
 * undefined __cdecl FUN_0040acbe(char * param_1)
 * Address ranges: 0040acbe-0040af6c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_0040acbe(char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  UINT uBytes;
  UINT UVar5;
  byte *pbVar6;
  char *pcVar7;
  CHAR local_528 [260];
  CHAR local_424 [250];
  CHAR aCStack_32a [10];
  CHAR local_320 [260];
  byte local_21c [259];
  char acStack_119 [261];
  int local_14;
  HFILE local_10;
  int local_c;
  HFILE local_8;
  
  GetWindowsDirectoryA(local_424,0x104);
  lstrcatA(local_424,s__SYSTEM_INI_004127dc);
  lstrcpyA(local_320,local_424);
  pcVar7 = s__GLBS383_TMP_004127cc;
  iVar3 = lstrlenA(local_320);
  lstrcpyA(aCStack_32a + iVar3,pcVar7);
  local_8 = _lopen(local_424,0);
  if (local_8 != -1) {
    local_10 = _lcreat(local_320,0);
    if (local_10 == -1) {
      _lclose(local_8);
    }
    else {
      local_c = 0;
      local_14 = 0;
      _memset(DAT_00413684,0,0x4000);
      DAT_00413aa4 = 0;
      DAT_0041376c = 0;
      GetSystemDirectoryA(acStack_119 + 1,0x104);
      iVar3 = lstrlenA(acStack_119 + 1);
      if (acStack_119[iVar3] != '\\') {
        lstrcatA(acStack_119 + 1,&DAT_004120e0);
      }
      pvVar4 = (void *)lstrlenA(acStack_119 + 1);
      iVar3 = FUN_0040f730((byte *)(acStack_119 + 1),param_1,pvVar4);
      pcVar7 = param_1;
      if (iVar3 == 0) {
        iVar3 = lstrlenA(acStack_119 + 1);
        pcVar7 = param_1 + iVar3;
      }
      lstrcpyA(acStack_119 + 1,pcVar7);
      do {
        iVar3 = FUN_00406b07((char *)local_21c,0x104,local_8,1);
        if (iVar3 == 0) {
          _lclose(local_8);
          _lclose(local_10);
          if (local_14 != 0) {
            FUN_0040a440(local_424);
            FUN_0040c888(local_320,local_424);
            return;
          }
          goto LAB_0040af21;
        }
        pbVar6 = local_21c;
        bVar2 = local_21c[0];
        while ((bVar2 != 0 && ((bVar2 == 0x20 || (bVar2 == 9))))) {
          pbVar1 = pbVar6 + 1;
          pbVar6 = pbVar6 + 1;
          bVar2 = *pbVar1;
        }
        if (local_c == 0) {
          iVar3 = FUN_0040f730(pbVar6,s__386Enh__004127b8,(void *)0x8);
          if (iVar3 == 0) {
            local_c = 1;
          }
        }
        else if (*pbVar6 == 0x5b) {
          local_c = 0;
        }
        else {
          iVar3 = FUN_0040f730(pbVar6,s_device__004127c4,(void *)0x7);
          if (iVar3 == 0) {
            iVar3 = lstrcmpiA((LPCSTR)(pbVar6 + 7),acStack_119 + 1);
            if ((iVar3 == 0) || (iVar3 = lstrcmpiA((LPCSTR)(pbVar6 + 7),param_1), iVar3 == 0)) {
              lstrcpyA(local_528,(LPCSTR)local_21c);
              local_21c[0] = 0x3b;
              lstrcpyA((LPSTR)(local_21c + 1),local_528);
              local_14 = 1;
            }
          }
        }
        lstrcatA((LPSTR)local_21c,&DAT_0041279c);
        uBytes = lstrlenA((LPCSTR)local_21c);
        UVar5 = _lwrite(local_10,(LPCCH)local_21c,uBytes);
      } while (UVar5 == uBytes);
      _lclose(local_8);
      _lclose(local_10);
LAB_0040af21:
      FUN_0040a440(local_320);
    }
  }
  return;
}

