/*
 * FUN_004121b8 at 004121b8
 * undefined __register FUN_004121b8(int * param_1, char param_2)
 * Address ranges: 004121b8-004121d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004121b8(int *param_1,char param_2)

{
  int *piVar1;
  char extraout_DL;
  
  piVar1 = FUN_00403434(param_1,param_2);
  (**(code **)(*piVar1 + 8))();
  if ('\0' < extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

