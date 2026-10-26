/*
 * FUN_005b44a0 at 005b44a0
 * undefined FUN_005b44a0(void)
 * Address ranges: 005b44a0-005b44f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005b44a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_4 [4];
  
  iVar1 = FUN_005b4500(local_4);
  if (iVar1 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,0x323,
                 &DAT_006b3f70,param_2);
    return 0;
  }
  FUN_005cf9a0(param_3);
  return 1;
}

