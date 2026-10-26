/*
 * FUN_005c1f40 at 005c1f40
 * undefined FUN_005c1f40(void)
 * Address ranges: 005c1f40-005c239a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005c1f40(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int local_64;
  int local_58;
  int local_4c;
  int local_48;
  int local_44 [8];
  undefined4 local_24 [8];
  int iStack_4;
  
  iVar8 = param_1;
  if (*(int *)(param_1 + 0x70) != 0) {
    iVar8 = *(int *)(param_1 + 0x70);
  }
  if ((*(int *)(iVar8 + 0x6c) < 1) && (*(int *)(iVar8 + 0x74) == 0)) {
    if (*(int *)(iVar8 + 0xac) == 0) {
      uVar11 = 0x7a8;
    }
    else {
      iVar5 = *(int *)(iVar8 + 0x90);
      iVar3 = *(int *)(iVar8 + 0x94);
      bVar1 = false;
      if (iVar5 <= iVar3) {
        piVar7 = (int *)(iVar8 + 0x48 + iVar5 * 4);
        iVar2 = iVar5;
        do {
          if ((*piVar7 != 0) && (iVar2 != *(int *)(iVar8 + 0x14))) {
            bVar1 = true;
          }
          iVar2 = iVar2 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar2 <= iVar3);
      }
      iVar2 = iVar5;
      if (bVar1) {
        iVar2 = iVar3;
      }
      local_48 = *(int *)(iVar8 + 0x68);
      uVar11 = *(undefined4 *)(iVar8 + 0xac);
      *(undefined4 *)(iVar8 + 0xac) = 0;
      if (((local_48 != 0) && (iVar3 = FUN_005c6ad0(), iVar3 == 0)) &&
         ((*(uint *)(iVar8 + 0xa4) & 0x10000) != 0)) {
        *(undefined4 *)(iVar8 + 0x68) = 0;
      }
      iVar3 = FUN_005c08d0(iVar5,iVar2);
      if (iVar3 != 0) {
        *(undefined4 *)(iVar8 + 0xac) = uVar11;
        param_1 = 1;
        *(undefined4 *)(iVar8 + 0x68) = 0;
        if (iVar5 <= iVar2) {
          local_64 = iVar5 * 4;
          local_58 = iVar5;
          do {
            iVar3 = *(int *)((int)local_44 + local_64 + iVar5 * -4);
            iVar4 = FUN_005c0d90();
            puVar9 = (undefined4 *)(iVar8 + 0x80);
            puVar10 = local_24;
            for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar10 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar10 = puVar10 + 1;
            }
            iVar6 = FUN_005c3390(iVar8,local_58,local_24);
            if (iVar6 == 0) {
              uVar11 = 0x7f3;
LAB_005c2168:
              FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,
                           uVar11,&DAT_006b3f70,0);
              param_1 = 0;
            }
            else {
              iVar6 = (**(code **)(*(int *)(iVar8 + 0xa8) + 0x3c))(&local_4c);
              if (iVar6 == 0) {
                uVar11 = 0x800;
                goto LAB_005c2168;
              }
              if ((iVar4 == 0) || (local_4c == 0)) {
                uVar11 = 0x807;
                goto LAB_005c2168;
              }
              iVar3 = FUN_005dab60((undefined4 *)(iVar3 + 4),iVar4,iVar3,local_24,local_4c,iVar8,
                                   *(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
              if (iVar3 == 0) {
                uVar11 = 0x812;
                goto LAB_005c2168;
              }
              iVar3 = (**(code **)(*(int *)(iVar8 + 0xa8) + 0x40))();
              if (iVar3 == 0) {
                uVar11 = 0x81a;
                goto LAB_005c2168;
              }
              if (iStack_4 != *(int *)(iVar8 + 0xa0)) {
                FUN_005c3fa0();
                FUN_005c4d10();
              }
            }
            local_58 = local_58 + 1;
            local_64 = local_64 + 4;
          } while (local_58 <= iVar2);
        }
        *(int *)(iVar8 + 0x68) = local_48;
        *(undefined4 *)(iVar8 + 0xb4) = 0;
        *(undefined4 *)(iVar8 + 0xb0) = 0;
        *(undefined4 *)(iVar8 + 0xb8) = 0;
        FUN_005c0bb0();
        if (param_1 == 0) {
          FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0x833,
                       &DAT_006b3f70,0);
        }
        if (((*(int *)(iVar8 + 0x68) != 0) && (iVar5 = FUN_005c6ad0(), iVar5 == 0)) &&
           (((*(uint *)(iVar8 + 0xa4) & 0x10000) != 0 &&
            ((iVar5 = (**(code **)(*(int *)(iVar8 + 0xa8) + 0x50))(), iVar5 == 0 ||
             (iVar5 != *(int *)(*(int *)(iVar8 + 0x68) + 0xac))))))) {
          iVar5 = FUN_005c19b0(*(uint *)(*(int *)(iVar8 + 0x68) + 0xa4) | 0x10);
          if (iVar5 == 0) {
            uVar11 = 0x842;
            goto LAB_005c237d;
          }
          iVar5 = (**(code **)(*(int *)(iVar8 + 0xa8) + 0x4c))();
          if (iVar5 == 0) {
            FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0x849,
                         &DAT_006b3f70,0);
            FUN_005c1c20();
            FUN_005c1c20();
            return 0;
          }
          (**(code **)(*(int *)(iVar8 + 0xa8) + 0x50))();
        }
        iVar5 = *(int *)(iVar8 + 0x94);
        *(int *)(iVar8 + 0x94) = iVar2;
        iVar3 = FUN_005d9950(iVar8,0);
        if (iVar3 == 0) {
          FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0x85d,
                       &DAT_006b3f70,0);
          param_1 = 0;
        }
        *(int *)(iVar8 + 0x94) = iVar5;
        if (((!bVar1) && (iVar2 < iVar5)) && (iVar2 = iVar2 + 1, iVar2 <= iVar5)) {
          do {
            iVar5 = FUN_005c2640(iVar2);
            if (iVar5 == 0) {
              uVar11 = 0x868;
              goto LAB_005c237d;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 <= *(int *)(iVar8 + 0x94));
        }
        *(undefined4 *)(iVar8 + 0xb8) = 0;
        return param_1;
      }
      uVar11 = 0x7d3;
    }
  }
  else {
    uVar11 = 0x7a2;
  }
LAB_005c237d:
  FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,uVar11,
               &DAT_006b3f70,0);
  return 0;
}

