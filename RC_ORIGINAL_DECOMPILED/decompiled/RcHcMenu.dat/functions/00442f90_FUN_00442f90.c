/*
 * FUN_00442f90 at 00442f90
 * undefined __register FUN_00442f90(int param_1, byte param_2)
 * Address ranges: 00442f90-00442fd0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00442f90(int param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != *(byte *)(param_1 + 0x33)) {
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 != 0) {
      iVar2 = FUN_00443308(iVar1,param_1);
      FUN_0044163c(iVar1,iVar2,param_2);
    }
    *(byte *)(param_1 + 0x33) = param_2;
    if ((*(char *)(param_1 + 0x2c) != '\0') && (*(char *)(param_1 + 0x31) != '\0')) {
      FUN_00442e7c(param_1);
    }
  }
  return;
}

