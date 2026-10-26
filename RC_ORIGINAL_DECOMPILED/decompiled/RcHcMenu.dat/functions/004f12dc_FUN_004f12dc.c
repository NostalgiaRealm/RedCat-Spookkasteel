/*
 * FUN_004f12dc at 004f12dc
 * undefined __register FUN_004f12dc(undefined4 * param_1)
 * Address ranges: 004f12dc-004f1311
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f12dc(undefined4 *param_1)

{
  if (*(short *)((int)param_1 + 0x32) == 0) {
    (**(code **)*param_1)();
  }
  else {
    (*(code *)param_1[0xc])(param_1[0xd],param_1[2],param_1[3],0);
  }
  return;
}

