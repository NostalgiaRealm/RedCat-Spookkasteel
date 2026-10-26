/*
 * FUN_004d7244 at 004d7244
 * undefined __register FUN_004d7244(int * param_1, char param_2)
 * Address ranges: 004d7244-004d7285
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d7244(int *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  byte extraout_DL;
  
  piVar4 = FUN_00403434(param_1,param_2);
  uVar3 = piVar4[1];
  piVar1 = (int *)(uVar3 + 0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  if (SBORROW4(iVar2,1)) {
    thunk_FUN_00402874(uVar3);
  }
  FUN_0045b45c(piVar4,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar4);
  }
  return;
}

