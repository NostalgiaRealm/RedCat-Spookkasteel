/*
 * FUN_005bd490 at 005bd490
 * undefined FUN_005bd490(void)
 * Address ranges: 005bd490-005bd4fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005bd490(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) < 1) {
    if (*(int *)(param_1 + 0xc) != 1) {
      if (*(int *)(param_1 + 0xc) == 2) {
        if (*(int *)(param_1 + 0x1c) != 0) {
          FUN_005c8f80();
        }
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
      *(undefined4 *)(param_1 + 8) = 0;
      return 1;
    }
    uVar1 = 0xd6;
  }
  else {
    uVar1 = 0xcd;
  }
  FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a9718,uVar1,
               &DAT_006b3f70,0);
  return 0;
}

