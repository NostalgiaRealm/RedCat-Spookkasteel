/*
 * FUN_004a0634 at 004a0634
 * undefined __register FUN_004a0634(int * param_1, undefined4 param_2)
 * Address ranges: 004a0634-004a06d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot 19 for TDaviAnimation. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49f730 slot 19 for
   TDaviAnimation. Original bytes unchanged; names and types still inferred. */

void FUN_004a0634(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  byte local_11c [256];
  undefined4 *local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 *local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  local_1c = (undefined4 *)0x0;
  puStack_124 = &LAB_004a06d4;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  pcVar4 = "SafeToFile";
  local_14 = 0xb;
  local_18 = param_2;
  local_c = param_2;
  local_8 = param_1;
  FUN_0040a894((byte *)"Unable to save to file %s.",&local_18,0,(int *)&local_10);
  pcVar2 = "Function is not implemented.";
  puVar3 = local_10;
  FUN_00402fe0(*local_8,local_11c);
  FUN_00403fd4((int *)&local_1c,local_11c);
  uVar1 = FUN_0045b554((int *)&PTR_FUN_0045b3e0,'\x01',local_1c,(undefined4 *)pcVar2,puVar3,
                       (undefined4 *)pcVar4);
  FUN_0040382c(uVar1);
  *in_FS_OFFSET = pcVar2;
  FUN_00403db0((int *)&local_1c);
  FUN_00403db0((int *)&local_10);
  return;
}

