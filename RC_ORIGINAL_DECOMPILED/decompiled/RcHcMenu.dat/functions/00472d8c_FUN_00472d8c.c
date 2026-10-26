/*
 * FUN_00472d8c at 00472d8c
 * undefined4 __register FUN_00472d8c(int * param_1)
 * Address ranges: 00472d8c-00472e55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00472d8c(int *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined4 local_10;
  
  local_10 = 1;
  if (param_1[0x11] < 1) {
    iVar1 = param_1[0x1e];
    if ((iVar1 != 0) && (*(char *)(*(int *)(iVar1 + 0x28) + 0x8d) != '\x03')) {
      FUN_00473130(*(int **)(iVar1 + 0x28));
    }
  }
  else {
    (**(code **)(*param_1 + 0x184))(param_1,param_1[0x11] + -1);
    if ((*(char *)((int)param_1 + 0x8d) == '\x03') && (param_1[0x13] == param_1[0x12])) {
      uVar4 = FUN_004730d8((int)param_1);
      cVar3 = (**(code **)(*param_1 + 0x1b4))(param_1,uVar4);
      if (cVar3 == '\0') {
        local_10 = 0;
      }
    }
  }
  iVar1 = *param_1;
  cVar3 = (**(code **)(iVar1 + 0x1b8))
                    (param_1,*(undefined4 *)(param_1[0x14] + param_1[0x11] * 4),local_10,1);
  bVar5 = cVar3 == '\0';
  if (bVar5) {
    iVar2 = param_1[0x11];
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0x118))();
    }
    else if (iVar2 < param_1[0x10]) {
      param_1[0x11] = param_1[0x11] + 1;
    }
    else {
      FUN_00473080((int)param_1,0,iVar2);
    }
    param_1[0x13] = param_1[0x11] + -1;
    bVar5 = true;
  }
  else {
    FUN_00473148((int)param_1);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),bVar5);
}

