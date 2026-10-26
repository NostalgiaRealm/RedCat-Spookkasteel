/*
 * FUN_100074f0 at 100074f0
 * undefined FUN_100074f0(void)
 * Address ranges: 100074f0-100076f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100074f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  int local_34;
  float local_2c [11];
  
  iVar2 = FUN_1000ee90(param_1,local_2c + 3,local_2c);
  if (iVar2 == 0) {
    (*DAT_1014e358)(s_FinishLeafSides__Could_not_get_l_1003779c);
    return 0;
  }
  if (DAT_1014e630 < 4) {
    (*DAT_1014e35c)(s__WARNING__FinishLeafSides__Incom_10037764);
  }
  else {
    iVar3 = 0;
    iVar2 = DAT_1014e630;
    do {
      local_34 = -1;
      do {
        iVar6 = 0;
        if (0 < iVar2) {
          do {
            iVar1 = (&DAT_10248638)[iVar6];
            pfVar7 = (float *)(&DAT_1003fdf8 + (&DAT_1014e498)[iVar6] * 5);
            pfVar8 = local_2c + 6;
            for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
              *pfVar8 = *pfVar7;
              pfVar7 = pfVar7 + 1;
              pfVar8 = pfVar8 + 1;
            }
            if (iVar1 != 0) {
              FUN_10014600();
              local_2c[9] = -local_2c[9];
              iVar2 = DAT_1014e630;
            }
            if (*(float *)((int)local_2c + iVar3 + 0x18) == (float)local_34) {
              if (iVar6 < iVar2) goto LAB_10007685;
              break;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar2);
        }
        FUN_100145f0();
        *(float *)((int)local_2c + iVar3 + 0x18) = (float)local_34;
        if (local_34 == 1) {
          local_2c[9] = *(float *)((int)local_2c + iVar3);
        }
        else {
          local_2c[9] = -*(float *)((int)local_2c + iVar3 + 0xc);
        }
        iVar2 = FUN_10002b50(local_2c + 6,&DAT_10248638 + iVar6);
        (&DAT_1014e498)[iVar6] = iVar2;
        if (iVar2 == -1) {
          (*DAT_1014e358)(s_FinishLeafSides__Could_not_creat_10037734);
          return 0;
        }
        iVar2 = DAT_1014e630 + 1;
        DAT_102487c8 = DAT_102487c8 + 1;
        DAT_1014e630 = iVar2;
LAB_10007685:
        local_34 = local_34 + 2;
      } while (local_34 < 2);
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0xc);
  }
  *(int *)(param_1 + 0x80) = DAT_1014e628;
  *(int *)(param_1 + 0x84) = DAT_1014e630;
  iVar2 = DAT_1014e630;
  iVar3 = 0;
  if (DAT_1014e630 < 1) {
    return 1;
  }
  puVar4 = (undefined4 *)(&DAT_1014e63c + DAT_1014e628 * 8);
  do {
    if (0x1024863b < (int)puVar4) {
      (*DAT_1014e358)(s_FinishLeafSides__Max_Leaf_Sides__10037710);
      return 0;
    }
    DAT_1014e628 = DAT_1014e628 + 1;
    puVar4[-1] = (&DAT_1014e498)[iVar3];
    *puVar4 = (&DAT_10248638)[iVar3];
    puVar4 = puVar4 + 2;
    iVar3 = iVar3 + 1;
  } while (iVar3 < iVar2);
  return 1;
}

