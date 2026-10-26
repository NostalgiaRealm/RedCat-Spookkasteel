/*
 * FUN_005b5390 at 005b5390
 * undefined FUN_005b5390(void)
 * Address ranges: 005b5390-005b5428
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall
FUN_005b5390(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined1 local_18 [24];
  
  iVar1 = FUN_005b4a80();
  if (iVar1 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,0x70c,
                 &DAT_006b3f70,0);
    return 0;
  }
  iVar1 = FUN_005cd9f0(local_18,param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    FUN_005cf220(0x70,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,0x712,
                 &DAT_006b3f70,0);
    return 0;
  }
  return 1;
}

