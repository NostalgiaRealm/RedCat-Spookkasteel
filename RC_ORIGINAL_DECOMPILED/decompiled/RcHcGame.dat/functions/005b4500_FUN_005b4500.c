/*
 * FUN_005b4500 at 005b4500
 * undefined FUN_005b4500(void)
 * Address ranges: 005b4500-005b4566
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005b4500(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 local_30 [48];
  
  if (param_2 == 0) {
    *param_3 = 0xffffffff;
  }
  else {
    iVar1 = FUN_005b7230(param_3,local_30,&param_3);
    if (iVar1 == 0) {
      FUN_005cf220(0xffffffff,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,0xae,
                   &DAT_006b3f70,param_2);
      return 0;
    }
  }
  return 1;
}

