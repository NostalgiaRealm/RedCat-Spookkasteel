/*
 * FUN_0049c540 at 0049c540
 * undefined FUN_0049c540(void)
 * Address ranges: 0049c540-0049c565
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64bb14 slot 25 for .?AVCRcAnyActor@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64bb14 slot 25 for
   .?AVCRcAnyActor@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_0049c540(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_18 [24];
  
  puVar1 = (undefined4 *)FUN_0049bc00(local_18);
  puVar3 = (undefined4 *)(param_1 + 0x134);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

