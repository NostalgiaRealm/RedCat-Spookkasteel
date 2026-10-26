/*
 * FUN_00527d14 at 00527d14
 * undefined __register FUN_00527d14(int * param_1)
 * Address ranges: 00527d14-00527daf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x525ae0 slot 46 for TAppObjGridHeader. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x525ae0 slot 46 for
   TAppObjGridHeader. Original bytes unchanged; names and types still inferred. */

void FUN_00527d14(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int *local_8;
  
  puStack_c = (undefined1 *)0x527d24;
  local_8 = param_1;
  FUN_00459af0(-0xb);
  puStack_10 = &LAB_00527dd2;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  puStack_18 = (undefined1 *)0x527d3a;
  puStack_c = &stack0xfffffffc;
  uVar1 = FUN_00527214(local_8);
  puStack_18 = (undefined1 *)0x527d3f;
  FUN_005298b4(uVar1);
  puStack_1c = &LAB_00527db0;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  iVar2 = FUN_00527214(local_8);
  FUN_0052766c(local_8,*(int *)(iVar2 + 0x294));
  iVar2 = FUN_00527214(local_8);
  iVar2 = *(int *)(iVar2 + 0x294);
  iVar3 = FUN_00527214(local_8);
  FUN_00529270(iVar3,iVar2);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00527db7;
  puStack_1c = (undefined1 *)0x527d95;
  piVar4 = (int *)FUN_00527214(local_8);
  puStack_1c = (undefined1 *)0x527d9a;
  piVar4 = (int *)FUN_005285b8(piVar4);
  puStack_1c = (undefined1 *)0x527da2;
  (**(code **)(*piVar4 + 0xcc))();
  puStack_1c = (undefined1 *)0x527daa;
  piVar4 = (int *)FUN_00527214(local_8);
  puStack_1c = (undefined1 *)0x527daf;
  FUN_005298d0(piVar4);
  return;
}

