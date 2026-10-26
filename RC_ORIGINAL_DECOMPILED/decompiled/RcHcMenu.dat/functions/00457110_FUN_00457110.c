/*
 * FUN_00457110 at 00457110
 * undefined __register FUN_00457110(void)
 * Address ranges: 00457110-00457170
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457110(void)

{
  byte *lpString;
  undefined4 uVar1;
  byte local_30 [32];
  undefined4 local_10;
  undefined1 local_c;
  DWORD local_8;
  undefined1 local_4;
  
  _DAT_0057381c = RegisterWindowMessageA("commdlg_help");
  _DAT_00573820 = RegisterWindowMessageA("commdlg_FindReplace");
  uVar1 = 1;
  local_10 = DAT_005734dc;
  local_c = 0;
  local_8 = GetCurrentThreadId();
  local_4 = 0;
  lpString = FUN_0040a82c(local_30,(byte *)"WndProcPtr%.8X%.8X",&local_10,uVar1);
  DAT_0056fb20 = GlobalAddAtomA((LPCSTR)lpString);
  return;
}

