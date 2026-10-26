/*
 * FUN_005112f0 at 005112f0
 * undefined __register FUN_005112f0(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 005112f0-0051131d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005112f0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_00403270(param_1,param_2,param_3);
  if (cVar1 == '\0') {
    FUN_005111b0((int)param_1);
  }
  else {
    FUN_0051123c((int)param_1);
  }
  return;
}

