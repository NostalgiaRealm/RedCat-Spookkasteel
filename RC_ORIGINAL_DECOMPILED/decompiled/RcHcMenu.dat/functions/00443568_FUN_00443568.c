/*
 * FUN_00443568 at 00443568
 * undefined __register FUN_00443568(int * param_1, char param_2)
 * Address ranges: 00443568-00443590
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00443568(int *param_1,char param_2)

{
  if (param_2 != *(char *)((int)param_1 + 0x31)) {
    *(char *)((int)param_1 + 0x31) = param_2;
    if (((char)param_1[0xb] != '\0') && (*(char *)((int)param_1 + 0x31) != '\0')) {
      FUN_00442e7c((int)param_1);
    }
    (**(code **)(*param_1 + 0x38))(param_1,1);
  }
  return;
}

