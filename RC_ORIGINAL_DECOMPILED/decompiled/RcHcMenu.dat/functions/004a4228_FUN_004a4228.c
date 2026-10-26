/*
 * FUN_004a4228 at 004a4228
 * undefined __register FUN_004a4228(int param_1, char param_2, undefined4 * param_3)
 * Address ranges: 004a4228-004a42b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a4228(int param_1,char param_2,undefined4 *param_3)

{
  DWORD DVar1;
  undefined4 uVar2;
  undefined4 *extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;
  undefined1 *puStackY_28;
  undefined1 *puStackY_24;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  undefined4 *local_10;
  undefined1 local_9;
  int local_8;
  
  local_9 = 0;
  if (param_2 != '\0') {
    puStackY_24 = (undefined1 *)0x4a423a;
    param_1 = FUN_004033d4(param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStackY_24 = (undefined1 *)0x4a424b;
  local_10 = param_3;
  local_8 = param_1;
  FUN_004041e4((int)param_3);
  puStackY_28 = &LAB_004a42b4;
  uStackY_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_2c;
  puStackY_24 = &stack0xfffffffc;
  FUN_00403e04((int *)(local_8 + 4),local_10);
  *(undefined1 *)(local_8 + 0xc) = 1;
  DVar1 = GetTickCount();
  if ((int)DVar1 < 0) {
    DVar1 = thunk_FUN_00402874(DVar1);
  }
  *(DWORD *)(local_8 + 0x14) = DVar1;
  uVar2 = FUN_00409dd0(*(undefined **)(local_8 + 4));
  if ((char)uVar2 != '\0') {
    FUN_004a4bf4(local_8,0x4a42e4);
  }
  *in_FS_OFFSET = uStackY_2c;
  puStackY_24 = &LAB_004a42bb;
  puStackY_28 = (undefined1 *)0x4a42b3;
  FUN_00403db0((int *)&local_10);
  return;
}

