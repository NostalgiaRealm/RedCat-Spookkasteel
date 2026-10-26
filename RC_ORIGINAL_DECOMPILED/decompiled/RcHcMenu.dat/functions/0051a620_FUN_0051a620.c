/*
 * FUN_0051a620 at 0051a620
 * undefined __register FUN_0051a620(int param_1, int param_2)
 * Address ranges: 0051a620-0051ab0e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051a620(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  WPARAM WVar4;
  int iVar5;
  int *in_FS_OFFSET;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  
  local_14 = &stack0xfffffffc;
  iVar5 = 6;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_18 = &LAB_0051ab0f;
  local_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_1c;
  *(int *)(param_1 + 0x350) = param_2;
  local_20 = 0x51a664;
  (**(code **)(**(int **)(*(int *)(param_1 + 0x2f0) + 0x1f0) + 0x40))();
  local_20 = 0x51a671;
  FUN_00406a48(&PTR_DAT_0051a0e8,&local_1c);
  piVar1 = *(int **)(*(int *)(param_1 + 0x2f0) + 0x1f0);
  local_20 = 0x51a688;
  (**(code **)(*piVar1 + 0x34))(piVar1,local_1c);
  local_20 = 0x51a69c;
  (**(code **)(**(int **)(*(int *)(param_1 + 0x2f4) + 0x1f0) + 0x40))();
  local_20 = 0x51a6a9;
  FUN_00406a48(&PTR_DAT_0051a0e8,&local_20);
  iVar5 = local_20;
  piVar1 = *(int **)(*(int *)(param_1 + 0x2f4) + 0x1f0);
  local_20 = 0x51a6c0;
  (**(code **)(*piVar1 + 0x34))(piVar1,iVar5);
  local_20 = 0x51a6d4;
  (**(code **)(**(int **)(*(int *)(param_1 + 0x2f8) + 0x1f0) + 0x40))();
  local_20 = 0x51a6e1;
  FUN_00406a48(&PTR_DAT_0051a0e8,&local_24);
  piVar1 = *(int **)(*(int *)(param_1 + 0x2f8) + 0x1f0);
  local_20 = 0x51a6f8;
  (**(code **)(*piVar1 + 0x34))(piVar1,local_24);
  local_20 = 0x51a706;
  FUN_0042c6a8(*(int *)(param_1 + 0x2e0));
  local_20 = 0x51a70e;
  iVar5 = FUN_00520c1c(param_2);
  local_20 = 0x51a713;
  iVar5 = FUN_0051e160(iVar5);
  uVar2 = iVar5 - 1;
  if (SBORROW4(iVar5,1)) {
    local_20 = 0x51a71d;
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_18 = (undefined1 *)(uVar2 + 1);
    iVar5 = 0;
    do {
      local_20 = 0x51a738;
      iVar3 = FUN_00520c1c(param_2);
      local_20 = 0x51a740;
      local_20 = FUN_0051e184(iVar3,iVar5);
      local_24 = 0x51a749;
      iVar3 = FUN_00520c1c(param_2);
      local_24 = 0x51a751;
      iVar3 = FUN_0051e184(iVar3,iVar5);
      local_24 = 0x51a759;
      FUN_005257bc(iVar3,&local_28);
      iVar3 = local_20;
      piVar1 = *(int **)(*(int *)(param_1 + 0x2e0) + 0x1f0);
      local_20 = 0x51a771;
      local_14 = (undefined1 *)(**(code **)(*piVar1 + 0x38))(piVar1,local_28,iVar3);
      local_20 = 0x51a77c;
      iVar3 = FUN_00520c1c(param_2);
      local_20 = 0x51a784;
      iVar3 = FUN_0051e184(iVar3,iVar5);
      if (*(char *)(iVar3 + 7) != '\0') {
        local_20 = 0x51a796;
        iVar3 = FUN_00520c1c(param_2);
        local_20 = 0x51a79e;
        local_20 = FUN_0051e184(iVar3,iVar5);
        local_24 = 0x51a7a7;
        iVar3 = FUN_00520c1c(param_2);
        local_24 = 0x51a7af;
        iVar3 = FUN_0051e184(iVar3,iVar5);
        local_24 = 0x51a7b7;
        FUN_005257bc(iVar3,&local_2c);
        iVar3 = local_20;
        piVar1 = *(int **)(*(int *)(param_1 + 0x2f0) + 0x1f0);
        local_20 = 0x51a7cf;
        (**(code **)(*piVar1 + 0x38))(piVar1,local_2c,iVar3);
        local_20 = 0x51a7d7;
        iVar3 = FUN_00520c1c(param_2);
        local_20 = 0x51a7df;
        local_20 = FUN_0051e184(iVar3,iVar5);
        local_24 = 0x51a7e8;
        iVar3 = FUN_00520c1c(param_2);
        local_24 = 0x51a7f0;
        iVar3 = FUN_0051e184(iVar3,iVar5);
        local_24 = 0x51a7f8;
        FUN_005257bc(iVar3,&local_30);
        iVar3 = local_20;
        piVar1 = *(int **)(*(int *)(param_1 + 0x2f4) + 0x1f0);
        local_20 = 0x51a810;
        (**(code **)(*piVar1 + 0x38))(piVar1,local_30,iVar3);
        local_20 = 0x51a818;
        iVar3 = FUN_00520c1c(param_2);
        local_20 = 0x51a820;
        local_20 = FUN_0051e184(iVar3,iVar5);
        local_24 = 0x51a829;
        iVar3 = FUN_00520c1c(param_2);
        local_24 = 0x51a831;
        iVar3 = FUN_0051e184(iVar3,iVar5);
        local_24 = 0x51a839;
        FUN_005257bc(iVar3,&local_34);
        iVar3 = local_20;
        piVar1 = *(int **)(*(int *)(param_1 + 0x2f8) + 0x1f0);
        local_20 = 0x51a851;
        (**(code **)(*piVar1 + 0x38))(piVar1,local_34,iVar3);
      }
      local_20 = 0x51a859;
      iVar3 = FUN_00520c1c(param_2);
      local_20 = 0x51a861;
      iVar3 = FUN_0051e184(iVar3,iVar5);
      if (*(char *)(iVar3 + 0x30) != '\0') {
        local_20 = 0x51a87a;
        FUN_005196c8(*(int **)(param_1 + 0x2e0),(WPARAM)local_14,'\x01');
      }
      local_20 = 0x51a882;
      iVar3 = FUN_00520c1c(param_2);
      local_20 = 0x51a88a;
      iVar3 = FUN_0051e184(iVar3,iVar5);
      if (*(char *)(iVar3 + 8) != '\0') {
        local_20 = 0x51a8a3;
        FUN_005196fc(*(int **)(param_1 + 0x2e0),(WPARAM)local_14,'\x02');
      }
      iVar5 = iVar5 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != (undefined1 *)0x0);
  }
  local_20 = 0x51a8c3;
  iVar5 = (**(code **)(**(int **)(*(int *)(param_1 + 0x2e0) + 0x1f0) + 0x14))();
  if (0 < iVar5) {
    local_20 = 0x51a8d7;
    FUN_0042c778(*(int **)(param_1 + 0x2e0),0);
  }
  local_20 = 0x51a8df;
  FUN_0051a114(param_1);
  local_20 = 0x51a8ef;
  FUN_0042a96c(*(int **)(param_1 + 0x2f0),0);
  local_20 = 0x51a8ff;
  FUN_0042a96c(*(int **)(param_1 + 0x2f4),0);
  local_20 = 0x51a90f;
  FUN_0042a96c(*(int **)(param_1 + 0x2f8),0);
  local_20 = 0x51a917;
  iVar5 = FUN_00520c1c(param_2);
  local_20 = 0x51a91c;
  iVar5 = FUN_0051e160(iVar5);
  uVar2 = iVar5 - 1;
  if (SBORROW4(iVar5,1)) {
    local_20 = 0x51a926;
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_18 = (undefined1 *)(uVar2 + 1);
    iVar5 = 0;
    do {
      local_20 = 0x51a941;
      iVar3 = FUN_00520c1c(param_2);
      local_20 = 0x51a949;
      iVar3 = FUN_0051e184(iVar3,iVar5);
      local_20 = 0x51a94e;
      iVar3 = FUN_0051c878(iVar3);
      if (iVar3 == 0) {
        local_20 = 0x51a95a;
        iVar3 = FUN_00520c1c(param_2);
        local_20 = 0x51a962;
        iVar3 = FUN_0051e184(iVar3,iVar5);
        local_20 = 0x51a978;
        WVar4 = FUN_00413bd8(*(int **)(*(int *)(param_1 + 0x2f0) + 0x1f0),iVar3);
        local_20 = 0x51a988;
        FUN_0042a96c(*(int **)(param_1 + 0x2f0),WVar4);
        local_20 = 0x51a990;
        iVar3 = FUN_00520c1c(param_2);
        local_20 = 0x51a998;
        iVar3 = FUN_0051e184(iVar3,iVar5);
        if (*(char *)(iVar3 + 0x24) == '\0') {
          local_20 = 0x51a9b1;
          (**(code **)(**(int **)(param_1 + 0x308) + 0xb8))(*(int **)(param_1 + 0x308),1);
        }
        else {
          local_20 = 0x51a9c6;
          (**(code **)(**(int **)(param_1 + 0x30c) + 0xb8))(*(int **)(param_1 + 0x30c),1);
        }
      }
      local_20 = 0x51a9ce;
      iVar3 = FUN_00520c1c(param_2);
      local_20 = 0x51a9d6;
      iVar3 = FUN_0051e184(iVar3,iVar5);
      local_20 = 0x51a9db;
      iVar3 = FUN_0051c878(iVar3);
      if (iVar3 == 1) {
        local_20 = 0x51a9e6;
        iVar3 = FUN_00520c1c(param_2);
        local_20 = 0x51a9ee;
        iVar3 = FUN_0051e184(iVar3,iVar5);
        local_20 = 0x51aa04;
        WVar4 = FUN_00413bd8(*(int **)(*(int *)(param_1 + 0x2f0) + 0x1f0),iVar3);
        local_20 = 0x51aa14;
        FUN_0042a96c(*(int **)(param_1 + 0x2f4),WVar4);
        local_20 = 0x51aa1c;
        iVar3 = FUN_00520c1c(param_2);
        local_20 = 0x51aa24;
        iVar3 = FUN_0051e184(iVar3,iVar5);
        if (*(char *)(iVar3 + 0x24) == '\0') {
          local_20 = 0x51aa3d;
          (**(code **)(**(int **)(param_1 + 0x314) + 0xb8))(*(int **)(param_1 + 0x314),1);
        }
        else {
          local_20 = 0x51aa52;
          (**(code **)(**(int **)(param_1 + 0x318) + 0xb8))(*(int **)(param_1 + 0x318),1);
        }
      }
      local_20 = 0x51aa5a;
      iVar3 = FUN_00520c1c(param_2);
      local_20 = 0x51aa62;
      iVar3 = FUN_0051e184(iVar3,iVar5);
      local_20 = 0x51aa67;
      iVar3 = FUN_0051c878(iVar3);
      if (iVar3 == 2) {
        local_20 = 0x51aa74;
        iVar3 = FUN_00520c1c(param_2);
        local_20 = 0x51aa7c;
        iVar3 = FUN_0051e184(iVar3,iVar5);
        local_20 = 0x51aa92;
        WVar4 = FUN_00413bd8(*(int **)(*(int *)(param_1 + 0x2f0) + 0x1f0),iVar3);
        local_20 = 0x51aaa2;
        FUN_0042a96c(*(int **)(param_1 + 0x2f8),WVar4);
        local_20 = 0x51aaaa;
        iVar3 = FUN_00520c1c(param_2);
        local_20 = 0x51aab2;
        iVar3 = FUN_0051e184(iVar3,iVar5);
        if (*(char *)(iVar3 + 0x24) == '\0') {
          local_20 = 0x51aacb;
          (**(code **)(**(int **)(param_1 + 800) + 0xb8))(*(int **)(param_1 + 800),1);
        }
        else {
          local_20 = 0x51aae0;
          (**(code **)(**(int **)(param_1 + 0x324) + 0xb8))(*(int **)(param_1 + 0x324),1);
        }
      }
      iVar5 = iVar5 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != (undefined1 *)0x0);
  }
  local_20 = 0x51aaf4;
  FUN_0051a2b0(param_1);
  *in_FS_OFFSET = local_1c;
  local_14 = &LAB_0051ab16;
  local_18 = (undefined1 *)0x51ab0e;
  FUN_00403dd4(&local_34,7);
  return;
}

