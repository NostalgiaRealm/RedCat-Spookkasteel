/*
 * FUN_00443020 at 00443020
 * undefined __register FUN_00443020(int * param_1, short param_2)
 * Address ranges: 00443020-00443031
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00443020(int *param_1,short param_2)

{
  if (param_2 != (short)param_1[0x15]) {
    *(short *)(param_1 + 0x15) = param_2;
    (**(code **)(*param_1 + 0x38))(param_1,1);
  }
  return;
}

