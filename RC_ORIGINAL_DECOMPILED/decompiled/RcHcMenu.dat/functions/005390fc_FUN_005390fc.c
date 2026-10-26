/*
 * FUN_005390fc at 005390fc
 * undefined __register FUN_005390fc(int * param_1, char param_2)
 * Address ranges: 005390fc-00539135
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005390fc(int *param_1,char param_2)

{
  int *piVar1;
  
  if (*(char *)((int)param_1 + 0x2d1) != param_2) {
    *(char *)((int)param_1 + 0x2d1) = param_2;
    piVar1 = (int *)FUN_00538fbc(param_1);
    (**(code **)(*piVar1 + 0xb8))();
  }
  return;
}

