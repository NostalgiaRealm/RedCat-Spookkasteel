/*
 * FUN_005539cc at 005539cc
 * undefined __register FUN_005539cc(int * param_1, char param_2)
 * Address ranges: 005539cc-005539fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005539cc(int *param_1,char param_2)

{
  if ((char)param_1[0x66] != param_2) {
    *(char *)(param_1 + 0x66) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

