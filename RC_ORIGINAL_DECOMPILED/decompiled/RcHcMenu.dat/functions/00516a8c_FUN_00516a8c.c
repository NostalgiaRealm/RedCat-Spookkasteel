/*
 * FUN_00516a8c at 00516a8c
 * undefined __register FUN_00516a8c(int param_1, undefined * param_2, int * param_3)
 * Address ranges: 00516a8c-00516b01
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00516a8c(int param_1,undefined *param_2,int *param_3)

{
  uint uVar1;
  LPBYTE pBVar2;
  char *pcVar3;
  int **ppiVar4;
  int *local_14;
  
  ppiVar4 = &local_14;
  local_14 = param_3;
  uVar1 = FUN_00516a38(param_1,param_2);
  if ((int)uVar1 < 1) {
    FUN_00403db0(param_3);
  }
  else {
    FUN_00403e98(param_3,(undefined4 *)0x0,uVar1);
    pBVar2 = FUN_004041f4((undefined *)*param_3);
    FUN_00516bd4(param_1,param_2,pBVar2,(undefined1 *)ppiVar4,uVar1);
    if (((char)local_14 == '\x01') || ((char)local_14 == '\x02')) {
      pcVar3 = FUN_004041f4((undefined *)*param_3);
      uVar1 = FUN_0040a108(pcVar3);
      FUN_00404364(param_3,uVar1);
    }
    else {
      FUN_00516728(param_2);
    }
  }
  return;
}

