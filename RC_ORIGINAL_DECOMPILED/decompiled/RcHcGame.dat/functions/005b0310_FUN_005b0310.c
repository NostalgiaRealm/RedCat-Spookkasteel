/*
 * FUN_005b0310 at 005b0310
 * undefined FUN_005b0310(void)
 * Address ranges: 005b0310-005b04a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005b0310(undefined4 param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  uint uVar1;
  int iVar2;
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  FUN_005b00c0(param_2,param_3,local_30,local_60);
  param_2 = 3;
  param_3 = 0;
  do {
    uVar1 = param_2 & 0x80000003;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
    }
    FUN_005b04b0(param_1,local_30 + uVar1 * 0xc,local_30 + param_3,param_4,param_5,param_6,param_7,
                 param_4,param_5,param_6,param_7,param_8,param_9);
    FUN_005b04b0(param_1,local_60 + uVar1 * 0xc,local_60 + param_3,param_4,param_5,param_6,param_7,
                 param_4,param_5,param_6,param_7,param_8,param_9);
    FUN_005b04b0(param_1,local_30 + param_3,local_60 + param_3,param_4,param_5,param_6,param_7,
                 param_4,param_5,param_6,param_7,param_8,param_9);
    iVar2 = param_2 - 2;
    param_3 = param_3 + 0xc;
    param_2 = param_2 + 1;
  } while (iVar2 < 4);
  return;
}

