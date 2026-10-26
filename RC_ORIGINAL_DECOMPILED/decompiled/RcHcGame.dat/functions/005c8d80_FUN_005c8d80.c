/*
 * FUN_005c8d80 at 005c8d80
 * undefined FUN_005c8d80(void)
 * Address ranges: 005c8d80-005c8e9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005c8d80(undefined4 *param_1,float *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 != (float *)0x0) {
    FUN_005c89a0(param_1);
    if (*param_2 != (float)param_1[3]) {
      uVar1 = __ftol();
      iVar2 = (**(code **)(*(int *)*param_1 + 0x3c))((int *)*param_1,uVar1);
      if (iVar2 != 0) {
        FUN_005cf220(0xb,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_S_006a9a28,0x4cd,
                     &DAT_006b3f70,0);
        return 0;
      }
      param_1[3] = *param_2;
    }
    if (param_2[1] != (float)param_1[4]) {
      uVar1 = __ftol();
      iVar2 = (**(code **)(*(int *)*param_1 + 0x40))((int *)*param_1,uVar1);
      if (iVar2 != 0) {
        FUN_005cf220(0xb,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_S_006a9a28,0x4d9,
                     &DAT_006b3f70,0);
        return 0;
      }
      param_1[4] = param_2[1];
    }
    if (param_2[2] != (float)param_1[5]) {
      uVar1 = __ftol();
      iVar2 = (**(code **)(*(int *)*param_1 + 0x44))((int *)*param_1,uVar1);
      if (iVar2 != 0) {
        FUN_005cf220(0xb,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_S_006a9a28,0x4e7,
                     &DAT_006b3f70,0);
        return 0;
      }
      param_1[5] = param_2[2];
    }
  }
  return 1;
}

