/*
 * FUN_005c3390 at 005c3390
 * undefined FUN_005c3390(void)
 * Address ranges: 005c3390-005c347a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005c3390(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 unaff_ESI;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  byte bStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if ((((*(int *)(param_1 + 0xac) != 0) && (*(int *)(param_1 + 0xa8) != 0)) &&
      (*(int *)(param_1 + 0x90) <= (int)param_2)) && ((int)param_2 <= *(int *)(param_1 + 0x94))) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0xa8) + 0x54))(&local_1c);
    if (iVar1 != 0) {
      *(undefined4 **)(param_1 + 0xb0) = param_2;
      *(undefined4 *)(param_1 + 0xa4) = uStack_8;
      param_2[2] = uStack_18;
      *param_2 = unaff_ESI;
      param_2[1] = local_1c;
      param_2[3] = uStack_c;
      param_2[7] = uStack_14;
      if ((bStack_10 & 1) == 0) {
        param_2[6] = 0;
      }
      else {
        param_2[6] = 1;
      }
      param_2[5] = param_2;
      param_2[4] = param_2;
      iVar1 = FUN_005c6a90();
      if (((iVar1 != 0) && (iVar1 = param_2[8], iVar1 != 0)) && (*(int *)(iVar1 + 0x10) != 0)) {
        param_2[6] = 1;
        param_2[7] = *(undefined4 *)(iVar1 + 0x18);
      }
      return 1;
    }
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0xb2e,
                 &DAT_006b3f70,0);
  }
  return 0;
}

