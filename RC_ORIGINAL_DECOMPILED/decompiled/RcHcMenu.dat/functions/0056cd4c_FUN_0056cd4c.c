/*
 * FUN_0056cd4c at 0056cd4c
 * undefined __register FUN_0056cd4c(int * param_1, char param_2)
 * Address ranges: 0056cd4c-0056cda2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x56ca40 slot -1 for TDaviExceptionLogger. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x56ca40 slot -1 for
   TDaviExceptionLogger. Original bytes unchanged; names and types still inferred. */

void FUN_0056cd4c(int *param_1,char param_2)

{
  bool bVar1;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  char *pcVar2;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x56cd57;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_0056cda3;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pcVar2 = (char *)0x56cd70;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  bVar1 = FUN_0056ca58();
  if (bVar1) {
    pcVar2 = "**Destroy: Exception logging ended ** ";
    FUN_0056cffc(*local_8,0,0,0x56cdc4);
  }
  *in_FS_OFFSET = pcVar2;
  puStack_14 = &LAB_0056cdaa;
  uStack_18 = 0x56cda2;
  FUN_00403084(local_8,local_9 & 0xfc);
  return;
}

