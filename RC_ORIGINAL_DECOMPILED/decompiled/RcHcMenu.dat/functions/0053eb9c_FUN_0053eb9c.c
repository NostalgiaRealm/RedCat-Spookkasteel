/*
 * FUN_0053eb9c at 0053eb9c
 * undefined4 __register FUN_0053eb9c(int param_1)
 * Address ranges: 0053eb9c-0053ebcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0053eb9c(int param_1)

{
  undefined1 uVar1;
  undefined3 uVar2;
  
  if ((*(int *)(param_1 + 0x214) == 0) || (*(char *)(*(int *)(param_1 + 0x214) + 0x18) == '\0')) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = (undefined3)((uint)*(int *)(param_1 + 0x214) >> 8);
    uVar1 = 1;
  }
  return CONCAT31(uVar2,uVar1);
}

