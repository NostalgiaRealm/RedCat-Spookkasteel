/*
 * FUN_005c41c0 at 005c41c0
 * undefined FUN_005c41c0(void)
 * Address ranges: 005c41c0-005c43d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_005c41c0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  byte local_a;
  byte local_9;
  uint local_4;
  
  iVar1 = FUN_005cd390(4);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_005c0170();
  if (iVar1 == 0) {
    return 0;
  }
  if (local_4 == 0x6d426547) {
    iVar2 = FUN_005cd390(1);
    if (iVar2 != 0) {
      if ((local_9 & 0xf0) == 0x40) {
        iVar2 = FUN_005c4630(iVar1,param_1);
        if (iVar2 != 0) {
          if (*(int *)(iVar1 + 0x24) != 0) {
            *(undefined4 *)(iVar1 + 0x24) = 0;
            uVar3 = FUN_005c5340();
            *(undefined4 *)(iVar1 + 0x24) = uVar3;
            if (*(int *)(iVar1 + 0x24) == 0) goto LAB_005c422c;
          }
          if (*(int *)(iVar1 + 0x10) == 0x14) {
            FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0xeb0,
                         &DAT_006b3f70,0);
          }
          else {
            iVar2 = FUN_005cd390(1);
            if (iVar2 == 0) goto LAB_005c422c;
            while (uVar4 = local_a & 0xf, (int)uVar4 <= *(int *)(iVar1 + 0x18)) {
              iVar2 = FUN_005c03b0(iVar1,uVar4);
              if (iVar2 == 0) goto LAB_005c422c;
              if ((local_a & 0x10) == 0) {
                uVar3 = FUN_005c3300();
                iVar2 = FUN_005cd390(uVar3);
                if (iVar2 == 0) goto LAB_005c422c;
              }
              if ((local_a & 0x20) != 0) {
                FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,
                             0xee6,&DAT_006b3f70,0);
                return 0;
              }
              *(undefined4 *)(iVar1 + 0x48 + uVar4 * 4) = 1;
              iVar2 = FUN_005cd390(1);
              if (iVar2 == 0) {
                FUN_005c02b0();
                return 0;
              }
            }
          }
          if (*(int *)(iVar1 + 0x68) == 0) {
            return iVar1;
          }
          uVar3 = FUN_005c41c0();
          *(undefined4 *)(iVar1 + 0x68) = uVar3;
          if (*(int *)(iVar1 + 0x68) != 0) {
            return iVar1;
          }
        }
      }
      else {
        FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0xea0,
                     &DAT_006b3f70,0);
      }
    }
  }
  else {
    iVar2 = FUN_005cd3d0(0);
    if (((iVar2 != 0) && ((local_4 & 0xffff) == 0x4d42)) &&
       (iVar2 = FUN_005c43e0(iVar1,param_1), iVar2 != 0)) {
      return iVar1;
    }
  }
LAB_005c422c:
  FUN_005c02b0();
  return 0;
}

