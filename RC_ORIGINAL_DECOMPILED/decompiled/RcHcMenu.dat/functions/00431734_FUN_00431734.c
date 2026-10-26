/*
 * FUN_00431734 at 00431734
 * undefined __register FUN_00431734(int param_1)
 * Address ranges: 00431734-0043179a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x42761c slot 8 for TButtonActionLink. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x42761c slot 8 for
   TButtonActionLink. Original bytes unchanged; names and types still inferred. */

void FUN_00431734(int param_1)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (uint *)0x0;
  puStack_14 = &LAB_0043179b;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  cVar2 = FUN_0043da84(param_1);
  if (cVar2 != '\0') {
    FUN_00432714(*(int *)(param_1 + 0x18),(int *)&local_8);
    puVar1 = local_8;
    iVar3 = FUN_00403224(*(int **)(param_1 + 0x10),(int)&PTR_FUN_0043d40c);
    FUN_00404140(puVar1,*(uint **)(iVar3 + 0x54));
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004317a2;
  puStack_14 = (undefined1 *)0x43179a;
  FUN_00403db0((int *)&local_8);
  return;
}

