/*
 * FUN_005c0be0 at 005c0be0
 * undefined FUN_005c0be0(void)
 * Address ranges: 005c0be0-005c0d6c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_005c0be0(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  bVar2 = true;
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 0x70);
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0x6c);
      iVar4 = 0;
      if (iVar1 < 1) {
        if (iVar1 < 0) {
          *(int *)(iVar3 + 0x6c) = iVar1 + 1;
          if ((param_2 != 0) &&
             ((*(undefined4 *)(*(int *)(param_1 + 0x70) + 0x48 + *(int *)(param_1 + 0x14) * 4) = 1,
              *(int *)(param_1 + 0xa0) != 0 || (*(int *)(param_1 + 0x24) != 0)))) {
            FUN_005c3fa0();
          }
          if ((*(int *)(*(int *)(param_1 + 0x70) + 0x6c) == 0) && (param_2 != 0)) {
            if (*(int *)(param_1 + 0xb4) == 0) {
              iVar4 = -1;
            }
            else {
              *(undefined4 *)(*(int *)(param_1 + 0x70) + 0xb8) = 1;
              iVar4 = 1;
            }
          }
        }
      }
      else {
        *(int *)(iVar3 + 0x6c) = iVar1 + -1;
      }
      if ((*(int *)(param_1 + 0xac) != 0) && (*(int *)(param_1 + 0xb4) != 0)) {
        iVar3 = (**(code **)(*(int *)(param_1 + 0xa8) + 0x40))();
        if (iVar3 == 0) {
          FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0x2f1,
                       &DAT_006b3f70,0);
        }
        bVar2 = iVar3 != 0;
        *(undefined4 *)(param_1 + 0xb4) = 0;
        *(undefined4 *)(param_1 + 0xb0) = 0;
      }
      if (*(int *)(param_1 + 0x68) != 0) {
        iVar3 = FUN_005c0d70();
        if (iVar3 == 0) {
          bVar2 = false;
        }
        *(undefined4 *)(param_1 + 0x68) = 0;
      }
      if ((((iVar4 != 0) && (iVar4 < 1)) && (*(int *)(*(int *)(param_1 + 0x70) + 0xac) != 0)) &&
         (iVar3 = FUN_005c1f40(*(int *)(param_1 + 0x70)), iVar3 == 0)) {
        bVar2 = false;
      }
      FUN_005c02b0();
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    FUN_005c02b0();
    return bVar2;
  }
  FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,699,
               &DAT_006b3f70,0);
  return false;
}

