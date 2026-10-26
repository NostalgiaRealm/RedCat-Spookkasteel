/*
 * FUN_005bd630 at 005bd630
 * undefined FUN_005bd630(void)
 * Address ranges: 005bd630-005bd68e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005bd630(int param_1,int param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((*(int *)(param_1 + 8) == 0) || (param_2 == 0)) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  else {
    iVar1 = FUN_005d1900();
    *(int *)(param_1 + 0x1c) = iVar1;
    if (iVar1 == 0) {
      FUN_005cf220(0x41,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a9718,0x96,&DAT_006b3f70
                   ,0);
      return 0;
    }
  }
  return 1;
}

