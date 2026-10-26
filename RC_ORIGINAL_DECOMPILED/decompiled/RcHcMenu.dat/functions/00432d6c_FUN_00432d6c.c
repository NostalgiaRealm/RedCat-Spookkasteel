/*
 * FUN_00432d6c at 00432d6c
 * undefined4 __register FUN_00432d6c(int param_1)
 * Address ranges: 00432d6c-00432d85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00432d6c(int param_1)

{
  int iVar1;
  
  if ((PTR_DAT_0057261c[9] != '\0') &&
     (iVar1 = CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)(param_1 + 0x4f)) + -1,
     (byte)iVar1 < 2)) {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return 0;
}

