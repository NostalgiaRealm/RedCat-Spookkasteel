/*
 * FUN_00451a8c at 00451a8c
 * undefined __register FUN_00451a8c(undefined4 param_1, uint param_2)
 * Address ranges: 00451a8c-00451ac4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00451a8c(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_0044f140(DAT_005737d8);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      uVar4 = 0;
      iVar2 = FUN_0044f12c(DAT_005737d8,iVar3);
      FUN_00433700(iVar2,param_2 & 0xffff,0,uVar4);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

