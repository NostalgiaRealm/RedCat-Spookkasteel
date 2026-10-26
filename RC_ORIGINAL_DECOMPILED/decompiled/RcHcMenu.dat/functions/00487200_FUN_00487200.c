/*
 * FUN_00487200 at 00487200
 * undefined __register FUN_00487200(int param_1)
 * Address ranges: 00487200-00487301
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47e3e4 slot 148 for TNestedTable. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47e3e4 slot 148 for
   TNestedTable. Original bytes unchanged; names and types still inferred. */

void FUN_00487200(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 *local_c [2];
  
  puStack_1c = &stack0xfffffffc;
  local_c[0] = (undefined4 *)0x0;
  puStack_20 = &LAB_00487302;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar2 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0x78) == 0) {
    FUN_00406a48((undefined4 *)PTR_PTR_00572318,(int *)local_c);
    FUN_00466d84(local_c[0],param_1);
    puVar2 = puStack_1c;
  }
  puStack_1c = puVar2;
  piVar3 = (int *)FUN_00403224(*(int **)(*(int *)(param_1 + 0x78) + 0x28),(int)&PTR_FUN_0047dcb0);
  *(int **)(param_1 + 0x20c) = piVar3;
  FUN_004716b0(param_1,piVar3);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x20c) + 0x168);
  piVar3 = *(int **)(param_1 + 0x78);
  if ((char)piVar3[0xd] == '\x1d') {
    uVar4 = (**(code **)(*piVar3 + 0x74))();
    uVar5 = thunk_FUN_00478c3c(uVar4);
    FUN_0047fe48(uVar5);
  }
  else {
    uVar4 = (**(code **)(*piVar3 + 0x74))();
    uVar5 = thunk_FUN_00478c30(uVar4);
    FUN_0047fe48(uVar5);
  }
  FUN_00467f08(*(int *)(param_1 + 0x2c),
               *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x20c) + 0x2c) + 0x3c));
  if (*(char *)(*(int *)(param_1 + 0x78) + 0xf0) == '\0') {
    *(undefined4 *)(param_1 + 0x88) = 2;
  }
  else {
    *(undefined4 *)(param_1 + 0x88) = 1;
  }
  *in_FS_OFFSET = uVar1;
  FUN_00403db0((int *)local_c);
  return;
}

