/*
 * FUN_005c19b0 at 005c19b0
 * undefined FUN_005c19b0(void)
 * Address ranges: 005c19b0-005c1b7c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005c19b0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  if (((*(int *)(param_1 + 0x70) == 0) && (*(int *)(param_1 + 0x74) == 0)) &&
     (*(int *)(param_1 + 0x6c) == 0)) {
    if ((*(int *)(param_1 + 0xac) != 0) && (*(int *)(param_1 + 0xa8) == param_2)) {
      return 1;
    }
    iVar2 = FUN_005c1c20();
    if (iVar2 == 0) {
      uVar6 = 0x660;
    }
    else {
      if ((param_3 == 0) && (param_3 = *(int *)(param_1 + 0xa4), param_3 == 0)) {
        param_3 = 2;
      }
      if (param_2 == 0) {
        return 1;
      }
      iVar3 = *(int *)(param_1 + 0x18) + 1;
      iVar2 = *(int *)(param_1 + 0x7c);
      if (*(int *)(param_1 + 0x7c) <= iVar3) {
        iVar2 = iVar3;
      }
      if (4 < iVar2) {
        iVar2 = 4;
      }
      uVar6 = *(undefined4 *)(param_1 + 8);
      uVar1 = *(undefined4 *)(param_1 + 4);
      uVar4 = FUN_005c1960();
      iVar3 = FUN_005c6ad0();
      if (iVar3 != 0) {
        uVar4 = 1;
      }
      iVar3 = FUN_005c1710(param_2,uVar1,uVar6,iVar2,*(undefined4 *)(param_1 + 0x78),
                           *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x1c),uVar4,
                           *(int *)(param_1 + 0x68) != 0,param_3);
      if (iVar3 == 0) {
        return 0;
      }
      *(int *)(param_1 + 0xac) = iVar3;
      *(int *)(param_1 + 0xa8) = param_2;
      *(int *)(param_1 + 0xa4) = param_3;
      puVar5 = (undefined4 *)(param_1 + 0x80);
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      iVar3 = FUN_005c3390(param_1,0,(undefined4 *)(param_1 + 0x80));
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(int *)(param_1 + 0x94) = iVar2 + -1;
        iVar2 = FUN_005c1f40(param_1);
        if (iVar2 != 0) {
          return 1;
        }
        FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0x6aa,
                     &DAT_006b3f70,0);
        (**(code **)(param_2 + 0x38))();
        *(undefined4 *)(param_1 + 0xac) = 0;
        return 0;
      }
      uVar6 = 0x69d;
    }
  }
  else {
    uVar6 = 0x654;
  }
  FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,uVar6,
               &DAT_006b3f70,0);
  return 0;
}

