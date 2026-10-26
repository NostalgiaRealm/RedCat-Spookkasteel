/*
 * FUN_005b72f0 at 005b72f0
 * undefined FUN_005b72f0(void)
 * Address ranges: 005b72f0-005b7526
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005b72f0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int local_3f0;
  undefined1 local_3e8 [1000];
  
  iVar1 = FUN_005cd0a0(0,0,9);
  if (iVar1 == 0) {
    FUN_005cf220(0x62,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a94ac,0x42a,&DAT_006b3f70,
                 0);
    iVar2 = local_3f0;
  }
  else {
    iVar2 = FUN_005cd200(1);
    if (iVar2 == 0) {
      FUN_005cf220(0x62,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a94ac,0x42e,
                   &DAT_006b3f70,0);
    }
    else {
      iVar3 = FUN_005b6f80();
      if (iVar3 == 0) {
        FUN_005cf220(0x60,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a94ac,0x432,
                     &DAT_006b3f70,0);
      }
      else {
        iVar4 = FUN_005b7530();
        if (iVar4 == 0) {
          FUN_005cf220(0x62,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a94ac,0x435,
                       &DAT_006b3f70,0);
        }
        else {
          FUN_005cd320();
          local_3f0 = FUN_005cd200(9);
          if (local_3f0 != 0) {
            iVar4 = 0;
            if (0 < *(short *)(iVar3 + 0x34)) {
              iVar6 = 0;
              do {
                piVar7 = (int *)(*(int *)(iVar3 + 0x38) + iVar6);
                if (*piVar7 != 0) {
                  FUN_0060d588(local_3e8,&DAT_00690818,iVar4);
                  iVar2 = FUN_005cd200(1);
                  if (iVar2 == 0) {
                    uVar8 = 0x449;
                  }
                  else {
                    iVar5 = FUN_005c41c0();
                    *piVar7 = iVar5;
                    if (iVar5 == 0) {
                      uVar8 = 0x44e;
                    }
                    else {
                      iVar5 = FUN_005c31d0();
                      if (iVar5 != 0) {
                        FUN_005cd320();
                        goto LAB_005b747f;
                      }
                      uVar8 = 0x454;
                    }
                  }
                  FUN_005cf220(0x62,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a94ac,uVar8,
                               &DAT_006b3f70,0);
                  goto LAB_005b74ee;
                }
LAB_005b747f:
                iVar4 = iVar4 + 1;
                iVar6 = iVar6 + 0x10;
              } while (iVar4 < *(short *)(iVar3 + 0x34));
            }
            FUN_005cd320();
            FUN_005cd320();
            return iVar3;
          }
          FUN_005cf220(0x62,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a94ac,0x43b,
                       &DAT_006b3f70,0);
        }
      }
    }
  }
LAB_005b74ee:
  FUN_005b7020();
  if (iVar2 != 0) {
    FUN_005cd320();
  }
  if (local_3f0 != 0) {
    FUN_005cd320();
  }
  if (iVar1 != 0) {
    FUN_005cd320();
  }
  return 0;
}

