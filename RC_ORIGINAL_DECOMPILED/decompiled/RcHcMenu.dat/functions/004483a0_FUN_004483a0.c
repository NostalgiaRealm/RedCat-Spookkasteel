/*
 * FUN_004483a0 at 004483a0
 * bool __register FUN_004483a0(HWND param_1, uint param_2)
 * Address ranges: 004483a0-004483bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_004483a0(HWND param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = DAT_0056f9d8;
  SendMessageA(param_1,param_2 & 0xffff,0,0);
  return iVar1 == DAT_0056f9d8;
}

