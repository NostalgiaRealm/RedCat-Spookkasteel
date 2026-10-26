/*
 * FUN_00450524 at 00450524
 * undefined4 __register FUN_00450524(int param_1)
 * Address ranges: 00450524-0045053b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00450524(int param_1)

{
  if ((PTR_DAT_0057261c[9] != '\0') && (*(char *)(param_1 + 0x28) != '\0')) {
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  return 0;
}

