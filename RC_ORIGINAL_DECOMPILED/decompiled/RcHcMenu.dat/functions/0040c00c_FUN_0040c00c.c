/*
 * FUN_0040c00c at 0040c00c
 * undefined __register FUN_0040c00c(int param_1, int * param_2, double * param_3)
 * Address ranges: 0040c00c-0040c26c;0040c26f-0040c31d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040c00c(int param_1,int *param_2,double *param_3)

{
  bool bVar1;
  WORD WVar2;
  undefined4 uVar3;
  PCNZCH pCVar4;
  undefined2 extraout_var;
  int iVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ushort uVar7;
  uint uVar8;
  undefined4 *in_FS_OFFSET;
  undefined **ppuVar9;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined *local_2c;
  undefined *local_28;
  int local_24;
  undefined *local_20;
  byte local_1c;
  byte local_1b;
  char local_1a;
  byte local_19;
  ushort local_18;
  ushort local_16;
  ushort local_14;
  ushort local_12;
  ushort local_10;
  char local_e;
  undefined1 local_d;
  double *local_c;
  int local_8;
  
  puStack_3c = &stack0xfffffffc;
  local_2c = (undefined *)0x0;
  local_28 = (undefined *)0x0;
  local_24 = 0;
  local_20 = (undefined *)0x0;
  puStack_40 = &LAB_0040c31e;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  uVar8 = 0;
  local_16 = 0;
  local_18 = 0;
  local_1c = 0;
  local_d = 0;
  local_c = param_3;
  uVar3 = FUN_0040bed4((int)DAT_00573500);
  local_e = (char)uVar3;
  local_8 = 0;
  if (*DAT_00573500 == 'g') {
    FUN_0040bf20(param_1,param_2);
    FUN_00404238(param_1,1,*param_2 - 1,&local_24);
    FUN_00409924(local_24,(int *)&local_20);
    local_8 = FUN_0040bf5c(local_20);
  }
  else {
    pCVar4 = FUN_0040da1c(&DAT_0040c338,DAT_00573500);
    if (0 < (int)pCVar4) {
      local_8 = DAT_005735dc;
    }
  }
  bVar1 = FUN_0040bd7c(param_1,param_2,&local_10,(char *)&local_19);
  if (((bVar1) && (uVar3 = FUN_0040be9c(param_1,param_2,DAT_005734fd), (char)uVar3 != '\0')) &&
     (bVar1 = FUN_0040bd7c(param_1,param_2,&local_12,&local_1a), bVar1)) {
    uVar3 = FUN_0040be9c(param_1,param_2,DAT_005734fd);
    if ((char)uVar3 == '\0') {
      WVar2 = FUN_0040b154();
      uVar8 = CONCAT22(extraout_var,WVar2);
      if (local_e == '\x01') {
        local_18 = local_10;
        local_16 = local_12;
      }
      else {
        local_16 = local_10;
        local_18 = local_12;
      }
    }
    else {
      bVar1 = FUN_0040bd7c(param_1,param_2,&local_14,(char *)&local_1b);
      if (!bVar1) goto LAB_0040c303;
      if (local_e == '\0') {
        uVar8 = (uint)local_14;
        local_1c = local_1b;
        local_16 = local_10;
        local_18 = local_12;
      }
      else if (local_e == '\x01') {
        uVar8 = (uint)local_14;
        local_1c = local_1b;
        local_16 = local_12;
        local_18 = local_10;
      }
      else if (local_e == '\x02') {
        uVar8 = (uint)local_10;
        local_1c = local_19;
        local_16 = local_12;
        local_18 = local_14;
      }
      if (local_8 < 1) {
        if (local_1c < 3) {
          WVar2 = FUN_0040b154();
          uVar7 = (short)uVar8 + (short)((int)((uint)WVar2 - (uint)DAT_0056f138) / 100) * 100;
          uVar8 = (uint)uVar7;
          if ((DAT_0056f138 != 0) && ((int)(uint)uVar7 < (int)((uint)WVar2 - (uint)DAT_0056f138))) {
            uVar8 = (uint)(ushort)(uVar7 + 100);
          }
        }
      }
      else {
        uVar8 = FUN_0040bfb0(uVar8,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
      }
    }
    FUN_0040be9c(param_1,param_2,DAT_005734fd);
    FUN_0040bd58(param_1,param_2);
    if ((DAT_005735bc != '\0') && (iVar5 = FUN_0040431c("ddd",DAT_00573500), iVar5 != 0)) {
      if ((byte)(*DAT_00573514 - 0x30U) < 10) {
        FUN_0040bf20(param_1,param_2);
      }
      else {
        do {
          while ((iVar5 = FUN_00404030(param_1), *param_2 <= iVar5 &&
                 (*(char *)(param_1 + -1 + *param_2) != ' '))) {
            *param_2 = *param_2 + 1;
          }
          FUN_0040bd58(param_1,param_2);
          iVar5 = FUN_00404030(param_1);
          if (iVar5 < *param_2) break;
          ppuVar9 = &local_28;
          uVar6 = FUN_00404030((int)DAT_0057350c);
          FUN_00404238(param_1,*param_2,uVar6,(int *)ppuVar9);
          iVar5 = FUN_00409870(DAT_0057350c,local_28);
          if (iVar5 == 0) break;
          ppuVar9 = &local_2c;
          uVar6 = FUN_00404030((int)DAT_00573510);
          FUN_00404238(param_1,*param_2,uVar6,(int *)ppuVar9);
          iVar5 = FUN_00409870(DAT_00573510,local_2c);
        } while (iVar5 != 0);
      }
    }
    local_d = FUN_0040ae10(uVar8,local_16,local_18,local_c);
  }
LAB_0040c303:
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_0040c325;
  puStack_40 = (undefined1 *)0x40c31d;
  FUN_00403dd4((int *)&local_2c,4);
  return;
}

