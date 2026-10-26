/*
 * FUN_00493ce4 at 00493ce4
 * bool __register FUN_00493ce4(int * param_1, undefined4 * param_2)
 * Address ranges: 00493ce4-00493d21
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00493ce4(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 local_d;
  
  iVar1 = FUN_00494858(param_1);
  iVar1 = FUN_00490bb8(iVar1);
  if (iVar1 < 1) {
    *param_2 = 0xffffffff;
  }
  else {
    *param_2 = 0;
  }
  local_d = iVar1 >= 1;
  return local_d;
}

