/*
 * FUN_005918d0 at 005918d0
 * undefined FUN_005918d0(void)
 * Address ranges: 005918d0-0059193a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005918d0(int param_1,undefined4 param_2)

{
  float10 fVar1;
  undefined4 local_c;
  float local_8;
  undefined4 local_4;
  
  if (0.0 < *(float *)(param_1 + 0x198)) {
    local_c = *(undefined4 *)(param_1 + 0x18c);
    local_8 = *(float *)(param_1 + 400);
    local_4 = *(undefined4 *)(param_1 + 0x194);
    fVar1 = (float10)FUN_00409e30(param_2);
    local_8 = (float)((float10)local_8 -
                     fVar1 * (float10)*(float *)(param_1 + 0x198) * (float10)32.0);
    FUN_004b77c0(&local_c);
  }
  return;
}

