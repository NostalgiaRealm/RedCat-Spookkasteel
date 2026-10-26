/*
 * FUN_0044355c at 0044355c
 * undefined4 __register FUN_0044355c(int param_1)
 * Address ranges: 0044355a-00443566
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0044355c(int param_1)

{
  int iVar1;
  
  do {
    iVar1 = param_1;
    param_1 = *(int *)(iVar1 + 0x58);
  } while (param_1 != 0);
  return *(undefined4 *)(iVar1 + 100);
}

