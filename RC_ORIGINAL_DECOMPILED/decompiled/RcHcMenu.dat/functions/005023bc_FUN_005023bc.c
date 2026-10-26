/*
 * FUN_005023bc at 005023bc
 * undefined __register FUN_005023bc(int * param_1, char param_2)
 * Address ranges: 005023bc-0050244e;00502456-00502493;0050249b-0050249f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x500d84 slot 76 for TDaviComboBase. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x500d84 slot 76 for
   TDaviComboBase. Original bytes unchanged; names and types still inferred. */

void FUN_005023bc(int *param_1,char param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  if ((*(byte *)(param_1 + 0x97) & 2) == 0) {
    return;
  }
  puStack_14 = (undefined1 *)0x5023e4;
  (**(code **)(*param_1 + 0xec))();
  puStack_18 = &LAB_00502494;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_20 = (undefined1 *)0x5023fa;
  puStack_14 = &stack0xfffffffc;
  uVar2 = FUN_005013c0((int)param_1);
  puVar1 = puStack_14;
  if ((char)uVar2 != '\0') {
    puStack_24 = &LAB_0050244f;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    FUN_005013f8(param_1,'\x06');
    if (param_2 != '\0') {
      FUN_005015b0(param_1);
      FUN_00501610(param_1);
    }
    *in_FS_OFFSET = uStack_28;
    puStack_20 = (undefined1 *)0x502456;
    puStack_24 = (undefined1 *)0x502443;
    FUN_005013f8(param_1,'\0');
    puStack_24 = (undefined1 *)0x50244e;
    (**(code **)(*param_1 + 0xe8))();
    return;
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = (undefined1 *)0x50249b;
  if (((*(byte *)(param_1 + 8) & 8) == 0) && (*(short *)((int)param_1 + 0x26a) != 0)) {
    puStack_18 = (undefined1 *)0x50248b;
    (*(code *)param_1[0x9a])(param_1[0x9b],param_1,puVar1);
  }
  *PTR_DAT_005720f8 = 1;
  return;
}

