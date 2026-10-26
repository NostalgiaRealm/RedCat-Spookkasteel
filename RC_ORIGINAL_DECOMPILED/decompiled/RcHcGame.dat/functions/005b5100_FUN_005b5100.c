/*
 * FUN_005b5100 at 005b5100
 * undefined FUN_005b5100(void)
 * Address ranges: 005b5100-005b51af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_005b5100(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,int param_12)

{
  int iVar1;
  undefined1 local_30 [48];
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,0x65e,
                 &DAT_006b3f70,0);
    return 0;
  }
  FUN_005cd8b0(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,&param_12,
               param_12);
  if (-1 < param_12) {
    iVar1 = FUN_005b7140();
    if (param_12 < iVar1) {
      FUN_005b7150(param_11,local_30,&param_10);
    }
  }
  return 1;
}

