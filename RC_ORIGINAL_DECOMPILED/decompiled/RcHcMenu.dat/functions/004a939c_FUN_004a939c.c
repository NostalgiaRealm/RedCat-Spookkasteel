/*
 * FUN_004a939c at 004a939c
 * undefined __register FUN_004a939c(int * param_1, int param_2)
 * Address ranges: 004a939c-004a93c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a939c(int *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FUN_004a8de8(param_1,param_2);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + -0x10))(param_1,param_2);
  }
  return;
}

