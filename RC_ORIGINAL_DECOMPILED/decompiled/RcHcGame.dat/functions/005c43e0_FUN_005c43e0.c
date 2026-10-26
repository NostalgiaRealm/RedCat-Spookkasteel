/*
 * FUN_005c43e0 at 005c43e0
 * undefined FUN_005c43e0(void)
 * Address ranges: 005c43e0-005c45f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005c43e0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int local_2e;
  uint local_28;
  int local_24;
  uint local_20;
  undefined2 uStack_1a;
  undefined2 local_18;
  undefined2 uStack_16;
  int local_8;
  
  iVar1 = FUN_005cd390(0xe);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_005cd390(0x28);
  if (iVar1 == 0) {
    return 0;
  }
  if (local_28 < 0x29) {
    if (0x27 < local_28) goto LAB_005c4426;
    uVar4 = 0xfe7;
  }
  else {
    FUN_005cd3d0(0);
LAB_005c4426:
    if (CONCAT22(uStack_16,local_18) == 0) {
      iVar1 = local_2e + -0x36;
      switch(uStack_1a) {
      case 8:
        if (local_8 == 0) {
          local_8 = 0x100;
        }
        iVar3 = FUN_005c4aa0();
        *(int *)(param_1 + 0x24) = iVar3;
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = FUN_005cd390(local_8 * 4);
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = 1;
        *(undefined4 *)(param_1 + 0x10) = 1;
        iVar1 = iVar1 + local_8 * -4;
        break;
      default:
        goto switchD_005c4484_caseD_9;
      case 0x10:
        iVar3 = 2;
        *(undefined4 *)(param_1 + 0x10) = 3;
        break;
      case 0x18:
        iVar3 = 3;
        *(undefined4 *)(param_1 + 0x10) = 10;
        break;
      case 0x20:
        iVar3 = 4;
        *(undefined4 *)(param_1 + 0x10) = 0xd;
      }
      if (-1 < iVar1) {
        FUN_005cd3d0(0);
        *(int *)(param_1 + 4) = local_24;
        *(uint *)(param_1 + 8) = (local_20 ^ (int)local_20 >> 0x1f) - ((int)local_20 >> 0x1f);
        *(uint *)(param_1 + 0xc) = local_24 + 3U & 0xfffffffc;
        uVar2 = local_24 * iVar3 + 3U & 0xfffffffc;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        iVar1 = FUN_005c03b0(param_1,0);
        if (iVar1 == 0) {
          return 0;
        }
        if (0 < (int)local_20) {
          iVar1 = *(int *)(param_1 + 8);
          if (iVar1 == 0) {
            return 1;
          }
          do {
            iVar1 = iVar1 + -1;
            iVar3 = FUN_005cd390(uVar2);
            if (iVar3 == 0) {
              return 0;
            }
          } while (iVar1 != 0);
          return 1;
        }
        iVar1 = *(int *)(param_1 + 8);
        do {
          if (iVar1 == 0) {
            return 1;
          }
          iVar1 = iVar1 + -1;
          iVar3 = FUN_005cd390(uVar2);
        } while (iVar3 != 0);
        return 0;
      }
      uVar4 = 0x1016;
    }
    else {
      uVar4 = 0xfed;
    }
  }
  FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,uVar4,
               &DAT_006b3f70,0);
switchD_005c4484_caseD_9:
  return 0;
}

