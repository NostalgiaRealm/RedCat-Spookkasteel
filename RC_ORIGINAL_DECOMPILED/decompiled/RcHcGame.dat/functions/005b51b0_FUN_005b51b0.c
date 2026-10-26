/*
 * FUN_005b51b0 at 005b51b0
 * undefined FUN_005b51b0(void)
 * Address ranges: 005b51b0-005b526e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_005b51b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = param_11;
  if (*(int *)(param_1 + 4) == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,0x697,
                 &DAT_006b3f70,0);
    return 0;
  }
  iVar2 = FUN_005b4500(&param_11);
  if (iVar2 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,0x69c,
                 &DAT_006b3f70,uVar1);
    return 0;
  }
  FUN_005cd950(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
               param_12);
  return 1;
}

