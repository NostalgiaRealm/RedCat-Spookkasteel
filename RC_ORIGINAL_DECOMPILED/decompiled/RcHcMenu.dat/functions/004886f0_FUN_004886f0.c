/*
 * FUN_004886f0 at 004886f0
 * undefined __register FUN_004886f0(int * param_1, char param_2)
 * Address ranges: 004886f0-004887c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004886f0(int *param_1,char param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  puStack_1c = &LAB_004887c6;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if (param_1[0x5a] != 0) {
    FUN_00406a48((undefined4 *)PTR_PTR_005725e0,(int *)&local_8);
    FUN_00466d84(local_8,(int)param_1);
    puVar1 = puStack_18;
  }
  puStack_18 = puVar1;
  if (param_2 != (char)param_1[0x8f]) {
    if (param_2 == '\0') {
      if (*(char *)((int)param_1 + 0x25f) != '\0') {
        iVar2 = FUN_00488ce4((int)param_1);
        param_1[0x94] = iVar2;
      }
      (**(code **)(*param_1 + 0x26c))();
    }
    else {
      param_1[0x94] = -1;
      *(undefined1 *)((int)param_1 + 0x25f) = 1;
      iVar2 = FUN_00404030(param_1[0x91]);
      if (iVar2 < 2) {
        FUN_00406a48((undefined4 *)PTR_PTR_005722a4,(int *)&local_c);
        FUN_00466d84(local_c,(int)param_1);
      }
      else {
        FUN_004041f4((undefined *)param_1[0x91]);
        FUN_00488b6c(param_1);
      }
    }
    *(char *)(param_1 + 0x8f) = param_2;
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004887cd;
  puStack_1c = (undefined1 *)0x4887c5;
  FUN_00403dd4((int *)&local_c,2);
  return;
}

