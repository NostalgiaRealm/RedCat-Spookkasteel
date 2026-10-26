/*
 * FUN_0050e880 at 0050e880
 * undefined __register FUN_0050e880(int * param_1, char param_2)
 * Address ranges: 0050e880-0050e8b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050e880(int *param_1,char param_2)

{
  if (*(char *)((int)param_1 + 0x20b) != param_2) {
    *(char *)((int)param_1 + 0x20b) = param_2;
    (**(code **)(*param_1 + 0x74))();
  }
  return;
}

