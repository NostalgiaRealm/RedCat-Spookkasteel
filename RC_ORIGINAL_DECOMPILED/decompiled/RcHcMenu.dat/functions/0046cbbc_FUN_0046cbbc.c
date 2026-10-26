/*
 * FUN_0046cbbc at 0046cbbc
 * undefined __register FUN_0046cbbc(int param_1, int * param_2)
 * Address ranges: 0046cbbc-0046cc1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x464b88 slot 22 for TBlobField. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x464b88 slot 22 for
   TBlobField. Original bytes unchanged; names and types still inferred. */

void FUN_0046cbbc(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x46cbd4;
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x28) + 0x210))
                            (*(int **)(param_1 + 0x28),param_1,0);
  puStack_18 = &LAB_0046cc20;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  uVar2 = FUN_004147cc(piVar1);
  FUN_00403e98(param_2,(undefined4 *)0x0,uVar2);
  FUN_00414804(piVar1,*param_2,uVar2);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0046cc27;
  puStack_18 = (undefined1 *)0x46cc1f;
  FUN_00403094(piVar1);
  return;
}

