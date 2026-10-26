/*
 * FUN_0049a324 at 0049a324
 * undefined __register FUN_0049a324(int * param_1, char param_2)
 * Address ranges: 0049a324-0049a36e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049a324(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  piVar1 = FUN_00403434(param_1,param_2);
  piVar2 = FUN_0049a29c(piVar1,extraout_EDX,extraout_ECX);
  FUN_0049b6c0((int)piVar1,(int)piVar2);
  FUN_00403094((int *)piVar1[8]);
  FUN_00412a48(piVar1,(byte)extraout_EDX & 0xfc);
  if ('\0' < (char)(byte)extraout_EDX) {
    FUN_00403424(piVar1);
  }
  return;
}

