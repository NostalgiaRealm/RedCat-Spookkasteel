/*
 * FUN_00546db4 at 00546db4
 * undefined __register FUN_00546db4(int * param_1)
 * Address ranges: 00546db4-00546e16
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x54580c slot 32 for TAppObjQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x54580c slot 32 for
   TAppObjQueryList. Original bytes unchanged; names and types still inferred. */

void FUN_00546db4(int *param_1)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  char local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x546dc5;
  local_8 = param_1;
  FUN_0054b510((uint)param_1);
  puStack_14 = &LAB_00546e17;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  cVar1 = (**(code **)*local_8)();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*local_8 + 0x18))();
    if (cVar1 != '\0') {
      local_9 = '\x01';
      goto LAB_00546df0;
    }
  }
  local_9 = '\0';
LAB_00546df0:
  if (local_9 != '\0') {
    (**(code **)(*local_8 + 0x1c))();
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00546e1e;
  puStack_14 = (undefined1 *)0x546e16;
  FUN_0054b528(local_8);
  return;
}

