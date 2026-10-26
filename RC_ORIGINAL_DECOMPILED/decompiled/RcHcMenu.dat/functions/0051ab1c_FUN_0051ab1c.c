/*
 * FUN_0051ab1c at 0051ab1c
 * undefined __register FUN_0051ab1c(int param_1, int param_2)
 * Address ranges: 0051ab1c-0051adbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051ab1c(int param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_18;
  int local_14;
  WPARAM local_10;
  int local_c;
  int local_8;
  
  puStack_1c = (undefined1 *)0x51ab30;
  local_c = param_2;
  local_8 = param_1;
  piVar3 = (int *)FUN_00520c1c(param_2);
  puStack_1c = (undefined1 *)0x51ab37;
  FUN_0051e704(piVar3,0);
  puStack_1c = (undefined1 *)0x51ab4b;
  iVar4 = (**(code **)(**(int **)(*(int *)(local_8 + 0x2e0) + 0x1f0) + 0x14))();
  uVar5 = iVar4 - 1;
  if (SBORROW4(iVar4,1)) {
    puStack_1c = (undefined1 *)0x51ab55;
    uVar5 = thunk_FUN_00402874(uVar5);
  }
  if (-1 < (int)uVar5) {
    local_18 = uVar5 + 1;
    local_10 = 0;
    do {
      piVar3 = *(int **)(*(int *)(local_8 + 0x2e0) + 0x1f0);
      puStack_1c = (undefined1 *)0x51ab7b;
      iVar4 = (**(code **)(*piVar3 + 0x18))(piVar3,local_10);
      puStack_1c = (undefined1 *)0x51ab83;
      FUN_0051cb0c(iVar4,local_10);
      local_10 = local_10 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  puStack_1c = (undefined1 *)0x51ab9f;
  iVar4 = (**(code **)(**(int **)(*(int *)(local_8 + 0x2e0) + 0x1f0) + 0x14))();
  uVar5 = iVar4 - 1;
  if (SBORROW4(iVar4,1)) {
    puStack_1c = (undefined1 *)0x51aba9;
    uVar5 = thunk_FUN_00402874(uVar5);
  }
  if (-1 < (int)uVar5) {
    local_18 = uVar5 + 1;
    local_10 = 0;
    do {
      piVar3 = *(int **)(*(int *)(local_8 + 0x2e0) + 0x1f0);
      puStack_1c = (undefined1 *)0x51abcf;
      puStack_1c = (undefined1 *)(**(code **)(*piVar3 + 0x18))(piVar3,local_10);
      puStack_20 = (undefined1 *)0x51abe1;
      uVar5 = FUN_005197fc(*(int **)(local_8 + 0x2e0),local_10);
      puVar1 = puStack_1c;
      puStack_1c = (undefined1 *)0x51abec;
      FUN_0051ced4((int)puVar1,(char)uVar5 != '\0');
      local_10 = local_10 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  puStack_1c = (undefined1 *)0x51abfc;
  uVar5 = FUN_00520c1c(local_c);
  puStack_1c = (undefined1 *)0x51ac01;
  FUN_005200dc(uVar5);
  puStack_20 = &LAB_0051adc0;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  iVar4 = FUN_00520c1c(local_c);
  iVar4 = FUN_0051e160(iVar4);
  uVar5 = iVar4 - 1;
  if (SBORROW4(iVar4,1)) {
    uVar5 = thunk_FUN_00402874(uVar5);
  }
  if (-1 < (int)uVar5) {
    local_18 = uVar5 + 1;
    local_10 = 0;
    do {
      iVar4 = FUN_00520c1c(local_c);
      iVar4 = FUN_0051e184(iVar4,local_10);
      FUN_0051cb6c(iVar4,-1);
      local_10 = local_10 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  iVar4 = FUN_0042a950(*(int **)(local_8 + 0x2f0));
  if (0 < iVar4) {
    uVar6 = FUN_0042a950(*(int **)(local_8 + 0x2f0));
    piVar3 = *(int **)(*(int *)(local_8 + 0x2f0) + 0x1f0);
    local_14 = (**(code **)(*piVar3 + 0x18))(piVar3,uVar6);
    FUN_0051cb6c(local_14,0);
    cVar2 = (**(code **)(**(int **)(local_8 + 0x308) + 0xb4))();
    if (cVar2 == '\0') {
      FUN_0051cc08(local_14,'\x01');
    }
    else {
      FUN_0051cc08(local_14,'\0');
    }
  }
  iVar4 = FUN_0042a950(*(int **)(local_8 + 0x2f4));
  if (0 < iVar4) {
    uVar6 = FUN_0042a950(*(int **)(local_8 + 0x2f4));
    piVar3 = *(int **)(*(int *)(local_8 + 0x2f4) + 0x1f0);
    local_14 = (**(code **)(*piVar3 + 0x18))(piVar3,uVar6);
    FUN_0051cb6c(local_14,1);
    cVar2 = (**(code **)(**(int **)(local_8 + 0x314) + 0xb4))();
    if (cVar2 == '\0') {
      FUN_0051cc08(local_14,'\x01');
    }
    else {
      FUN_0051cc08(local_14,'\0');
    }
  }
  iVar4 = FUN_0042a950(*(int **)(local_8 + 0x2f8));
  if (0 < iVar4) {
    uVar6 = FUN_0042a950(*(int **)(local_8 + 0x2f8));
    piVar3 = *(int **)(*(int *)(local_8 + 0x2f8) + 0x1f0);
    local_14 = (**(code **)(*piVar3 + 0x18))(piVar3,uVar6);
    FUN_0051cb6c(local_14,2);
    cVar2 = (**(code **)(**(int **)(local_8 + 800) + 0xb4))();
    if (cVar2 == '\0') {
      FUN_0051cc08(local_14,'\x01');
    }
    else {
      FUN_0051cc08(local_14,'\0');
    }
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0051adc7;
  puStack_20 = (undefined1 *)0x51adba;
  piVar3 = (int *)FUN_00520c1c(local_c);
  puStack_20 = (undefined1 *)0x51adbf;
  FUN_005200f8(piVar3);
  return;
}

