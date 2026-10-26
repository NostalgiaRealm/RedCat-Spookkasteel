/*
 * FUN_00472108 at 00472108
 * undefined __register FUN_00472108(int param_1, undefined * param_2)
 * Address ranges: 00472108-0047213f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00472108(int param_1,undefined *param_2)

{
  int iVar1;
  
  iVar1 = FUN_004688e4(*(int *)(param_1 + 0x24),param_2);
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x99) != '\0')) {
    iVar1 = FUN_004684bc(*(int **)(param_1 + 0x34),param_2);
  }
  if (iVar1 == 0) {
    FUN_004688e4(*(int *)(param_1 + 0x28),param_2);
  }
  return;
}

