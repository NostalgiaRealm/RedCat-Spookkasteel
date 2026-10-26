/*
 * FUN_0040a281 at 0040a281
 * undefined __cdecl FUN_0040a281(LPCSTR param_1, int param_2)
 * Address ranges: 0040a281-0040a392
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_0040a281(LPCSTR param_1,int param_2)

{
  int iVar1;
  LSTATUS LVar2;
  HKEY pHVar3;
  CHAR local_194;
  CHAR aCStack_193 [383];
  DWORD local_14;
  HKEY local_10;
  HKEY local_c;
  int local_8;
  
  local_8 = 0;
  do {
    lstrcpyA(&local_194,param_1);
    lstrcatA(&local_194,&DAT_004120e0);
    iVar1 = lstrlenA(param_1);
    if (DAT_004136b0 == 0) {
      LVar2 = RegOpenKeyA((HKEY)0x80000000,param_1,&local_c);
      if (LVar2 == 0) {
        LVar2 = RegEnumKeyA(local_c,0,aCStack_193 + iVar1,0x100);
        pHVar3 = local_c;
        goto LAB_0040a30f;
      }
LAB_0040a355:
      local_8 = 0x800;
    }
    else {
      LVar2 = RegOpenKeyExA(*(HKEY *)(&DAT_00412030 + param_2 * 4),param_1,0,0x1f,&local_10);
      if (LVar2 != 0) goto LAB_0040a355;
      local_14 = 0x100;
      LVar2 = RegEnumKeyExA(local_10,0,aCStack_193 + iVar1,&local_14,(LPDWORD)0x0,(LPSTR)0x0,
                            (LPDWORD)0x0,(PFILETIME)0x0);
      pHVar3 = local_10;
LAB_0040a30f:
      RegCloseKey(pHVar3);
      if (LVar2 != 0) goto LAB_0040a355;
      FUN_0040a281(&local_194,param_2);
    }
    local_8 = local_8 + 1;
    if (0x7ff < local_8) {
      if (DAT_004136b0 == 0) {
        pHVar3 = (HKEY)0x80000000;
      }
      else {
        pHVar3 = *(HKEY *)(&DAT_00412030 + param_2 * 4);
      }
      RegDeleteKeyA(pHVar3,param_1);
      return;
    }
  } while( true );
}

