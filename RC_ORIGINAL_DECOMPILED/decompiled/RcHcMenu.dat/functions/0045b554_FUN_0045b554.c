/*
 * FUN_0045b554 at 0045b554
 * undefined __register FUN_0045b554(int * param_1, char param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5, undefined4 * param_6)
 * Address ranges: 0045b554-0045b6ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045b554(int *param_1,char param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 *extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *extraout_EDX;
  undefined4 *extraout_EDX_00;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_38;
  undefined1 *puStackY_34;
  undefined1 *puStackY_30;
  undefined4 in_stack_ffffffd4;
  undefined4 in_stack_ffffffd8;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined1 local_9;
  int *local_8;
  
  local_18 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStackY_30 = (undefined1 *)0x45b56f;
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffd4,in_stack_ffffffd8);
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStackY_34 = &LAB_0045b6ad;
  uStackY_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_38;
  puStackY_30 = &stack0xfffffffc;
  local_10 = param_3;
  local_8 = param_1;
  FUN_00403e48((int *)&local_14,(int)param_3);
  if (local_10 != (undefined4 *)0x0) {
    iVar1 = 0;
    puVar3 = param_6;
    if (param_6[-1] == 0) {
      iVar1 = thunk_FUN_00402874(0);
      puVar3 = extraout_EDX;
    }
    if (*(char *)((int)puVar3 + iVar1) != '.') {
      FUN_00404038((int *)&local_14,(undefined4 *)&DAT_0045b6e0);
    }
  }
  FUN_00409974((int)param_6,(int *)&local_18);
  FUN_00404038((int *)&local_14,local_18);
  iVar1 = FUN_00404030((int)local_14);
  uVar2 = iVar1 - 1;
  puVar3 = local_14;
  if ((uint)local_14[-1] <= uVar2) {
    uVar2 = thunk_FUN_00402874(uVar2);
    puVar3 = extraout_EDX_00;
  }
  if (*(char *)((int)puVar3 + uVar2) == ':') {
    FUN_00404038((int *)&local_14,(undefined4 *)&DAT_0045b6ec);
  }
  else {
    FUN_00404038((int *)&local_14,(undefined4 *)&LAB_0045b6f8);
  }
  FUN_00404038((int *)&local_14,param_5);
  FUN_0040ceec(local_8,'\0',local_14);
  (**(code **)*local_8)();
  FUN_00403e04(local_8 + 3,local_10);
  FUN_00403e04(local_8 + 4,param_5);
  FUN_00403e04(local_8 + 5,param_6);
  if (param_4 == (undefined4 *)0x0) {
    if (param_5 == (undefined4 *)0x0) {
      FUN_00403e04(local_8 + 6,local_14);
    }
    else {
      FUN_00403e04(local_8 + 6,param_5);
    }
  }
  else {
    FUN_00403e04(local_8 + 6,param_4);
  }
  *in_FS_OFFSET = uStackY_38;
  puStackY_30 = &LAB_0045b6b4;
  puStackY_34 = (undefined1 *)0x45b6ac;
  FUN_00403dd4((int *)&local_18,2);
  return;
}

