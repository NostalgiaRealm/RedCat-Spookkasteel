/*
 * FUN_005df5d0 at 005df5d0
 * undefined FUN_005df5d0(void)
 * Address ranges: 005df5d0-005df7d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall
FUN_005df5d0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  HANDLE pvVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  DWORD dwShareMode;
  DWORD dwCreationDisposition;
  char *pcVar9;
  _WIN32_FIND_DATAA *p_Var10;
  DWORD local_248;
  char local_244 [260];
  _WIN32_FIND_DATAA local_140;
  
  if ((param_2 != 0) && (*(int *)(param_2 + 0x10) != 1)) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)FUN_005cf3b0(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  iVar3 = FUN_005df3d0(param_2,param_3,local_244,&local_248,0x104);
  if (iVar3 == 0) goto LAB_005df79d;
  uVar7 = 0xffffffff;
  pcVar4 = local_244;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar4 = (char *)FUN_005cf3b0(uVar7);
  puVar2[2] = pcVar4;
  if (pcVar4 == (char *)0x0) goto LAB_005df79d;
  puVar2[3] = pcVar4 + (local_248 - (int)local_244);
  pcVar9 = local_244;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar4 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar4 = pcVar4 + 1;
  }
  if ((param_5 & 8) != 0) {
    p_Var10 = &local_140;
    for (iVar3 = 0x50; iVar3 != 0; iVar3 = iVar3 + -1) {
      p_Var10->dwFileAttributes = 0;
      p_Var10 = (_WIN32_FIND_DATAA *)&p_Var10->ftCreationTime;
    }
    pvVar5 = FindFirstFileA((LPCSTR)puVar2[2],&local_140);
    if ((pvVar5 == (HANDLE)0xffffffff) || (((byte)local_140.dwFileAttributes & 0x10) == 0)) {
      iVar3 = FUN_005df7e0(puVar2[2]);
    }
    else {
      iVar3 = 1;
    }
    FindClose(pvVar5);
    if ((param_5 & 4) == 0) {
      if (iVar3 != 1) goto LAB_005df79d;
    }
    else if ((iVar3 == 1) ||
            (BVar6 = CreateDirectoryA((LPCSTR)puVar2[2],(LPSECURITY_ATTRIBUTES)0x0), BVar6 == 0))
    goto LAB_005df79d;
    puVar2[4] = 1;
    puVar2[1] = 0xffffffff;
    goto LAB_005df72e;
  }
  param_5 = param_5 & 7;
  dwCreationDisposition = 3;
  if (param_5 == 1) {
    local_248 = 0x80000000;
    dwShareMode = 3;
  }
  else {
    if (param_5 != 2) {
      dwShareMode = local_248;
      if (param_5 != 4) goto LAB_005df77c;
      dwCreationDisposition = 2;
    }
    local_248 = 0xc0000000;
    dwShareMode = 1;
  }
LAB_005df77c:
  pvVar5 = CreateFileA((LPCSTR)puVar2[2],local_248,dwShareMode,(LPSECURITY_ATTRIBUTES)0x0,
                       dwCreationDisposition,0,(HANDLE)0x0);
  puVar2[1] = pvVar5;
  if (pvVar5 != (HANDLE)0xffffffff) {
LAB_005df72e:
    *puVar2 = 0x31304644;
    return puVar2;
  }
  GetLastError();
LAB_005df79d:
  if (puVar2[2] != 0) {
    FUN_005cf400(puVar2[2]);
    puVar2[2] = 0;
    _DAT_007203c0 = 0;
  }
  FUN_005cf400(puVar2);
  _DAT_007203c0 = 0;
  return (undefined4 *)0x0;
}

