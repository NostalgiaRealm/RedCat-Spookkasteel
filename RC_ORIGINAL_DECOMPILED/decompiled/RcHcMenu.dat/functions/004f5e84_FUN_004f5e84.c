/*
 * FUN_004f5e84 at 004f5e84
 * undefined __register FUN_004f5e84(int * param_1)
 * Address ranges: 004f5e84-004f5ebe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f5e84(int *param_1)

{
  int *piVar1;
  
  (**(code **)(*param_1 + 0xc0))();
  if ((*(byte *)(param_1 + 8) & 0x10) != 0) {
    piVar1 = FUN_0044879c(param_1);
    if ((piVar1 != (int *)0x0) && (piVar1[0x8e] != 0)) {
      (**(code **)(*(int *)piVar1[0x8e] + 0xc))();
    }
  }
  FUN_004f4d9c((int)param_1);
  return;
}

