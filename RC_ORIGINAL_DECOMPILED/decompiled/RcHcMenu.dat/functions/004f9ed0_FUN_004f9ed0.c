/*
 * FUN_004f9ed0 at 004f9ed0
 * undefined __register FUN_004f9ed0(int param_1, int param_2, undefined1 param_3)
 * Address ranges: 004f9ed0-004f9f04
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f9ed0(int param_1,int param_2,undefined1 param_3)

{
  undefined1 local_18 [11];
  undefined1 local_d;
  int local_c;
  int local_8;
  
  local_d = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004f9d98(param_1,param_2,(undefined4 *)local_18);
  local_18[0] = local_d;
  FUN_004f9e1c(local_8,local_c,(undefined4 *)local_18);
  return;
}

