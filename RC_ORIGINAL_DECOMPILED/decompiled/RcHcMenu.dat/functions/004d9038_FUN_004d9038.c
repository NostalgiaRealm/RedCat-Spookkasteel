/*
 * FUN_004d9038 at 004d9038
 * undefined __register FUN_004d9038(int * param_1, char param_2)
 * Address ranges: 004d9038-004d9069
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d9038(int *param_1,char param_2)

{
  if ((char)param_1[0xba] != param_2) {
    *(char *)(param_1 + 0xba) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

