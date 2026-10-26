/*
 * FUN_005053a8 at 005053a8
 * undefined __register FUN_005053a8(int * param_1, int * param_2)
 * Address ranges: 005053a8-00505407
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x504a1c slot 5 for TIndexedLookupProp. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x504a1c slot 5 for
   TIndexedLookupProp. Original bytes unchanged; names and types still inferred. */

void FUN_005053a8(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 *local_10;
  int *local_c;
  int *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  puStack_1c = &LAB_00505408;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_c = param_2;
  local_8 = param_1;
  uVar1 = (**(code **)(*param_1 + 0x70))();
  iVar2 = FUN_00505414((int)local_8);
  (**(code **)(**(int **)(iVar2 + 0x48) + 0xc))(*(int **)(iVar2 + 0x48),uVar1,&local_10);
  FUN_004586fc('&',local_10,local_c);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0050540f;
  puStack_1c = (undefined1 *)0x505407;
  FUN_00403db0((int *)&local_10);
  return;
}

