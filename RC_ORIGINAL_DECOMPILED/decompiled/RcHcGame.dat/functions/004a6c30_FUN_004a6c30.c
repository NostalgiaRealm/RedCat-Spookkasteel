/*
 * FUN_004a6c30 at 004a6c30
 * undefined FUN_004a6c30(void)
 * Address ranges: 004a6c30-004a6d15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004a6c30(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_10 [16];
  
  if (*(char *)(param_1 + 0x144) != '\0') {
    if (*(int *)(param_1 + 0x114) == 0) {
      uVar2 = FUN_00569110(1,param_1 + 0x130,*(undefined4 *)(param_1 + 0x140));
      *(undefined4 *)(param_1 + 0x114) = uVar2;
    }
    if (param_2 != *(int *)(param_1 + 0x148)) {
      local_20 = *(undefined4 *)(param_1 + 0x118);
      local_18 = *(undefined4 *)(param_1 + 0x120);
      *(int *)(param_1 + 0x148) = param_2;
      local_1c = *(undefined4 *)(param_1 + 0x11c);
      local_30 = *(undefined4 *)(param_1 + 0x124);
      local_2c = *(undefined4 *)(param_1 + 0x128);
      local_28 = *(undefined4 *)(param_1 + 300);
      puVar3 = (undefined4 *)FUN_00569070(local_10,param_3,&local_20,&local_30);
      uVar2 = puVar3[1];
      uVar1 = puVar3[2];
      *(undefined4 *)(param_1 + 0x24) = *puVar3;
      *(undefined4 *)(param_1 + 0x28) = uVar2;
      *(undefined4 *)(param_1 + 0x2c) = uVar1;
    }
  }
  return;
}

