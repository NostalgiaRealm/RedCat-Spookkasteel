/*
 * FUN_005b5430 at 005b5430
 * undefined FUN_005b5430(void)
 * Address ranges: 005b5430-005b5518
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall
FUN_005b5430(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 local_1c [4];
  undefined1 local_18 [24];
  
  if (*(int *)(param_1 + 0x58) == 0) {
    iVar1 = FUN_005ce620(param_2,param_3,param_4,0);
    if (iVar1 == 0) {
      FUN_005cf220(0x70,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,0x736,
                   &DAT_006b3f70,0);
      return 0;
    }
  }
  else {
    iVar1 = FUN_005b4930(local_1c);
    if (iVar1 == 0) {
      FUN_005cf220(0xffffffff,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,0x729,
                   &DAT_006b3f70,0);
      return 0;
    }
    iVar1 = FUN_005ce620(param_2,param_3,param_4,local_18);
    if (iVar1 == 0) {
      FUN_005cf220(0x70,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,0x72e,
                   &DAT_006b3f70,0);
      return 0;
    }
  }
  return 1;
}

