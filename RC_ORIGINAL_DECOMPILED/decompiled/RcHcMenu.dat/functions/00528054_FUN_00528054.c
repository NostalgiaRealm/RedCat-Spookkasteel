/*
 * FUN_00528054 at 00528054
 * undefined __register FUN_00528054(int * param_1)
 * Address ranges: 00528054-00528145
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x525c38 slot 45 for TAppObjGridData. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x525c38 slot 45 for
   TAppObjGridData. Original bytes unchanged; names and types still inferred. */

void FUN_00528054(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_c;
  int *local_8;
  
  local_c = 0;
  puStack_10 = (undefined1 *)0x52806a;
  local_8 = param_1;
  iVar3 = FUN_00527ddc(param_1);
  puStack_10 = (undefined1 *)0x52806f;
  uVar4 = FUN_00529294(iVar3);
  if ((char)uVar4 != '\0') {
    puStack_10 = (undefined1 *)0x52807b;
    iVar3 = FUN_00527ddc(local_8);
    puStack_10 = (undefined1 *)0x528086;
    cVar2 = (**(code **)(**(int **)(iVar3 + 0x290) + 100))();
    if (cVar2 == '\0') {
      puStack_10 = (undefined1 *)0x528092;
      iVar3 = FUN_00527ddc(local_8);
      puStack_10 = (undefined1 *)0x52809d;
      local_c = (**(code **)(**(int **)(iVar3 + 0x290) + 4))();
      puStack_10 = (undefined1 *)0x5280a8;
      iVar3 = FUN_00527ddc(local_8);
      puStack_10 = (undefined1 *)0x5280b3;
      FUN_0054b510(*(uint *)(iVar3 + 0x290));
    }
  }
  puStack_14 = &LAB_00528146;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_0052485c(local_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0052814d;
  puStack_14 = (undefined1 *)0x5280de;
  iVar3 = FUN_00527ddc(local_8);
  puStack_14 = (undefined1 *)0x5280e3;
  uVar4 = FUN_00529294(iVar3);
  if ((char)uVar4 != '\0') {
    puStack_14 = (undefined1 *)0x5280ef;
    iVar3 = FUN_00527ddc(local_8);
    puStack_14 = (undefined1 *)0x5280fa;
    cVar2 = (**(code **)(**(int **)(iVar3 + 0x290) + 100))();
    if (cVar2 == '\0') {
      puStack_14 = (undefined1 *)0x528106;
      iVar3 = FUN_00527ddc(local_8);
      puStack_14 = (undefined1 *)0x528111;
      uVar5 = (**(code **)(**(int **)(iVar3 + 0x290) + 4))();
      puStack_14 = (undefined1 *)(local_c - uVar5);
      if (SBORROW4(local_c,uVar5)) {
        puStack_14 = (undefined1 *)0x52811d;
        thunk_FUN_00402874(uVar5);
        puStack_14 = (undefined1 *)extraout_EDX;
      }
      uStack_18 = 0x528126;
      iVar3 = FUN_00527ddc(local_8);
      puVar1 = puStack_14;
      puStack_14 = (undefined1 *)0x528132;
      FUN_0054823c(*(int **)(iVar3 + 0x290),puVar1);
      puStack_14 = (undefined1 *)0x52813a;
      iVar3 = FUN_00527ddc(local_8);
      puStack_14 = (undefined1 *)0x528145;
      FUN_0054b528(*(int **)(iVar3 + 0x290));
    }
  }
  return;
}

