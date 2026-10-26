/*
 * FUN_005c0d90 at 005c0d90
 * undefined FUN_005c0d90(void)
 * Address ranges: 005c0d90-005c0e44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005c0d90(int param_1)

{
  int iVar1;
  undefined4 unaff_ESI;
  int local_4;
  
  local_4 = param_1;
  if (param_1 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0x335,
                 &DAT_006b3f70,0);
    return 0;
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0x33b,
                 &DAT_006b3f70,0);
    return 0;
  }
  if (*(int *)(param_1 + 0xac) == 0) {
    return *(undefined4 *)(param_1 + 0x28);
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 0xa8) + 0x3c))(&local_4);
  if (iVar1 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0x344,
                 &DAT_006b3f70,0);
    return 0;
  }
  *(undefined4 *)(param_1 + 0xb4) = 1;
  return unaff_ESI;
}

