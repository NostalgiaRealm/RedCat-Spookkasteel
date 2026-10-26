/*
 * FUN_005024a0 at 005024a0
 * undefined __register FUN_005024a0(int * param_1)
 * Address ranges: 005024a0-0050253c;00502544-00502581;00502589-0050258c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x500d84 slot 77 for TDaviComboBase. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x500d84 slot 77 for
   TDaviComboBase. Original bytes unchanged; names and types still inferred. */

void FUN_005024a0(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  if (*(char *)((int)param_1 + 0x1f6) == '\0') {
    puStack_10 = (undefined1 *)0x5024c0;
    cVar2 = (**(code **)(*param_1 + 0x4c))();
    if ((cVar2 != '\0') && ((*(byte *)(param_1 + 0x97) & 2) == 0)) {
      puStack_10 = (undefined1 *)0x5024e0;
      FUN_0050234c(param_1);
      puStack_10 = (undefined1 *)0x5024eb;
      (**(code **)(*param_1 + 0xf0))();
      puStack_14 = &LAB_00502582;
      uStack_18 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_18;
      puStack_1c = (undefined1 *)0x502501;
      puStack_10 = &stack0xfffffffc;
      uVar3 = FUN_005013c0((int)param_1);
      puVar1 = puStack_10;
      if ((char)uVar3 != '\0') {
        puStack_20 = &LAB_0050253d;
        uStack_24 = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_24;
        puStack_1c = &stack0xfffffffc;
        FUN_005013f8(param_1,'\x05');
        FUN_005015e0(param_1);
        *in_FS_OFFSET = uStack_24;
        puStack_1c = (undefined1 *)0x502544;
        puStack_20 = (undefined1 *)0x50253c;
        FUN_005013f8(param_1,'\0');
        return;
      }
      *in_FS_OFFSET = uStack_18;
      puStack_10 = (undefined1 *)0x502589;
      if (((*(byte *)(param_1 + 8) & 8) == 0) && (*(short *)((int)param_1 + 0x272) != 0)) {
        puStack_14 = (undefined1 *)0x502579;
        (*(code *)param_1[0x9c])(param_1[0x9d],param_1,puVar1);
      }
      *PTR_DAT_005720f8 = 0;
      return;
    }
  }
  return;
}

