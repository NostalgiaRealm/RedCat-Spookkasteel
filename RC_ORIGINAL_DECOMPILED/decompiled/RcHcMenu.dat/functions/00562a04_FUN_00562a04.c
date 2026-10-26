/*
 * FUN_00562a04 at 00562a04
 * undefined __register FUN_00562a04(int param_1)
 * Address ranges: 00562a04-00562a24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00562a04(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0x2c9) == '\0') {
    piVar1 = FUN_0040cfa8((int *)&DAT_0056152c,'\x01',(undefined4 *)PTR_PTR_005721f4);
    FUN_0040382c(piVar1);
  }
  return;
}

