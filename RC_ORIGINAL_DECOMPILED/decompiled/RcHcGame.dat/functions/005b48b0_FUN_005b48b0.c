/*
 * FUN_005b48b0 at 005b48b0
 * undefined FUN_005b48b0(void)
 * Address ranges: 005b48b0-005b4920
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005b48b0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_2[1];
  *(undefined4 *)(param_1 + 0x20) = param_2[2];
  *(undefined4 *)(param_1 + 0x24) = param_2[3];
  *(undefined4 *)(param_1 + 0x28) = param_2[4];
  *(undefined4 *)(param_1 + 0x2c) = param_2[5];
  iVar1 = FUN_005b4500(param_1 + 0x30);
  if (iVar1 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,0x3f1,
                 &DAT_006b3f70,param_3);
    return 0;
  }
  return 1;
}

