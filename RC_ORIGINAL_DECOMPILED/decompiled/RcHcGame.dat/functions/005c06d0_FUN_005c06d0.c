/*
 * FUN_005c06d0 at 005c06d0
 * undefined FUN_005c06d0(void)
 * Address ranges: 005c06d0-005c08c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005c06d0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 0x6c) != 0) || (*(int *)(param_1 + 0x70) != 0)) {
    uVar3 = 0x1e9;
    goto LAB_005c08a9;
  }
  if (param_5 == *(int *)(param_1 + 0x10)) {
    if (param_5 != *(int *)(param_1 + 0x8c)) {
      if ((*(int *)(param_1 + 0xac) == 0) || (iVar1 = FUN_005c23a0(param_1), iVar1 != 0)) {
        if ((param_3 < *(int *)(param_1 + 0x14)) || (7 < param_4)) {
          uVar3 = 0x20c;
          goto LAB_005c08a9;
        }
        iVar1 = FUN_005c3240(param_1,*(undefined4 *)(param_1 + 0x18),param_4);
        if (iVar1 == 0) {
          return 0;
        }
        *(int *)(param_1 + 0x18) = param_4;
        goto LAB_005c07a8;
      }
      uVar3 = 0x203;
      goto LAB_005c08a9;
    }
  }
  else if (param_5 != *(int *)(param_1 + 0x8c)) {
    uVar3 = 0x1ef;
    goto LAB_005c08a9;
  }
  if ((*(int *)(param_1 + 0x90) <= param_3) && (param_4 <= *(int *)(param_1 + 0x94))) {
LAB_005c07a8:
    if (param_3 <= param_4) {
      iVar1 = param_3 * 4;
      iVar2 = param_3;
      do {
        if ((*(int *)(param_1 + 0xac) == 0) || (param_5 != *(int *)(param_1 + 0x8c))) {
          uVar3 = FUN_005c1140(param_1,iVar2,0xffffffff);
          *(undefined4 *)(iVar1 + param_3 * -4 + param_2) = uVar3;
        }
        else {
          uVar3 = FUN_005c1230(param_1,iVar2,0xffffffff);
          *(undefined4 *)(iVar1 + param_3 * -4 + param_2) = uVar3;
        }
        if (*(int *)(iVar1 + param_3 * -4 + param_2) == 0) {
          FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0x222,
                       &DAT_006b3f70,0);
          if (iVar2 + -1 < param_3) {
            return 0;
          }
          iVar1 = ((iVar2 + -1) - param_3) + 1;
          do {
            FUN_005c02b0();
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          return 0;
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 4;
      } while (iVar2 <= param_4);
    }
    return 1;
  }
  uVar3 = 0x1f7;
LAB_005c08a9:
  FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,uVar3,
               &DAT_006b3f70,0);
  return 0;
}

