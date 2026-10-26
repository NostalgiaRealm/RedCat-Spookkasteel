/*
 * FUN_005c3880 at 005c3880
 * undefined FUN_005c3880(void)
 * Address ranges: 005c3880-005c3ce0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_005c3880(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int local_f8;
  undefined4 local_ec [9];
  undefined4 local_c8 [10];
  int local_a0;
  undefined4 local_60;
  
  if (((param_1[0x1c] == 0) && (param_1[0x1b] == 0)) && (param_1[0x1d] == 0)) {
    if (param_2 != 0x14) {
      if (param_2 == param_1[4]) {
        iVar1 = FUN_005c6a90();
        if (((iVar1 != 0) && (param_5 != 0)) && (iVar1 = FUN_005c3fa0(), iVar1 == 0)) {
          return false;
        }
        if ((param_3 == 0) || ((param_1[7] != 0 && (param_4 == param_1[8])))) {
          param_1[8] = param_4;
          param_1[7] = param_3;
          return true;
        }
        puVar6 = param_1 + 1;
        puVar7 = puVar6;
        puVar8 = local_ec;
        for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        param_1[7] = param_3;
        param_1[8] = param_4;
        iVar1 = param_1[param_1[5] + 10];
        if (iVar1 != 0) {
          iVar1 = FUN_005dab60(local_ec,iVar1,0,puVar6,iVar1,0,*puVar6,param_1[2]);
          return iVar1 != 0;
        }
        return true;
      }
      iVar1 = FUN_005c6a90();
      if (iVar1 != 0) {
        if (param_5 == 0) {
          iVar1 = FUN_005c40f0();
          if ((iVar1 == 0) && (iVar1 = FUN_005c6a90(), iVar1 == 0)) {
            iVar1 = FUN_005c4ba0();
            if (iVar1 == 0) {
              uVar9 = 0xc71;
              goto LAB_005c3cbe;
            }
            iVar1 = FUN_005c3fa0();
            if (iVar1 == 0) {
              return false;
            }
            FUN_005c4d10();
          }
        }
        else {
          iVar1 = FUN_005c3fa0();
          if (iVar1 == 0) {
            return false;
          }
        }
      }
      iVar1 = param_1[0x2a];
      if ((iVar1 != 0) && (iVar2 = FUN_005c1c20(), iVar2 == 0)) {
        return false;
      }
      iVar2 = FUN_005c6a70();
      iVar3 = FUN_005c6a70();
      puVar6 = param_1 + 1;
      puVar7 = local_ec;
      for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      param_1[8] = param_4;
      param_1[4] = param_2;
      param_1[7] = param_3;
      local_f8 = param_1[6];
      if ((int)param_1[6] <= (int)param_1[0x25]) {
        local_f8 = param_1[0x25];
      }
      FUN_005c3100();
      if ((param_1[param_1[5] + 10] == 0) && (param_1[0x2b] == 0)) {
        return true;
      }
      if (iVar2 == iVar3) {
        iVar3 = FUN_005c0530(0,0);
        if (iVar3 == 0) {
          return false;
        }
        iVar3 = FUN_005c0d90();
        if (iVar3 == 0) {
          FUN_005c0d70();
          return false;
        }
        iVar2 = FUN_005dab60(local_ec,iVar3,iVar2,(undefined4 *)(iVar2 + 4),iVar3,iVar2,
                             *(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
        if (iVar2 == 0) {
          FUN_005c0d70();
          return false;
        }
        FUN_005c0d70();
      }
      else {
        puVar6 = param_1;
        puVar7 = local_c8;
        for (iVar5 = 0x32; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar6 = local_c8;
        puVar7 = local_ec;
        for (iVar5 = 9; puVar6 = puVar6 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar6 = *puVar7;
          puVar7 = puVar7 + 1;
        }
        param_1[3] = param_1[1];
        param_1[10] = 0;
        param_1[0x1a] = 0;
        iVar5 = FUN_005c03b0(param_1,0);
        if (iVar5 == 0) {
          return false;
        }
        iVar5 = FUN_005c08d0(0,0);
        if (iVar5 == 0) {
          return false;
        }
        iVar5 = FUN_005c0530(0,0);
        if (iVar5 == 0) {
          return false;
        }
        iVar5 = FUN_005c0d90();
        if (iVar5 == 0) {
          FUN_005c0d70();
          return false;
        }
        iVar4 = FUN_005c0d90();
        if (iVar4 == 0) {
          FUN_005c0d70();
          return false;
        }
        iVar2 = FUN_005dab60(local_ec,iVar4,iVar3,(undefined4 *)(iVar2 + 4),iVar5,iVar2,
                             *(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
        if (iVar2 == 0) {
          return false;
        }
        FUN_005c0d70();
        FUN_005c0d70();
        if (local_a0 != 0) {
          FUN_005cf400(local_a0);
          _DAT_007203c0 = 0;
          local_a0 = 0;
        }
        iVar2 = FUN_005c6ad0();
        if (iVar2 == 0) {
          param_1[0x1a] = local_60;
        }
        else {
          FUN_005c02b0();
        }
      }
      iVar2 = param_1[5];
      iVar3 = iVar2;
      for (; iVar2 < local_f8; iVar2 = iVar2 + 1) {
        iVar3 = iVar3 + 1;
        FUN_005c2640(iVar3);
      }
      if ((iVar1 != 0) && (iVar1 = FUN_005c19b0(0), iVar1 == 0)) {
        return false;
      }
      return true;
    }
    uVar9 = 0xc29;
  }
  else {
    uVar9 = 0xc20;
  }
LAB_005c3cbe:
  FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,uVar9,
               &DAT_006b3f70,0);
  return false;
}

