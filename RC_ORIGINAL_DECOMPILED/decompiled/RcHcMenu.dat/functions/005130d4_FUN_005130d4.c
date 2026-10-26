/*
 * FUN_005130d4 at 005130d4
 * undefined __register FUN_005130d4(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 005130d4-00513130
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005130d4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  int extraout_EDX;
  
  if ((*(char *)(param_1 + 8) != '\0') ||
     (*(double *)(param_1 + 0x10) != (double)CONCAT44(param_5,param_4))) {
    *(undefined4 *)(param_1 + 0x10) = param_4;
    *(undefined4 *)(param_1 + 0x14) = param_5;
    uVar1 = FUN_00402b48();
    if ((int)uVar1 >> 0x1f != extraout_EDX) {
      uVar1 = thunk_FUN_00402874(uVar1);
    }
    *(uint *)(param_1 + 0x18) = uVar1;
    *(undefined1 *)(param_1 + 8) = 0;
    FUN_00501180(param_1);
  }
  return;
}

