/*
 * FUN_00461328 at 00461328
 * undefined __register FUN_00461328(undefined * param_1, undefined4 * param_2, undefined4 param_3, int * param_4)
 * Address ranges: 00461328-00461531
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00461328(undefined *param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  undefined3 uVar4;
  undefined4 uVar2;
  int iVar3;
  int iVar5;
  uint extraout_EDX;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 *local_3c;
  int *local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined4 *puVar7;
  int *piVar8;
  int **ppiVar9;
  undefined1 *local_24;
  undefined1 *local_20;
  uint local_14;
  int local_10;
  
  local_20 = &stack0xfffffffc;
  iVar5 = 6;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  LOCK();
  UNLOCK();
  local_24 = &LAB_00461532;
  piVar8 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffd8;
  FUN_00403e04(param_4,param_2);
  uVar1 = FUN_0046128c(param_1,1);
  uVar4 = (undefined3)((uint)param_1 >> 8);
  if ((uVar1 & 1) == 0) {
    local_14 = 1;
    iVar5 = FUN_00404030((int)param_1);
    if (0 < iVar5) {
      iVar6 = 1;
      do {
        uVar2 = FUN_00461138(param_1,iVar6);
        if ((byte)((char)uVar2 - 1U) < 2) {
          local_30 = (undefined1 *)0x4613bf;
          FUN_00404238(*param_4,1,local_14 - 1,(int *)&local_20);
          local_30 = (undefined1 *)0x4613ce;
          uVar2 = FUN_00461308(CONCAT31(uVar4,param_1[iVar6 + -1]));
          local_30 = (undefined1 *)0x4613d8;
          FUN_00403f58((int *)&local_24,uVar2);
          local_30 = local_24;
          piVar8 = (int *)&stack0xffffffd8;
          local_38 = (int *)0x4613e6;
          iVar3 = FUN_00404030(*param_4);
          local_38 = (int *)0x4613f6;
          FUN_00404238(*param_4,local_14,(iVar3 - local_14) + 1,piVar8);
          local_38 = (int *)0x461405;
          FUN_004040f0(param_4,3);
          local_14 = local_14 + 1;
        }
        else if ((byte)((char)uVar2 - 4U) < 2) {
          iVar3 = FUN_00404030(*param_4);
          if (iVar3 < (int)local_14) {
            puVar7 = (undefined4 *)0x461427;
            FUN_00403f58((int *)&stack0xffffffd4,extraout_EDX & 0xffffff00);
            FUN_00404038(param_4,puVar7);
          }
          local_14 = local_14 + 1;
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else {
    local_14 = FUN_00404030(*param_4);
    iVar5 = FUN_00404030((int)param_1);
    if (-1 < iVar5 + -1) {
      local_10 = 0;
      do {
        iVar6 = FUN_00404030((int)param_1);
        iVar3 = FUN_00461138(param_1,iVar6 - local_10);
        if ((byte)(iVar3 - 1U) < 2) {
          local_30 = (undefined1 *)0x46149b;
          FUN_00404238(*param_4,1,local_14,(int *)&local_30);
          local_30 = (undefined1 *)0x4614aa;
          uVar2 = FUN_00461308(CONCAT31(uVar4,param_1[(iVar6 - local_10) + -1]));
          local_30 = (undefined1 *)0x4614b4;
          FUN_00403f58((int *)&local_34,uVar2);
          local_30 = local_34;
          ppiVar9 = &local_38;
          local_38 = (int *)0x4614c2;
          iVar6 = FUN_00404030(*param_4);
          local_38 = (int *)0x4614d2;
          FUN_00404238(*param_4,local_14 + 1,iVar6 - local_14,(int *)ppiVar9);
          piVar8 = local_38;
          local_38 = (int *)0x4614e1;
          FUN_004040f0(param_4,3);
        }
        else if ((byte)((char)iVar3 - 4U) < 2) {
          if ((int)local_14 < 1) {
            FUN_00403f58((int *)&local_3c,iVar3 - 1U & 0xffffff00);
            FUN_0040407c(param_4,local_3c,(undefined4 *)*param_4);
          }
          else {
            local_14 = local_14 - 1;
          }
        }
        local_10 = local_10 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  *in_FS_OFFSET = piVar8;
  local_20 = &LAB_00461539;
  local_24 = (undefined1 *)0x461531;
  FUN_00403dd4((int *)&local_3c,8);
  return;
}

