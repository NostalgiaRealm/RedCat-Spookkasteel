/*
 * FUN_0044feb0 at 0044feb0
 * undefined __register FUN_0044feb0(char param_1)
 * Address ranges: 0044feb0-0044fed4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044feb0(char param_1)

{
  undefined4 local_8;
  int local_4;
  
  local_8 = 8;
  local_4 = -(uint)(param_1 != '\0');
  SystemParametersInfoA(0x49,8,&local_8,0);
  return;
}

