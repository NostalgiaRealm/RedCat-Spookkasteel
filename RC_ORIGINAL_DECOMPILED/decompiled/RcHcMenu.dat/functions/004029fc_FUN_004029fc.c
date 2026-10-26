/*
 * FUN_004029fc at 004029fc
 * undefined __register FUN_004029fc(void)
 * Address ranges: 004029fc-00402a4c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004029fc(void)

{
  byte *pbVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_00402a4d;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  pbVar1 = (byte *)GetCommandLineA();
  pbVar1 = FUN_00402984(pbVar1,&local_8);
  do {
    pbVar1 = FUN_00402984(pbVar1,&local_8);
  } while (local_8 != 0);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00402a54;
  puStack_18 = (undefined1 *)0x402a4c;
  FUN_00403db0(&local_8);
  return;
}

