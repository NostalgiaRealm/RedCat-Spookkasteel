/*
 * FUN_005650c4 at 005650c4
 * undefined __register FUN_005650c4(undefined4 param_1, int param_2, int * param_3)
 * Address ranges: 005650c4-005651b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005650c4(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int *in_FS_OFFSET;
  int iStack_50;
  int iStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int local_24;
  int local_20 [2];
  char local_16;
  char local_15;
  undefined4 *local_14;
  int *local_10;
  int local_c;
  undefined4 local_8;
  
  local_20[0] = 0;
  local_24 = 0;
  local_20[1] = 0;
  local_14 = (undefined4 *)0x0;
  puStack_2c = (undefined1 *)0x5650ea;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4(param_2);
  puStack_30 = &LAB_005651b6;
  iStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_34;
  puStack_2c = &stack0xfffffffc;
  FUN_00403db0(local_10);
  local_16 = 'c';
  uVar3 = extraout_EDX;
  cVar2 = local_15;
  do {
    local_15 = cVar2;
    FUN_00403f58(local_20 + 1,CONCAT31((int3)((uint)uVar3 >> 8),local_16));
    iStack_34 = local_c;
    FUN_004040f0((int *)&local_14,3);
    uVar3 = FUN_00409dd0((undefined *)local_14);
    local_15 = (char)uVar3;
    if (local_15 != '\0') {
      FUN_00403e04(local_10,local_14);
      uVar3 = extraout_EDX_01;
      break;
    }
    local_16 = local_16 + '\x01';
    uVar3 = extraout_EDX_00;
    cVar2 = 0;
  } while (local_16 != '{');
  if (local_15 == '\0') {
    FUN_00403f58(&local_24,CONCAT31((int3)((uint)uVar3 >> 8),local_16));
    iStack_50 = local_c;
    FUN_004040f0(local_20,4);
    iVar1 = local_20[0];
    iVar4 = FUN_004a418c();
    FUN_004a4bf4(iVar4,iVar1);
  }
  *in_FS_OFFSET = iStack_50;
  FUN_00403dd4(&local_24,3);
  FUN_00403db0((int *)&local_14);
  FUN_00403db0(&local_c);
  return;
}

