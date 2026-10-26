/*
 * FUN_10017a00 at 10017a00
 * undefined FUN_10017a00(void)
 * Address ranges: 10017a00-10017e63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10017a00(int param_1)

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
      uVar11 = 0x6ff;
    }
    else if (*(int *)(iVar8 + 0x10) == 0x14) {
      uVar11 = 0x705;
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
      *(undefined4 *)(iVar8 + 0xb8) = 0;
      *(undefined4 *)(iVar8 + 0xac) = 0;
      if (((local_48 != 0) && (iVar3 = FUN_10020410(), iVar3 == 0)) &&
         ((*(uint *)(iVar8 + 0xa4) & 0x10000) != 0)) {
        *(undefined4 *)(iVar8 + 0x68) = 0;
      }
      iVar3 = FUN_100165d0(iVar5,iVar2);
      if (iVar3 != 0) {
        *(undefined4 *)(iVar8 + 0xac) = uVar11;
        param_1 = 1;
        *(undefined4 *)(iVar8 + 0x68) = 0;
        if (iVar5 <= iVar2) {
          local_64 = iVar5 * 4;
          local_58 = iVar5;
          do {
            iVar3 = *(int *)((int)local_44 + local_64 + iVar5 * -4);
            iVar4 = FUN_10016ac0();
            puVar9 = (undefined4 *)(iVar8 + 0x80);
            puVar10 = local_24;
            for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar10 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar10 = puVar10 + 1;
            }
            iVar6 = FUN_10018ca0(iVar8,local_58,local_24);
            if (iVar6 == 0) {
              uVar11 = 0x751;
LAB_10017c31:
              FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,uVar11,
                           &DAT_10265ce0,0);
              param_1 = 0;
            }
            else {
              iVar6 = (**(code **)(*(int *)(iVar8 + 0xa8) + 0x3c))(&local_4c);
              if (iVar6 == 0) {
                uVar11 = 0x758;
                goto LAB_10017c31;
              }
              if ((iVar4 == 0) || (local_4c == 0)) {
                uVar11 = 0x75f;
                goto LAB_10017c31;
              }
              iVar3 = FUN_10022010((undefined4 *)(iVar3 + 4),iVar4,iVar3,local_24,local_4c,iVar8,
                                   *(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
              if (iVar3 == 0) {
                uVar11 = 0x768;
                goto LAB_10017c31;
              }
              iVar3 = (**(code **)(*(int *)(iVar8 + 0xa8) + 0x40))();
              if (iVar3 == 0) {
                uVar11 = 0x76f;
                goto LAB_10017c31;
              }
              if (iStack_4 != 0) {
                FUN_10019090();
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
        FUN_100168a0();
        if (param_1 == 0) {
          FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0x785,&DAT_10265ce0,0);
        }
        if (((*(int *)(iVar8 + 0x68) != 0) && (iVar5 = FUN_10020410(), iVar5 == 0)) &&
           (((*(uint *)(iVar8 + 0xa4) & 0x10000) != 0 &&
            ((iVar5 = (**(code **)(*(int *)(iVar8 + 0xa8) + 0x50))(), iVar5 == 0 ||
             (iVar5 != *(int *)(*(int *)(iVar8 + 0x68) + 0xac))))))) {
          iVar5 = FUN_10017630(*(uint *)(*(int *)(iVar8 + 0x68) + 0xa4) | 0x10);
          if (iVar5 == 0) {
            uVar11 = 0x796;
            goto LAB_10017e46;
          }
          iVar5 = (**(code **)(*(int *)(iVar8 + 0xa8) + 0x4c))();
          if (iVar5 == 0) {
            FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0x79d,&DAT_10265ce0,0
                        );
            FUN_10017860();
            FUN_10017860();
            return 0;
          }
          (**(code **)(*(int *)(iVar8 + 0xa8) + 0x50))();
        }
        iVar5 = *(int *)(iVar8 + 0x94);
        *(int *)(iVar8 + 0x94) = iVar2;
        iVar3 = FUN_100214a0(iVar8,0);
        if (iVar3 == 0) {
          FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,0x7af,&DAT_10265ce0,0);
          param_1 = 0;
        }
        *(int *)(iVar8 + 0x94) = iVar5;
        if (((!bVar1) && (iVar2 < iVar5)) && (iVar2 = iVar2 + 1, iVar2 <= iVar5)) {
          do {
            iVar5 = FUN_10018090(iVar2);
            if (iVar5 == 0) {
              uVar11 = 0x7ba;
              goto LAB_10017e46;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 <= *(int *)(iVar8 + 0x94));
        }
        *(undefined4 *)(iVar8 + 0xb8) = 0;
        return param_1;
      }
      uVar11 = 0x731;
    }
  }
  else {
    uVar11 = 0x6f9;
  }
LAB_10017e46:
  FUN_10015fb0(0xffffffff,&DAT_10265ce0,s___Bitmap_bitmap_c_1003c5d4,uVar11,&DAT_10265ce0,0);
  return 0;
}

