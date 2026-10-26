/*
 * FUN_00483bf8 at 00483bf8
 * undefined __register FUN_00483bf8(int * param_1)
 * Address ranges: 00483bf8-00483c26
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00483bf8(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x38))();
  if ((cVar1 != '\0') && (*(char *)((int)param_1 + 0x66) != '\0')) {
    thunk_FUN_00478ffa(param_1[0x1c]);
  }
  return;
}

