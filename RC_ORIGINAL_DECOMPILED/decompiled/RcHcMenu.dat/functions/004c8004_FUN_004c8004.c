/*
 * FUN_004c8004 at 004c8004
 * undefined __register FUN_004c8004(undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 004c8004-004c813a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c8004(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  HWND hWnd;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  RECT *pRVar5;
  int nIndex;
  RECT local_28;
  int *local_18;
  undefined4 local_14;
  int *local_10;
  uint local_c;
  uint local_8;
  
  DAT_00571cd0 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',param_3);
  (**(code **)(*DAT_00571cd0 + 0x40))(DAT_00571cd0,8);
  (**(code **)(*DAT_00571cd0 + 0x34))(DAT_00571cd0,8);
  for (local_10 = *(int **)(*(int *)(param_4 + -4) + 0x24); local_10 != (int *)0x0;
      local_10 = (int *)local_10[9]) {
    nIndex = -0x14;
    hWnd = (HWND)FUN_00438988(local_10);
    uVar1 = GetWindowLongA(hWnd,nIndex);
    if ((uVar1 & 0x20) != 0x20) break;
  }
  if (local_10 == (int *)0x0) {
    local_14 = 0x8000000f;
  }
  else {
    local_14 = FUN_0041c310(local_10[0x4c]);
  }
  local_18 = (int *)FUN_00421490(DAT_00571cd0);
  FUN_0041c434((int *)local_18[5],'\0');
  FUN_0041c318((int *)local_18[5],local_14);
  uVar2 = (**(code **)(*DAT_00571cd0 + 0x20))();
  pRVar5 = &local_28;
  uVar3 = (**(code **)(*DAT_00571cd0 + 0x2c))();
  FUN_00411624(0,0,uVar3,&pRVar5->left,uVar2);
  FUN_0041c9f8(local_18,&local_28);
  local_c = 0;
  do {
    local_8 = 0;
    do {
      uVar1 = local_c & 0x80000001;
      if ((int)uVar1 < 0) {
        uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
      }
      uVar4 = local_8 & 0x80000001;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
      }
      if (uVar1 == uVar4) {
        FUN_0041cf00(local_18,local_8,local_c,0x80000014);
      }
      local_8 = local_8 + 1;
    } while (local_8 != 8);
    local_c = local_c + 1;
  } while (local_c != 8);
  return;
}

