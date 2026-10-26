/*
 * FUN_00467918 at 00467918
 * undefined4 __register FUN_00467918(int param_1)
 * Address ranges: 00467918-00467937
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00467918(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = FUN_0041300c(*(int *)(param_1 + 0x10));
    if (0 < iVar1) {
      return CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
  }
  return 0;
}

