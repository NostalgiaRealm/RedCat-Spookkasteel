/*
 * FUN_00527fc0 at 00527fc0
 * undefined __register FUN_00527fc0(int * param_1, byte param_2, int param_3)
 * Address ranges: 00527fc0-00528046;0052804e-00528051
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x525c38 slot 47 for TAppObjGridData. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x525c38 slot 47 for
   TAppObjGridData. Original bytes unchanged; names and types still inferred. */

void FUN_00527fc0(int *param_1,byte param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_10;
  byte local_9;
  int *local_8;
  
  puStack_14 = (undefined1 *)0x527fd7;
  local_10 = param_3;
  local_9 = param_2;
  local_8 = param_1;
  iVar2 = FUN_00527ddc(param_1);
  puStack_14 = (undefined1 *)0x527fdc;
  uVar3 = FUN_00529294(iVar2);
  if ((char)uVar3 != '\0') {
    puStack_14 = (undefined1 *)0x527fe8;
    iVar2 = FUN_00527ddc(local_8);
    puStack_14 = (undefined1 *)0x527ff3;
    cVar1 = (**(code **)(**(int **)(iVar2 + 0x290) + 100))();
    if (cVar1 == '\0') {
      puStack_14 = (undefined1 *)0x527fff;
      iVar2 = FUN_00527ddc(local_8);
      puStack_14 = (undefined1 *)0x52800a;
      FUN_0054b510(*(uint *)(iVar2 + 0x290));
      puStack_18 = &LAB_00528047;
      uStack_1c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_1c;
      puStack_14 = &stack0xfffffffc;
      FUN_00523814(local_8,local_9,local_10);
      *in_FS_OFFSET = uStack_1c;
      puStack_14 = (undefined1 *)0x52804e;
      puStack_18 = (undefined1 *)0x52803b;
      iVar2 = FUN_00527ddc(local_8);
      puStack_18 = (undefined1 *)0x528046;
      FUN_0054b528(*(int **)(iVar2 + 0x290));
      return;
    }
  }
  return;
}

