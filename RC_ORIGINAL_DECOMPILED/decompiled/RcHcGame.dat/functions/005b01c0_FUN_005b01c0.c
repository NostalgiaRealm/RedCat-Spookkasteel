/*
 * FUN_005b01c0 at 005b01c0
 * undefined FUN_005b01c0(void)
 * Address ranges: 005b01c0-005b02e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005b01c0(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  FUN_005b00c0(param_3,param_4,local_30,local_60);
  uVar1 = __ftol();
  uVar2 = __ftol();
  uVar3 = __ftol();
  param_3 = 3;
  param_4 = 0;
  do {
    uVar4 = param_3 & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    FUN_005b0940(param_1,param_2,local_30 + uVar4 * 0xc,local_30 + param_4,uVar3,uVar2,uVar1,uVar3,
                 uVar2,uVar1);
    FUN_005b0940(param_1,param_2,local_60 + uVar4 * 0xc,local_60 + param_4,uVar3,uVar2,uVar1,uVar3,
                 uVar2,uVar1);
    FUN_005b0940(param_1,param_2,local_30 + param_4,local_60 + param_4,uVar3,uVar2,uVar1,uVar3,uVar2
                 ,uVar1);
    iVar5 = param_3 - 2;
    param_4 = param_4 + 0xc;
    param_3 = param_3 + 1;
  } while (iVar5 < 4);
  return;
}

