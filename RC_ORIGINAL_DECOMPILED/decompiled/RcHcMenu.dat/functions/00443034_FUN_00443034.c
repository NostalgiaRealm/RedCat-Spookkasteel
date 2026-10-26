/*
 * FUN_00443034 at 00443034
 * undefined __register FUN_00443034(int * param_1, char param_2)
 * Address ranges: 00443034-00443043
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00443034(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x32)) {
    *(char *)((int)param_1 + 0x32) = param_2;
    (**(code **)(*param_1 + 0x38))(param_1,1);
  }
  return;
}

