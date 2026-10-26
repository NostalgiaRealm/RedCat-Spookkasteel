/*
 * FUN_004028d8 at 004028d8
 * undefined __register FUN_004028d8(undefined4 param_1)
 * Address ranges: 004028d8-004028e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004028d8(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = FUN_00407904();
  *(undefined4 *)((int)pvVar1 + 4) = param_1;
  return;
}

