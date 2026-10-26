/*
 * FUN_00546e28 at 00546e28
 * undefined __register FUN_00546e28(int * param_1)
 * Address ranges: 00546e28-00546e8a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x54580c slot 33 for TAppObjQueryList. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x54580c slot 33 for
   TAppObjQueryList. Original bytes unchanged; names and types still inferred. */

void FUN_00546e28(int *param_1)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  char local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x546e39;
  local_8 = param_1;
  FUN_0054b510((uint)param_1);
  puStack_14 = &LAB_00546e8b;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  cVar1 = (**(code **)*local_8)();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*local_8 + 0x1c))();
    if (cVar1 != '\0') {
      local_9 = '\x01';
      goto LAB_00546e64;
    }
  }
  local_9 = '\0';
LAB_00546e64:
  if (local_9 != '\0') {
    (**(code **)(*local_8 + 0x18))();
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_00546e92;
  puStack_14 = (undefined1 *)0x546e8a;
  FUN_0054b528(local_8);
  return;
}

