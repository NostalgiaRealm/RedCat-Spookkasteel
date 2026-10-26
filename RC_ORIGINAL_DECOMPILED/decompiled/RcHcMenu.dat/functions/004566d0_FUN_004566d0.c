/*
 * FUN_004566d0 at 004566d0
 * undefined __register FUN_004566d0(int param_1)
 * Address ranges: 004566d0-0045673e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004566d0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x134) != 0) {
    if (*(char *)(param_1 + 0x144) != '\0') {
      FUN_00455dec(param_1);
    }
    *(undefined4 *)(param_1 + 0x134) = 0;
    FUN_00455e58(param_1);
    iVar1 = *(int *)(param_1 + 0x128);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x1b0) = *(undefined4 *)(param_1 + 0x158);
      *(undefined4 *)(iVar1 + 0x1b4) = *(undefined4 *)(param_1 + 0x15c);
      *(undefined4 *)(param_1 + 0x128) = 0;
    }
  }
  if (*(short *)(param_1 + 0x17a) != 0) {
    (**(code **)(param_1 + 0x178))(*(undefined4 *)(param_1 + 0x17c),param_1);
  }
  return;
}

