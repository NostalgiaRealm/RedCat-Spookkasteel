/*
 * FUN_005c1c20 at 005c1c20
 * undefined FUN_005c1c20(void)
 * Address ranges: 005c1c20-005c1dba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005c1c20(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_8;
  
  uVar3 = 1;
  if (((param_1[0x1c] == 0) && (param_1[0x1d] == 0)) && (param_1[0x1b] == 0)) {
    local_8 = param_2;
    if (1 < *param_1) {
      local_8 = 1;
    }
    if ((param_1[0x2a] != 0) && (param_1[0x2b] != 0)) {
      if (local_8 != 0) {
        iVar1 = FUN_005c23a0(param_1);
        if (iVar1 == 0) {
          FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0x6f1,
                       &DAT_006b3f70,0);
          uVar3 = 0;
        }
      }
      (**(code **)(param_1[0x2a] + 0x38))();
      param_1[0x2b] = 0;
    }
    if (param_1[0x28] != 0) {
      if (param_1[9] == 0) {
        iVar1 = FUN_005c4aa0();
        if (iVar1 != 0) {
          iVar2 = FUN_005c5040();
          if (iVar2 == 0) {
            FUN_005c4d10();
          }
          else {
            param_1[9] = iVar1;
          }
        }
      }
      FUN_005c4d10();
    }
    if (param_1[0x1a] != 0) {
      iVar1 = FUN_005c1c20();
      if (iVar1 == 0) {
        FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0x717,
                     &DAT_006b3f70,0);
        uVar3 = 0;
      }
    }
    param_1[0x28] = 0;
    param_1[0x22] = 0;
    param_1[0x21] = 0;
    param_1[0x20] = 0;
    param_1[0x25] = 0;
    param_1[0x24] = 0;
    param_1[0x23] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2b] = 0;
    param_1[0x2a] = 0;
    return uVar3;
  }
  FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0x6e4,
               &DAT_006b3f70,0);
  return 0;
}

