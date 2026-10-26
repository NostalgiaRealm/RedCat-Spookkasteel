/*
 * FUN_1000cb15 at 1000cb15
 * uint __cdecl FUN_1000cb15(LPCSTR param_1, uint param_2, uint param_3, uint param_4)
 * Address ranges: 1000cb15-1000cde3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __cdecl FUN_1000cb15(LPCSTR param_1,uint param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  DWORD *pDVar4;
  HANDLE hFile;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  _SECURITY_ATTRIBUTES local_20;
  DWORD local_14;
  DWORD local_10;
  DWORD local_c;
  byte local_5;
  
  bVar8 = (param_2 & 0x80) == 0;
  local_20.nLength = 0xc;
  local_20.lpSecurityDescriptor = (LPVOID)0x0;
  if (bVar8) {
    local_5 = 0;
  }
  else {
    local_5 = 0x10;
  }
  local_20.bInheritHandle = (BOOL)bVar8;
  if (((param_2 & 0x8000) == 0) && (((param_2 & 0x4000) != 0 || (DAT_101c3934 != 0x8000)))) {
    local_5 = local_5 | 0x80;
  }
  uVar2 = param_2 & 3;
  if (uVar2 == 0) {
    local_10 = 0x80000000;
  }
  else if (uVar2 == 1) {
    local_10 = 0x40000000;
  }
  else {
    if (uVar2 != 2) goto LAB_1000cc19;
    local_10 = 0xc0000000;
  }
  if (param_3 == 0x10) {
    local_14 = 0;
  }
  else if (param_3 == 0x20) {
    local_14 = 1;
  }
  else if (param_3 == 0x30) {
    local_14 = 2;
  }
  else {
    if (param_3 != 0x40) goto LAB_1000cc19;
    local_14 = 3;
  }
  uVar2 = param_2 & 0x700;
  if (uVar2 < 0x401) {
    if ((uVar2 == 0x400) || (uVar2 == 0)) {
      local_c = 3;
    }
    else if (uVar2 == 0x100) {
      local_c = 4;
    }
    else {
      if (uVar2 == 0x200) goto LAB_1000cc33;
      if (uVar2 != 0x300) goto LAB_1000cc19;
      local_c = 2;
    }
  }
  else {
    if (uVar2 != 0x500) {
      if (uVar2 == 0x600) {
LAB_1000cc33:
        local_c = 5;
        goto LAB_1000cc43;
      }
      if (uVar2 != 0x700) {
LAB_1000cc19:
        pDVar4 = FUN_1000c3c5();
        *pDVar4 = 0x16;
        pDVar4 = FUN_1000c3ce();
        *pDVar4 = 0;
        return 0xffffffff;
      }
    }
    local_c = 1;
  }
LAB_1000cc43:
  uVar2 = 0x80;
  if (((param_2 & 0x100) != 0) && ((~DAT_101c3788 & param_4 & 0x80) == 0)) {
    uVar2 = 1;
  }
  if ((param_2 & 0x40) != 0) {
    uVar2 = uVar2 | 0x4000000;
    local_10 = CONCAT13(local_10._3_1_,0x10000);
  }
  if ((param_2 & 0x1000) != 0) {
    uVar2 = uVar2 | 0x100;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      uVar2 = uVar2 | 0x10000000;
    }
  }
  else {
    uVar2 = uVar2 | 0x8000000;
  }
  uVar3 = FUN_1000c3d7();
  if (uVar3 == 0xffffffff) {
    pDVar4 = FUN_1000c3c5();
    *pDVar4 = 0x18;
    pDVar4 = FUN_1000c3ce();
    *pDVar4 = 0;
    return 0xffffffff;
  }
  hFile = CreateFileA(param_1,local_10,local_14,&local_20,local_c,uVar2,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    DVar5 = GetFileType(hFile);
    if (DVar5 != 0) {
      if (DVar5 == 2) {
        local_5 = local_5 | 0x40;
      }
      else if (DVar5 == 3) {
        local_5 = local_5 | 8;
      }
      FUN_1000c4fa(uVar3,hFile);
      iVar7 = (uVar3 & 0x1f) * 0x24;
      param_1._3_1_ = local_5 & 0x48;
      *(byte *)((&DAT_101c3cc0)[(int)uVar3 >> 5] + 4 + iVar7) = local_5 | 1;
      if ((((local_5 & 0x48) == 0) && ((local_5 & 0x80) != 0)) && ((param_2 & 2) != 0)) {
        local_14 = FUN_1000de98(uVar3,-1,2);
        if (local_14 == 0xffffffff) {
          pDVar4 = FUN_1000c3ce();
          if (*pDVar4 == 0x83) goto LAB_1000cdbd;
        }
        else {
          param_3 = param_3 & 0xffffff;
          iVar6 = FUN_1000f5d0(uVar3,(char *)((int)&param_3 + 3),(char *)0x1);
          if ((((iVar6 != 0) || (param_3._3_1_ != '\x1a')) ||
              (iVar6 = FUN_1000f4ab(uVar3,local_14), iVar6 != -1)) &&
             (DVar5 = FUN_1000de98(uVar3,0,0), DVar5 != 0xffffffff)) goto LAB_1000cdbd;
        }
        FUN_10008a3b(uVar3);
        uVar2 = 0xffffffff;
      }
      else {
LAB_1000cdbd:
        uVar2 = uVar3;
        if ((param_1._3_1_ == 0) && ((param_2 & 8) != 0)) {
          pbVar1 = (byte *)((&DAT_101c3cc0)[(int)uVar3 >> 5] + 4 + iVar7);
          *pbVar1 = *pbVar1 | 0x20;
        }
      }
      goto LAB_1000cdd6;
    }
    CloseHandle(hFile);
  }
  DVar5 = GetLastError();
  FUN_1000c352(DVar5);
  uVar2 = 0xffffffff;
LAB_1000cdd6:
  FUN_1000c696(uVar3);
  return uVar2;
}

