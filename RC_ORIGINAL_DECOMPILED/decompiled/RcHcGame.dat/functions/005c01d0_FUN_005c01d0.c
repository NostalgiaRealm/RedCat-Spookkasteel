/*
 * FUN_005c01d0 at 005c01d0
 * undefined FUN_005c01d0(void)
 * Address ranges: 005c01d0-005c023f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_005c01d0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_005c0170();
  if (iVar1 != 0) {
    if (param_3 == 0) {
      param_3 = 1;
    }
    *(undefined4 *)(iVar1 + 4) = param_1;
    *(undefined4 *)(iVar1 + 0xc) = param_1;
    *(undefined4 *)(iVar1 + 8) = param_2;
    *(int *)(iVar1 + 0x10) = param_4;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(int *)(iVar1 + 0x7c) = param_3;
    if (param_4 != 0x14) {
      return iVar1;
    }
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0xc6,
                 &DAT_006b3f70,0);
  }
  return 0;
}

