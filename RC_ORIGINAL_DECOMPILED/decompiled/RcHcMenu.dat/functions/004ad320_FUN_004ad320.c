/*
 * FUN_004ad320 at 004ad320
 * undefined __register FUN_004ad320(int * param_1, char param_2)
 * Address ranges: 004ad320-004ad3aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ac510 slot -1 for TGDICustomButtonDefinition. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ac510 slot -1 for
   TGDICustomButtonDefinition. Original bytes unchanged; names and types still inferred. */

void FUN_004ad320(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_a;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x4ad32b;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_004ad3ab;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_0040e4b4(local_8 + 0x1a);
  FUN_004ad80c((int)local_8,0x5405,0,0);
  FUN_0040e4b4(local_8 + 0x14);
  local_a = 0;
  do {
    FUN_0040e4b4(local_8 + local_a + 9);
    local_a = local_a + 1;
  } while (local_a != 7);
  FUN_0040e4b4(local_8 + 0x12);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004ad3b2;
  puStack_14 = (undefined1 *)0x4ad3aa;
  FUN_00418f4c(local_8,local_9 & 0xfc);
  return;
}

