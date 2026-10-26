/*
 * FUN_004b3498 at 004b3498
 * undefined __register FUN_004b3498(int param_1, uint * param_2, undefined4 param_3, int * param_4)
 * Address ranges: 004b3498-004b380e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b3498(int param_1,uint *param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  int *piVar5;
  int unaff_EDI;
  undefined **ppuVar6;
  byte *pbVar7;
  int *in_FS_OFFSET;
  undefined1 uVar8;
  byte bVar9;
  undefined *local_a0;
  int local_9c;
  uint *local_98;
  int local_94;
  int local_90;
  undefined *local_8c;
  undefined *local_88;
  int local_84;
  uint *local_80;
  byte local_7c [16];
  undefined4 uStack_6c;
  int iStack_68;
  undefined *puStack_64;
  undefined *local_60;
  undefined *puStack_5c;
  undefined *puStack_58;
  undefined *puStack_54;
  undefined *puStack_50;
  undefined *puStack_4c;
  int local_44;
  char *pcStack_40;
  uint *puStack_3c;
  undefined *puStack_38;
  undefined *puStack_34;
  undefined4 uStack_30;
  uint *puStack_2c;
  int local_28;
  uint *local_24;
  undefined1 *local_20;
  undefined *local_10;
  uint *local_c;
  int local_8;
  
  bVar9 = 0;
  iVar4 = 0x13;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  LOCK();
  UNLOCK();
  local_20 = (undefined *)0x0;
  piVar5 = &local_44;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = *param_4;
    param_4 = param_4 + 1;
    piVar5 = piVar5 + 1;
  }
  local_10 = local_20;
  local_20 = (undefined1 *)0x4b34ce;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  local_20 = (undefined1 *)0x4b34d6;
  FUN_004041e4((int)local_10);
  local_24 = (uint *)&LAB_004b380f;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  puStack_2c = local_c;
  uStack_30 = *(undefined4 *)(local_8 + 4);
  puStack_34 = local_10;
  puStack_38 = (undefined *)0x4b34fd;
  local_20 = &stack0xfffffffc;
  FUN_004040f0((int *)&stack0xffffffe8,3);
  puStack_38 = (undefined *)0x4b350b;
  cVar1 = FUN_00492f80(*(int **)(local_8 + 0x1c),(byte *)&local_44);
  if (cVar1 == '\0') {
    puStack_38 = (undefined *)0x4b37d7;
    (**(code **)(**(int **)(local_8 + 0x4c) + 0x34))(*(int **)(local_8 + 0x4c),unaff_ESI);
  }
  else {
    piVar5 = &local_44;
    ppuVar6 = &local_60;
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *ppuVar6 = (undefined *)*piVar5;
      piVar5 = piVar5 + (uint)bVar9 * -2 + 1;
      ppuVar6 = ppuVar6 + (uint)bVar9 * -2 + 1;
    }
    puStack_38 = (undefined *)0x4b3528;
    FUN_0048dea8((byte *)&local_60);
    piVar5 = &local_44;
    pbVar7 = local_7c;
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(int *)pbVar7 = *piVar5;
      piVar5 = piVar5 + (uint)bVar9 * -2 + 1;
      pbVar7 = pbVar7 + ((uint)bVar9 * -2 + 1) * 4;
    }
    puStack_38 = (undefined *)0x4b353d;
    FUN_0048dea8(local_7c);
    puStack_38 = (undefined *)0x4b3547;
    FUN_0048de00(local_7c,0);
    puStack_38 = (undefined *)0x4b3554;
    FUN_00403e48((int *)&local_20,0x4b3828);
    puStack_38 = (undefined *)0x4b3561;
    FUN_00403e48((int *)&local_24,0x4b3838);
    puStack_38 = (undefined *)0x4b356c;
    iVar4 = FUN_004b17b8(*(int *)(local_8 + 0x44));
    uVar2 = iVar4 - 1;
    if (SBORROW4(iVar4,1)) {
      puStack_38 = (undefined *)0x4b3576;
      uVar2 = thunk_FUN_00402874(uVar2);
    }
    if (-1 < (int)uVar2) {
      local_28 = uVar2 + 1;
      uVar8 = local_28 == 0;
      iVar4 = 0;
      do {
        puStack_38 = (undefined *)0x4b3597;
        iVar3 = FUN_004b585c(*(int **)(local_8 + 0x44),iVar4);
        puStack_38 = (undefined *)0x4b35a8;
        FUN_00490f08(*(int **)(local_8 + 0x1c),(byte *)(iVar3 + 4),(int *)&local_80);
        puStack_38 = (undefined *)0x4b35b3;
        FUN_00404140(local_80,local_c);
        if ((bool)uVar8) {
          puStack_38 = (undefined *)0x4b35c3;
          iVar3 = FUN_004b585c(*(int **)(local_8 + 0x44),iVar4);
          if (*(char *)(iVar3 + 0x21) == '\0') {
            puStack_38 = (undefined *)0x4b35db;
            FUN_00403e48((int *)&local_20,0x4b3828);
          }
          else if (*(char *)(iVar3 + 0x21) == '\x01') {
            puStack_38 = (undefined *)0x4b35ea;
            FUN_00403e48((int *)&local_20,0x4b3848);
          }
          puStack_38 = (undefined *)0x4b35f8;
          iVar4 = FUN_004b585c(*(int **)(local_8 + 0x44),iVar4);
          if (*(char *)(iVar4 + 0x20) == '\0') {
            puStack_38 = (undefined *)0x4b3610;
            FUN_00403e48((int *)&local_24,0x4b3858);
          }
          else if (*(char *)(iVar4 + 0x20) == '\x01') {
            puStack_38 = (undefined *)0x4b361f;
            FUN_00403e48((int *)&local_24,0x4b3838);
          }
          break;
        }
        iVar4 = iVar4 + 1;
        local_28 = local_28 + -1;
        uVar8 = local_28 == 0;
      } while (!(bool)uVar8);
    }
    uVar8 = *(char *)(local_8 + 8) == '\0';
    if ((bool)uVar8) {
      puStack_38 = (undefined *)0x4b370a;
      FUN_00403e48((int *)&stack0xffffffe4,*(int *)(DAT_0057444c + 4));
      puStack_38 = (undefined *)0x4b3717;
      FUN_00404140(local_24,(uint *)" INNER");
      if (((bool)uVar8) || (*(char *)(local_8 + 0x10) == '\0')) {
        puStack_38 = (undefined *)0x4b3733;
        FUN_00403e48((int *)&stack0xffffffe4,*(int *)(DAT_00574444 + 4));
      }
      puStack_38 = (undefined *)0x4b3741;
      (**(code **)(**(int **)(local_8 + 0x4c) + 0x34))(*(int **)(local_8 + 0x4c),unaff_ESI);
      puStack_38 = &DAT_004b38a0;
      puStack_3c = (uint *)0x4b3757;
      FUN_004b3b04(local_8,&local_60,(int *)&local_98);
      puStack_3c = local_98;
      pcStack_40 = ".";
      local_44 = 0x4b3776;
      FUN_0049145c(*(int **)(local_8 + 0x1c),(byte *)&local_60,&local_9c);
      local_44 = local_9c;
      puStack_4c = local_10;
      puStack_50 = &DAT_004b3888;
      puStack_54 = (undefined *)0x4b379b;
      FUN_0049145c(*(int **)(local_8 + 0x1c),local_7c,(int *)&local_a0);
      puStack_54 = local_a0;
      puStack_58 = &DAT_004b38ac;
      puStack_5c = (undefined *)0x4b37b6;
      FUN_004040f0(&local_94,9);
      puStack_5c = (undefined *)0x4b37c7;
      (**(code **)(**(int **)(local_8 + 0x5c) + 0x34))(*(int **)(local_8 + 0x5c),local_94);
    }
    else {
      puStack_38 = local_20;
      puStack_3c = local_24;
      pcStack_40 = " JOIN ";
      local_44 = 0x4b3652;
      FUN_004040f0((int *)&stack0xffffffe4,3);
      local_44 = 0x4b365f;
      FUN_00404140(local_24,(uint *)" INNER");
      if ((bool)uVar8) {
        local_44 = 0x4b3671;
        FUN_0040407c((int *)&stack0xffffffe4,local_24,(undefined4 *)" JOIN ");
      }
      puStack_4c = &DAT_004b3878;
      puStack_50 = (undefined *)0x4b368d;
      local_44 = unaff_EDI;
      FUN_004b3b04(local_8,&local_60,(int *)&local_88);
      puStack_50 = local_88;
      puStack_54 = &DAT_004b3888;
      puStack_58 = (undefined *)0x4b36ac;
      FUN_0049145c(*(int **)(local_8 + 0x1c),(byte *)&local_60,(int *)&local_8c);
      puStack_58 = local_8c;
      puStack_5c = &DAT_004b3894;
      local_60 = local_10;
      puStack_64 = &DAT_004b3888;
      iStack_68 = 0x4b36d3;
      FUN_0049145c(*(int **)(local_8 + 0x1c),local_7c,&local_90);
      iStack_68 = local_90;
      uStack_6c = 0x4b36e6;
      FUN_004040f0(&local_84,10);
      uStack_6c = 0x4b36f4;
      (**(code **)(**(int **)(local_8 + 0x4c) + 0x34))(*(int **)(local_8 + 0x4c),local_84);
    }
  }
  *in_FS_OFFSET = iStack_68;
  local_60 = &LAB_004b3816;
  puStack_64 = (undefined *)0x4b37f4;
  FUN_00403dd4((int *)&local_a0,9);
  puStack_64 = (undefined *)0x4b3801;
  FUN_00403dd4((int *)&local_24,4);
  puStack_64 = (undefined *)0x4b380e;
  FUN_00403dd4((int *)&local_10,2);
  return;
}

